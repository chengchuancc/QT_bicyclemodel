#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>

class widget : public QWidget
{
    Q_OBJECT
public:
    explicit widget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // WIDGET_H
