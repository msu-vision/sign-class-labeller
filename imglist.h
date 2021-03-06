#ifndef IMGLIST_H_
#define IMGLIST_H_

#include <tuple>

#include <QListWidget>
#include <QVector>
#include <QIcon>

class ImgList : public QListWidget {
  Q_OBJECT

 public:
  ImgList(const QSize &item_size, bool multiselect = false);
  void set_imgs(const QVector<std::tuple<QString, QIcon>> &icons);
  void set_imgs(const QVector<std::tuple<QString, QIcon>> &icons,
                const QVector<bool> &marks);
  void select_icon(const QString &label);

 private:
  QSize item_size_;
};

#endif  // IMGLIST_H_
