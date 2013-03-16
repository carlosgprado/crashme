/********************************************************************************
** Form generated from reading UI file 'crashme.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHME_H
#define UI_CRASHME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crashmeClass
{
public:
    QWidget *centralWidget;
    QLabel *crashTypeLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *boradioButton;
    QRadioButton *horadioButton;
    QRadioButton *umradioButton;
    QRadioButton *zpradioButton;
    QPushButton *crashButton;
    QTextBrowser *descriptionTextBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *crashmeClass)
    {
        if (crashmeClass->objectName().isEmpty())
            crashmeClass->setObjectName(QStringLiteral("crashmeClass"));
        crashmeClass->resize(547, 369);
        centralWidget = new QWidget(crashmeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        crashTypeLabel = new QLabel(centralWidget);
        crashTypeLabel->setObjectName(QStringLiteral("crashTypeLabel"));
        crashTypeLabel->setGeometry(QRect(70, 30, 141, 21));
        QFont font;
        font.setFamily(QStringLiteral("Capture it"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        crashTypeLabel->setFont(font);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 60, 231, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        boradioButton = new QRadioButton(verticalLayoutWidget);
        boradioButton->setObjectName(QStringLiteral("boradioButton"));
        boradioButton->setChecked(true);

        verticalLayout->addWidget(boradioButton);

        horadioButton = new QRadioButton(verticalLayoutWidget);
        horadioButton->setObjectName(QStringLiteral("horadioButton"));

        verticalLayout->addWidget(horadioButton);

        umradioButton = new QRadioButton(verticalLayoutWidget);
        umradioButton->setObjectName(QStringLiteral("umradioButton"));

        verticalLayout->addWidget(umradioButton);

        zpradioButton = new QRadioButton(verticalLayoutWidget);
        zpradioButton->setObjectName(QStringLiteral("zpradioButton"));

        verticalLayout->addWidget(zpradioButton);

        crashButton = new QPushButton(centralWidget);
        crashButton->setObjectName(QStringLiteral("crashButton"));
        crashButton->setGeometry(QRect(330, 60, 141, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("28 Days Later"));
        font1.setPointSize(22);
        crashButton->setFont(font1);
        descriptionTextBrowser = new QTextBrowser(centralWidget);
        descriptionTextBrowser->setObjectName(QStringLiteral("descriptionTextBrowser"));
        descriptionTextBrowser->setGeometry(QRect(270, 140, 256, 171));
        crashmeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(crashmeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 547, 21));
        crashmeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(crashmeClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        crashmeClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(crashmeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        crashmeClass->setStatusBar(statusBar);

        retranslateUi(crashmeClass);

        QMetaObject::connectSlotsByName(crashmeClass);
    } // setupUi

    void retranslateUi(QMainWindow *crashmeClass)
    {
        crashmeClass->setWindowTitle(QApplication::translate("crashmeClass", "crashme", 0));
        crashTypeLabel->setText(QApplication::translate("crashmeClass", "Crash Type", 0));
        boradioButton->setText(QApplication::translate("crashmeClass", "buffer overflow", 0));
        horadioButton->setText(QApplication::translate("crashmeClass", "heap overflow", 0));
        umradioButton->setText(QApplication::translate("crashmeClass", "uninitialized memory access", 0));
        zpradioButton->setText(QApplication::translate("crashmeClass", "zero page access", 0));
        crashButton->setText(QApplication::translate("crashmeClass", "Crash me!", 0));
    } // retranslateUi

};

namespace Ui {
    class crashmeClass: public Ui_crashmeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHME_H
