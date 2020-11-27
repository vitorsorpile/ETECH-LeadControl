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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *empresa_2;
    QLineEdit *empresa;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *responsavel_2;
    QLineEdit *responsavel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *ultimo_contato;
    QLineEdit *ultimoContato;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *status;
    QComboBox *statusComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *forma_contato;
    QLineEdit *formaDeContato;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *membro_2;
    QLineEdit *membro;
    QSpacerItem *horizontalSpacer_6;
    QLabel *logo;

    void setupUi(QDialog *create_lead)
    {
        if (create_lead->objectName().isEmpty())
            create_lead->setObjectName(QString::fromUtf8("create_lead"));
        create_lead->resize(768, 495);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Link, brush1);
        QBrush brush3(QColor(170, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        QBrush brush4(QColor(85, 85, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush5(QColor(0, 120, 215, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        create_lead->setPalette(palette);
        buttonBox = new QDialogButtonBox(create_lead);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(540, 200, 161, 61));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget = new QWidget(create_lead);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 371, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        empresa_2 = new QLabel(layoutWidget);
        empresa_2->setObjectName(QString::fromUtf8("empresa_2"));
        empresa_2->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        empresa_2->setFont(font);

        horizontalLayout->addWidget(empresa_2);

        empresa = new QLineEdit(layoutWidget);
        empresa->setObjectName(QString::fromUtf8("empresa"));
        empresa->setMinimumSize(QSize(200, 0));
        empresa->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(empresa);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        responsavel_2 = new QLabel(layoutWidget);
        responsavel_2->setObjectName(QString::fromUtf8("responsavel_2"));
        responsavel_2->setMinimumSize(QSize(150, 0));
        responsavel_2->setFont(font);

        horizontalLayout_2->addWidget(responsavel_2);

        responsavel = new QLineEdit(layoutWidget);
        responsavel->setObjectName(QString::fromUtf8("responsavel"));
        responsavel->setMinimumSize(QSize(200, 0));
        responsavel->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(responsavel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        ultimo_contato = new QLabel(layoutWidget);
        ultimo_contato->setObjectName(QString::fromUtf8("ultimo_contato"));
        ultimo_contato->setMinimumSize(QSize(150, 0));
        ultimo_contato->setFont(font);

        horizontalLayout_6->addWidget(ultimo_contato);

        ultimoContato = new QLineEdit(layoutWidget);
        ultimoContato->setObjectName(QString::fromUtf8("ultimoContato"));
        ultimoContato->setMinimumSize(QSize(200, 0));
        ultimoContato->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_6->addWidget(ultimoContato);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        status = new QLabel(layoutWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setMinimumSize(QSize(150, 0));
        status->setFont(font);

        horizontalLayout_3->addWidget(status);

        statusComboBox = new QComboBox(layoutWidget);
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->setObjectName(QString::fromUtf8("statusComboBox"));
        statusComboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout_3->addWidget(statusComboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        forma_contato = new QLabel(layoutWidget);
        forma_contato->setObjectName(QString::fromUtf8("forma_contato"));
        forma_contato->setMinimumSize(QSize(150, 0));
        forma_contato->setFont(font);

        horizontalLayout_4->addWidget(forma_contato);

        formaDeContato = new QLineEdit(layoutWidget);
        formaDeContato->setObjectName(QString::fromUtf8("formaDeContato"));
        formaDeContato->setMinimumSize(QSize(200, 0));
        formaDeContato->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_4->addWidget(formaDeContato);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        membro_2 = new QLabel(layoutWidget);
        membro_2->setObjectName(QString::fromUtf8("membro_2"));
        membro_2->setMinimumSize(QSize(150, 0));
        membro_2->setFont(font);

        horizontalLayout_5->addWidget(membro_2);

        membro = new QLineEdit(layoutWidget);
        membro->setObjectName(QString::fromUtf8("membro"));
        membro->setMinimumSize(QSize(200, 0));
        membro->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_5->addWidget(membro);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        logo = new QLabel(create_lead);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(500, 120, 360, 50));
        logo->setMinimumSize(QSize(360, 50));
        logo->setMaximumSize(QSize(360, 50));

        retranslateUi(create_lead);
        QObject::connect(buttonBox, SIGNAL(accepted()), create_lead, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), create_lead, SLOT(reject()));

        QMetaObject::connectSlotsByName(create_lead);
    } // setupUi

    void retranslateUi(QDialog *create_lead)
    {
        create_lead->setWindowTitle(QCoreApplication::translate("create_lead", "Adicionar lead", nullptr));
        empresa_2->setText(QCoreApplication::translate("create_lead", "Nome da Empresa", nullptr));
        responsavel_2->setText(QCoreApplication::translate("create_lead", "Nome do Respons\303\241vel", nullptr));
        ultimo_contato->setText(QCoreApplication::translate("create_lead", "\303\232ltimo Contato", nullptr));
        status->setText(QCoreApplication::translate("create_lead", "Status", nullptr));
        statusComboBox->setItemText(0, QCoreApplication::translate("create_lead", "Selecione uma op\303\247\303\243o...", nullptr));
        statusComboBox->setItemText(1, QCoreApplication::translate("create_lead", "A Prospectar", nullptr));
        statusComboBox->setItemText(2, QCoreApplication::translate("create_lead", "Diagnostico", nullptr));
        statusComboBox->setItemText(3, QCoreApplication::translate("create_lead", "Proposta", nullptr));
        statusComboBox->setItemText(4, QCoreApplication::translate("create_lead", "Negociacao", nullptr));
        statusComboBox->setItemText(5, QCoreApplication::translate("create_lead", "Fechado", nullptr));
        statusComboBox->setItemText(6, QCoreApplication::translate("create_lead", "Perdido", nullptr));

        forma_contato->setText(QCoreApplication::translate("create_lead", "Forma de Contato", nullptr));
        membro_2->setText(QCoreApplication::translate("create_lead", "Membro Respons\303\241vel", nullptr));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class create_lead: public Ui_create_lead {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_LEAD_H
