#ifndef CUSTOMWEBVIEW_H
#define CUSTOMWEBVIEW_H

#include <QWidget>
#include <QWebView>
#include "../RightClick/rightclickmenu.h"
#include "webviewmousetracking.h"
#include <QSettings>
#include <QUrl>


class CustomWebView : public QWidget
{
    Q_OBJECT
private:
    WebViewMouseTracking *webView;
    RightClickMenu *rcm;
    QWidget *realParent;
    QUrl *loadedUrl;

    //LUDO
    QSettings *settingFavs;
    QStringList *urlFav;
    QStringList *titleFav;
    QStringList *nbClick;

public:
    // Constructor
    explicit CustomWebView(QWidget *parent = 0, QWidget *realParent = 0);

    // Getter
    QWebView* getWebView();
    QUrl* getLoadedUrl();

signals:
    void survolWebView(); // Signal to real parent

public slots:
    // Open right click
    void openRCM(QPoint p);

    // Slot for mouse move WebView
    void mouseMoveWebView();

    // Slot for right click
    void closeRightClick();
    void clickItem(int b);
};

#endif // CUSTOMWEBVIEW_H
