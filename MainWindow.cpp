#include "MainWindow.h"
#include "ui_mainwindow.h"

#include "Notifications/NotificationManager.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialize notificationsManager
    notificationLayout = new NotificationLayout();
    notifications.init(this, notificationLayout);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_success_clicked() {
    notifications.send("Trying to find existed file", "good");
}

void MainWindow::on_pushButton_error_clicked() {
    notifications.send("Trying to find not existed file", "bad");
}
