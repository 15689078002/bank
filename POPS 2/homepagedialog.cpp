#include "homepagedialog.h"
#include "ui_homepagedialog.h"

homepageDialog::homepageDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::homepageDialog)
{
    ui->setupUi(this);
}

homepageDialog::~homepageDialog()
{
    delete ui;
}
