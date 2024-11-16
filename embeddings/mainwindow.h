#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settings.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    //void on_pushButton_clicked();

// <<<<<<< HEAD
    void on_pushButton_home_about_clicked();

    void on_pushButton_home_end_clicked();
// =======
    void on_pushButton_start_clicked();

    void on_pushButton_tutorial_clicked();

    void on_pushButton_settings_clicked();

    void on_pushButton_about_clicked();
// >>>>>>> ec80273e3b344ef1a23e998207c077d80fe31758

    void on_pushButton_home_settings_clicked();

    void on_pushButton_continue_tutorial_clicked();

    void on_pushButton_home_tutorial_clicked();

    void on_pushButton_home_tutorial_end_clicked();

    void on_pushButton_previous_tutorial_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_EndGame_clicked();

    void on_easyLevel_clicked();

    void on_intermediateLevel_clicked();

    void on_hardLevel_clicked();

    void on_expertLevel_clicked();

    void on_voiceCommand_clicked();

    void on_touchCommand_clicked();

    void on_pushButton_back_settings_clicked();

private:
    Ui::MainWindow *ui;
    Settings *mwSettings;

};
#endif // MAINWINDOW_H
