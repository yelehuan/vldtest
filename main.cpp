
/*
    使用vld工具
    1. 下载安装VLD
        下载地址： http://vld.codeplex.com/
        * 将vld的dll文件路径添加到PATH环境变量
        * 将vld安装目录/include 下的vld.h文件拷贝到Qt默认的include目录下
        * 将vld安装目录/lib/Win32 下的vld.lib拷贝到Qt默认的lib目录下
    2.  VLD在Qt中的使用
        * 创建测试项目，在Debug模式下运行修改main.cpp文件，在main函数上面添加以下代码：
            include <vld.h>

*/

#include "mainwindow.h"
#include <QApplication>
#ifdef _DEBUG
#include <vld.h>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QWidget *widget = new QWidget;

    return a.exec();
}
