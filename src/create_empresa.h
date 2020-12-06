#ifndef CREATE_EMPRESA_H
#define CREATE_EMPRESA_H

#include "Empresa.h"
#include <QDialog>

namespace Ui {
class create_empresa;
}

class create_empresa : public QDialog
{
    Q_OBJECT

public:
    explicit create_empresa(QWidget *parent = nullptr);
    ~create_empresa();

private slots:
    void on_buttonBox_accepted();
signals:
    void empresa_create_signal(Empresa *);

private:
    Ui::create_empresa *ui;
};

#endif // CREATE_EMPRESA_H
