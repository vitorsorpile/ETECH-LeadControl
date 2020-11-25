/********************************************************************************
** Form generated from reading UI file 'create_lead.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_LEAD_H
#define UI_CREATE_LEAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_create_lead
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *create_lead)
    {
        if (create_lead->objectName().isEmpty())
            create_lead->setObjectName(QString::fromUtf8("create_lead"));
        create_lead->resize(768, 495);
        buttonBox = new QDialogButtonBox(create_lead);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(660, 10, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(create_lead);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 63, 684, 411));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 0));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(200, 0));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(lineEdit_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 0));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_6->addWidget(lineEdit_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(label_3);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(200, 0));
        lineEdit_4->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(lineEdit_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(200, 0));
        lineEdit_5->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(lineEdit_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(create_lead);
        QObject::connect(buttonBox, SIGNAL(accepted()), create_lead, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), create_lead, SLOT(reject()));

        QMetaObject::connectSlotsByName(create_lead);
    } // setupUi

    void retranslateUi(QDialog *create_lead)
    {
        create_lead->setWindowTitle(QCoreApplication::translate("create_lead", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("create_lead", "Nome da Empresa", nullptr));
        label_2->setText(QCoreApplication::translate("create_lead", "Nome do Respons\303\241vel", nullptr));
        label_6->setText(QCoreApplication::translate("create_lead", "\303\232ltimo Contato", nullptr));
        label_3->setText(QCoreApplication::translate("create_lead", "Status", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("create_lead", "Selecione uma op\303\247\303\243o...", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("create_lead", "A Prospectar", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("create_lead", "Diagn\303\263stico", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("create_lead", "Proposta", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("create_lead", "Negocia\303\247\303\243o", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("create_lead", "Fechado", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("create_lead", "Perdido", nullptr));

        label_4->setText(QCoreApplication::translate("create_lead", "Forma de Contato", nullptr));
        label_5->setText(QCoreApplication::translate("create_lead", "Membro Respons\303\241vel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class create_lead: public Ui_create_lead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_LEAD_H
