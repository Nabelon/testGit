/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *FilterandArtefacts;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *sw_label_pic;
    QCheckBox *checkBox;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QLabel *label;
    QWidget *tab_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QComboBox *comboBox;
    QPushButton *pushButton_12;
    QPushButton *pushButton_18;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_21;
    QWidget *tab;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_20;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QWidget *tab_6;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QTextBrowser *textBrowser_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_4;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton_19;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(800, 600);
        centralwidget = new QWidget(GUI);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 791, 561));
        FilterandArtefacts = new QWidget();
        FilterandArtefacts->setObjectName(QStringLiteral("FilterandArtefacts"));
        scrollArea = new QScrollArea(FilterandArtefacts);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 161, 361));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 142, 359));
        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 111, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        verticalLayout_3->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(verticalLayoutWidget_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        verticalLayout_3->addWidget(checkBox_2);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget_2 = new QTabWidget(FilterandArtefacts);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 380, 771, 171));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        scrollArea_2 = new QScrollArea(tab_3);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(0, 0, 761, 131));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 759, 112));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 121, 114));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sw_label_pic = new QLabel(verticalLayoutWidget);
        sw_label_pic->setObjectName(QStringLiteral("sw_label_pic"));
        sw_label_pic->setPixmap(QPixmap(QString::fromUtf8("Picture/sw_filter.png")));

        verticalLayout->addWidget(sw_label_pic);

        checkBox = new QCheckBox(verticalLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        verticalLayoutWidget_2 = new QWidget(FilterandArtefacts);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(180, 50, 121, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_6 = new QPushButton(verticalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_5 = new QPushButton(verticalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        horizontalLayoutWidget = new QWidget(FilterandArtefacts);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(360, 319, 401, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(horizontalLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(horizontalLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_7 = new QPushButton(horizontalLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(horizontalLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(horizontalLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout->addWidget(pushButton_8);

        label = new QLabel(FilterandArtefacts);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(420, 60, 261, 191));
        label->setPixmap(QPixmap(QString::fromUtf8("Picture/imgres.png")));
        tabWidget->addTab(FilterandArtefacts, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayoutWidget_2 = new QWidget(tab_2);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(300, 0, 476, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        horizontalLayout_2->addWidget(pushButton_13);

        pushButton_14 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        horizontalLayout_2->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        horizontalLayout_2->addWidget(pushButton_15);

        pushButton_16 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        horizontalLayout_2->addWidget(pushButton_16);

        pushButton_17 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        horizontalLayout_2->addWidget(pushButton_17);

        comboBox = new QComboBox(horizontalLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(0, 10, 91, 31));
        pushButton_18 = new QPushButton(tab_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(90, 10, 91, 31));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 60, 771, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("Picture/imgres.png")));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        pushButton_21 = new QPushButton(tab_2);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(180, 10, 91, 31));
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 330, 431, 192));
        textBrowser_2 = new QTextBrowser(tab);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(480, 330, 281, 41));
        pushButton_20 = new QPushButton(tab);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(610, 480, 151, 31));
        tabWidget_3 = new QTabWidget(tab);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(20, 60, 741, 251));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        textBrowser_4 = new QTextBrowser(tab_5);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 20, 256, 192));
        textBrowser_5 = new QTextBrowser(tab_5);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(290, 20, 256, 192));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_3->addTab(tab_6, QString());
        scrollArea_3 = new QScrollArea(tab);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(480, 380, 281, 81));
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 262, 79));
        textBrowser_3 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 281, 192));
        scrollArea_3->setWidget(scrollAreaWidgetContents_3);
        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 10, 451, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_4 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_3->addWidget(comboBox_4);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        pushButton_19 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        horizontalLayout_3->addWidget(pushButton_19);

        tabWidget->addTab(tab, QString());
        GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GUI);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(GUI);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GUI->setStatusBar(statusbar);

        retranslateUi(GUI);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QMainWindow *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "MainWindow", 0));
        checkBox_3->setText(QApplication::translate("GUI", "Selected filter 2", 0));
        checkBox_2->setText(QApplication::translate("GUI", "Selected filter", 0));
        sw_label_pic->setText(QString());
        checkBox->setText(QApplication::translate("GUI", "SW Filter", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("GUI", "Filter", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("GUI", "Artefacts", 0));
        pushButton_2->setText(QApplication::translate("GUI", "Up", 0));
        pushButton_3->setText(QApplication::translate("GUI", "Down", 0));
        pushButton_4->setText(QApplication::translate("GUI", "Remove", 0));
        pushButton_6->setText(QApplication::translate("GUI", "Load Video", 0));
        pushButton->setText(QApplication::translate("GUI", "Appy to Video", 0));
        pushButton_5->setText(QApplication::translate("GUI", "Help", 0));
        pushButton_10->setText(QApplication::translate("GUI", "Play", 0));
        pushButton_11->setText(QApplication::translate("GUI", "Stop", 0));
        pushButton_7->setText(QApplication::translate("GUI", "Reset", 0));
        pushButton_9->setText(QApplication::translate("GUI", "<", 0));
        pushButton_8->setText(QApplication::translate("GUI", ">", 0));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(FilterandArtefacts), QApplication::translate("GUI", "Filter and Artefacts", 0));
        pushButton_13->setText(QApplication::translate("GUI", "Play", 0));
        pushButton_14->setText(QApplication::translate("GUI", "Stop", 0));
        pushButton_15->setText(QApplication::translate("GUI", "Reset", 0));
        pushButton_16->setText(QApplication::translate("GUI", "<", 0));
        pushButton_17->setText(QApplication::translate("GUI", ">", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GUI", "x1,0", 0)
         << QApplication::translate("GUI", "x0,5", 0)
         << QApplication::translate("GUI", "x2,0", 0)
        );
        pushButton_12->setText(QApplication::translate("GUI", "Add Video", 0));
        pushButton_18->setText(QApplication::translate("GUI", "Remove Video", 0));
        label_2->setText(QString());
        pushButton_21->setText(QApplication::translate("GUI", "Add Comparison", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("GUI", "Video", 0));
        textBrowser->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Textbox for user comments</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">PSNR</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton_20->setText(QApplication::translate("GUI", "Save result", 0));
        textBrowser_4->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Video A color differenz</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Video B color differenz</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("GUI", "Color differenz", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("GUI", "Macroblocks", 0));
        textBrowser_3->setHtml(QApplication::translate("GUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  other information</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("GUI", "Raw Video", 0)
         << QApplication::translate("GUI", "Video A", 0)
         << QApplication::translate("GUI", "Search in Files", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("GUI", "Video A", 0)
         << QApplication::translate("GUI", "Search in Files", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("GUI", "Video B", 0)
         << QApplication::translate("GUI", "No Video", 0)
         << QApplication::translate("GUI", "Search in Files", 0)
        );
        pushButton_19->setText(QApplication::translate("GUI", "Analyse", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("GUI", "Analayse", 0));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
