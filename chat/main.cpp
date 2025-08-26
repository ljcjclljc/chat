#include "mainwindow.h"

#include <QApplication>
#include<QIcon>
#include<QFile>
#include"global.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly))
    {
        qDebug("open success");
        QString style=QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }else
    {
        qDebug("Open failed");
    }

    QString filename = "config.ini";
    QString app_path = QCoreApplication::applicationDirPath();
    qDebug() << app_path <<'\n';
    QString config_path = QDir::toNativeSeparators(app_path + QDir::separator() + filename);
    qDebug() << config_path <<'\n';
    QSettings settings(config_path, QSettings::IniFormat);
    QString gate_host = settings.value("GateServer/host").toString();
    QString gate_port = settings.value("GateServer/port").toString();
    gate_url_prefix = "http://" + gate_host + ":" +gate_port;

    qDebug() << gate_url_prefix;
    a.setWindowIcon(QIcon(":/image/icon.ico"));
    MainWindow w;
    w.show();
    return a.exec();
}
