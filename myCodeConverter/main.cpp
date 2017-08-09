#include "helloworld.h"
#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	helloworld w;
    w.setWindowTitle("Converter --V1.0--");
    w.show();

    return app.exec();
}
