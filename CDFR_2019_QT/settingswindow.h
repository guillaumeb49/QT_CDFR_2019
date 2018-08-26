#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QMainWindow>

namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = nullptr);
    ~SettingsWindow();

signals:
    void Signal_quit_app();

public slots:
    void close_application(void);

private:
    Ui::SettingsWindow *ui;
};

#endif // SETTINGSWINDOW_H
