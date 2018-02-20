/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *DirFileList;
    QPushButton *Search;
    QLabel *status;
    QPushButton *exportCSV;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *nameFilter;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *DirPath;
    QPushButton *buttonBrowse;
    QMenuBar *menuBar;
    QMenu *menuDirFE;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(852, 512);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DirFileList = new QTableWidget(centralWidget);
        DirFileList->setObjectName(QStringLiteral("DirFileList"));
        DirFileList->setGeometry(QRect(20, 140, 811, 261));
        DirFileList->verticalHeader()->setVisible(false);
        Search = new QPushButton(centralWidget);
        Search->setObjectName(QStringLiteral("Search"));
        Search->setGeometry(QRect(19, 71, 75, 23));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(20, 420, 211, 21));
        exportCSV = new QPushButton(centralWidget);
        exportCSV->setObjectName(QStringLiteral("exportCSV"));
        exportCSV->setGeometry(QRect(740, 420, 91, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(22, 39, 178, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        nameFilter = new QLineEdit(layoutWidget);
        nameFilter->setObjectName(QStringLiteral("nameFilter"));

        horizontalLayout->addWidget(nameFilter);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 381, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_2->addWidget(label);

        DirPath = new QLineEdit(layoutWidget1);
        DirPath->setObjectName(QStringLiteral("DirPath"));

        horizontalLayout_2->addWidget(DirPath);

        buttonBrowse = new QPushButton(centralWidget);
        buttonBrowse->setObjectName(QStringLiteral("buttonBrowse"));
        buttonBrowse->setGeometry(QRect(410, 10, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 852, 21));
        menuDirFE = new QMenu(menuBar);
        menuDirFE->setObjectName(QStringLiteral("menuDirFE"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDirFE->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Search->setText(QApplication::translate("MainWindow", "Search", 0));
        status->setText(QApplication::translate("MainWindow", "Status...", 0));
        exportCSV->setText(QApplication::translate("MainWindow", "Export to CSV", 0));
        label_3->setText(QApplication::translate("MainWindow", "Search:", 0));
        label->setText(QApplication::translate("MainWindow", "Directory Path:", 0));
        buttonBrowse->setText(QApplication::translate("MainWindow", "Browse", 0));
        menuDirFE->setTitle(QApplication::translate("MainWindow", "DirFE", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
