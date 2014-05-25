#include "vtkwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VtkWidget w;
    w.show();

    return a.exec();
}
