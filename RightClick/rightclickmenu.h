#ifndef RIGHTCLICKMENU_H
#define RIGHTCLICKMENU_H

#include <QWidget>

class RightClickMenu : public QWidget
{
    Q_OBJECT
public:
    // Constructor
    explicit RightClickMenu(QWidget *parent = 0);

    // Event
    void leaveEvent(QEvent * event);

private:

signals:
    void closeRightClick();
    
public slots:
};

#endif // RIGHTCLICKMENU_H
