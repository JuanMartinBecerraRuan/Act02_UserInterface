/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *Red_text;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *voltaje_text;
    QLineEdit *id_text;
    QSpinBox *PosX_text;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *PosY_text;
    QLabel *label_6;
    QSpinBox *Green_text;
    QLabel *label_7;
    QSpinBox *Blue_text;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(608, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Red_text = new QSpinBox(groupBox);
        Red_text->setObjectName(QString::fromUtf8("Red_text"));

        gridLayout->addWidget(Red_text, 4, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        voltaje_text = new QDoubleSpinBox(groupBox);
        voltaje_text->setObjectName(QString::fromUtf8("voltaje_text"));

        gridLayout->addWidget(voltaje_text, 1, 2, 1, 1);

        id_text = new QLineEdit(groupBox);
        id_text->setObjectName(QString::fromUtf8("id_text"));

        gridLayout->addWidget(id_text, 0, 2, 1, 1);

        PosX_text = new QSpinBox(groupBox);
        PosX_text->setObjectName(QString::fromUtf8("PosX_text"));
        PosX_text->setMaximum(120);

        gridLayout->addWidget(PosX_text, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        PosY_text = new QSpinBox(groupBox);
        PosY_text->setObjectName(QString::fromUtf8("PosY_text"));

        gridLayout->addWidget(PosY_text, 3, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        Green_text = new QSpinBox(groupBox);
        Green_text->setObjectName(QString::fromUtf8("Green_text"));

        gridLayout->addWidget(Green_text, 6, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        Blue_text = new QSpinBox(groupBox);
        Blue_text->setObjectName(QString::fromUtf8("Blue_text"));

        gridLayout->addWidget(Blue_text, 7, 2, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 8, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 8, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        formLayout->setWidget(0, QFormLayout::FieldRole, groupBox_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 608, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Neuronas", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Registrar Neurona", nullptr));
        label->setText(QApplication::translate("MainWindow", "ID", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "VOLTAJE", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "RED", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "POSICI\303\223N EN Y", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "GREEN", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "BLUE", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Capturar al final", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Capturar al inicio", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "POSICI\303\223N EN X", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Registros de Neuronas", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
