#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QtWebKit>
#include <QVBoxLayout>
#include <QMenuBar>

#include "CustomWebView/customwebview.h"
#include "RightClick/rightclickmenu.h"
#include "ParamDialogBox/parametersdialogbox.h"
#include "NavController/navcontroller.h"
#include "NavController/favright.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    // Main Layout
    QVBoxLayout *mainLayout;

    // Menu
    QMenuBar *menuBar;
    QMenu *menuFile;
    QAction *menuParam;

    // Parameters dialog
    ParametersDialogBox *paramDialog;

    // Nav controller
    NavController *navController;

    // Web View
    CustomWebView *webView;
    
signals:
    
public slots:
    void survolNavController();
    void survolWebView();

    void goURL();


    void showParamDialog();

    //void clickRightWebView(QPoint p);

};

#endif // MAINWINDOW_H
