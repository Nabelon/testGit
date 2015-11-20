/********************************************************************************
** Form generated from reading UI file 'comparisondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISONDIALOG_H
#define UI_COMPARISONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_comparisonDialog
{
public:
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *comparisonDialog)
    {
        if (comparisonDialog->objectName().isEmpty())
            comparisonDialog->setObjectName(QStringLiteral("comparisonDialog"));
        comparisonDialog->resize(222, 193);
        comboBox = new QComboBox(comparisonDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 100, 181, 22));
        comboBox_2 = new QComboBox(comparisonDialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 70, 181, 22));
        comboBox_3 = new QComboBox(comparisonDialog);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(20, 20, 181, 22));
        pushButton = new QPushButton(comparisonDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 150, 75, 23));
        pushButton_2 = new QPushButton(comparisonDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 150, 75, 23));

        retranslateUi(comparisonDialog);

        QMetaObject::connectSlotsByName(comparisonDialog);
    } // setupUi

    void retranslateUi(QDialog *comparisonDialog)
    {
        comparisonDialog->setWindowTitle(QApplication::translate("comparisonDialog", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("comparisonDialog", "Video B", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("comparisonDialog", "Video A", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("comparisonDialog", "Macroblocks of Video A", 0)
         << QApplication::translate("comparisonDialog", "Color differenz", 0)
        );
        pushButton->setText(QApplication::translate("comparisonDialog", "OK", 0));
        pushButton_2->setText(QApplication::translate("comparisonDialog", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class comparisonDialog: public Ui_comparisonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISONDIALOG_H
