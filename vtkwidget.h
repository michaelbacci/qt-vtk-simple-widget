#ifndef VTKWIDGET_H
#define VTKWIDGET_H

#include <QWidget>

namespace Ui {
class VtkWidget;
}

class VtkWidget : public QWidget
{
    Q_OBJECT

public:
    explicit VtkWidget(QWidget *parent = 0);
    ~VtkWidget();

private:
    Ui::VtkWidget *ui;
};

#endif // VTKWIDGET_H
