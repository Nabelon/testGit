/********************************************************************************
** Form generated from reading UI file 'fileexplorer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEXPLORER_H
#define UI_FILEEXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileExplorer
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTreeView *treeView;
    QLineEdit *lineEdit;
    QWidget *tab_2;
    QListView *listView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *FileExplorer)
    {
        if (FileExplorer->objectName().isEmpty())
            FileExplorer->setObjectName(QStringLiteral("FileExplorer"));
        FileExplorer->resize(456, 293);
        tabWidget = new QTabWidget(FileExplorer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 441, 251));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        treeView = new QTreeView(tab);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 0, 431, 191));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 200, 431, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        listView = new QListView(tab_2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(0, 0, 441, 231));
        tabWidget->addTab(tab_2, QString());
        pushButton = new QPushButton(FileExplorer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 260, 75, 23));
        pushButton_2 = new QPushButton(FileExplorer);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 260, 75, 23));

        retranslateUi(FileExplorer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FileExplorer);
    } // setupUi

    void retranslateUi(QDialog *FileExplorer)
    {
        FileExplorer->setWindowTitle(QApplication::translate("FileExplorer", "Dialog", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("FileExplorer", "File Explorer", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("FileExplorer", "Recent used", 0));
        pushButton->setText(QApplication::translate("FileExplorer", "OK", 0));
        pushButton_2->setText(QApplication::translate("FileExplorer", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class FileExplorer: public Ui_FileExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEXPLORER_H
