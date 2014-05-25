#include "vtkwidget.h"
#include "ui_vtkwidget.h"

VtkWidget::VtkWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VtkWidget)
{
    ui->setupUi(this);
}

VtkWidget::~VtkWidget()
{
    delete ui;
}
