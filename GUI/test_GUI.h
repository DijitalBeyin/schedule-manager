/********************************************************************************
** Form generated from reading UI file 'test_GUIab1937.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEST_GUIAB1937_H
#define TEST_GUIAB1937_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *submitButton;
    QGridLayout *gridLayout_2;
    QSpinBox *credit_1;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_9;
    QSpinBox *credit_6;
    QLabel *label_credit_4;
    QComboBox *grade_5;
    QLabel *label_grade_3;
    QComboBox *grade_4;
    QSpinBox *credit_2;
    QComboBox *grade_2;
    QComboBox *grade_8;
    QLabel *label_credit_3;
    QSpinBox *credit_5;
    QLabel *label_grade_2;
    QComboBox *grade_3;
    QComboBox *grade_7;
    QLabel *label_credit_8;
    QLabel *label_grade_5;
    QLabel *label_grade_1;
    QComboBox *grade_1;
    QLabel *label_grade_4;
    QSpinBox *credit_4;
    QLabel *label_grade_8;
    QLabel *label_credit_5;
    QLabel *label_credit_7;
    QLabel *label_credit_1;
    QLabel *label_credit_2;
    QSpinBox *credit_8;
    QSpinBox *credit_7;
    QLabel *label_credit_6;
    QLabel *label_grade_6;
    QComboBox *grade_6;
    QSpinBox *credit_3;
    QLabel *label_grade_7;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_1;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *horizontalSpacer_24;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_22;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_total_credits;
    QSpinBox *total_credits;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_current_gpa;
    QDoubleSpinBox *current_gpa;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(370, 393);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Pictures/ros-kinetic.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        gridLayout->addWidget(submitButton, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        credit_1 = new QSpinBox(centralwidget);
        credit_1->setObjectName(QStringLiteral("credit_1"));

        gridLayout_2->addWidget(credit_1, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_11, 3, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 4, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 7, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 3, 1, 1);

        credit_6 = new QSpinBox(centralwidget);
        credit_6->setObjectName(QStringLiteral("credit_6"));

        gridLayout_2->addWidget(credit_6, 6, 2, 1, 1);

        label_credit_4 = new QLabel(centralwidget);
        label_credit_4->setObjectName(QStringLiteral("label_credit_4"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_credit_4->setFont(font);

        gridLayout_2->addWidget(label_credit_4, 4, 1, 1, 1);

        grade_5 = new QComboBox(centralwidget);
        grade_5->setObjectName(QStringLiteral("grade_5"));

        gridLayout_2->addWidget(grade_5, 5, 5, 1, 1);

        label_grade_3 = new QLabel(centralwidget);
        label_grade_3->setObjectName(QStringLiteral("label_grade_3"));
        label_grade_3->setFont(font);

        gridLayout_2->addWidget(label_grade_3, 3, 4, 1, 1);

        grade_4 = new QComboBox(centralwidget);
        grade_4->setObjectName(QStringLiteral("grade_4"));

        gridLayout_2->addWidget(grade_4, 4, 5, 1, 1);

        credit_2 = new QSpinBox(centralwidget);
        credit_2->setObjectName(QStringLiteral("credit_2"));

        gridLayout_2->addWidget(credit_2, 1, 2, 1, 1);

        grade_2 = new QComboBox(centralwidget);
        grade_2->setObjectName(QStringLiteral("grade_2"));

        gridLayout_2->addWidget(grade_2, 1, 5, 1, 1);

        grade_8 = new QComboBox(centralwidget);
        grade_8->setObjectName(QStringLiteral("grade_8"));

        gridLayout_2->addWidget(grade_8, 8, 5, 1, 1);

        label_credit_3 = new QLabel(centralwidget);
        label_credit_3->setObjectName(QStringLiteral("label_credit_3"));
        label_credit_3->setFont(font);

        gridLayout_2->addWidget(label_credit_3, 3, 1, 1, 1);

        credit_5 = new QSpinBox(centralwidget);
        credit_5->setObjectName(QStringLiteral("credit_5"));

        gridLayout_2->addWidget(credit_5, 5, 2, 1, 1);

        label_grade_2 = new QLabel(centralwidget);
        label_grade_2->setObjectName(QStringLiteral("label_grade_2"));
        label_grade_2->setFont(font);

        gridLayout_2->addWidget(label_grade_2, 1, 4, 1, 1);

        grade_3 = new QComboBox(centralwidget);
        grade_3->setObjectName(QStringLiteral("grade_3"));

        gridLayout_2->addWidget(grade_3, 3, 5, 1, 1);

        grade_7 = new QComboBox(centralwidget);
        grade_7->setObjectName(QStringLiteral("grade_7"));

        gridLayout_2->addWidget(grade_7, 7, 5, 1, 1);

        label_credit_8 = new QLabel(centralwidget);
        label_credit_8->setObjectName(QStringLiteral("label_credit_8"));
        label_credit_8->setFont(font);

        gridLayout_2->addWidget(label_credit_8, 8, 1, 1, 1);

        label_grade_5 = new QLabel(centralwidget);
        label_grade_5->setObjectName(QStringLiteral("label_grade_5"));
        label_grade_5->setFont(font);

        gridLayout_2->addWidget(label_grade_5, 5, 4, 1, 1);

        label_grade_1 = new QLabel(centralwidget);
        label_grade_1->setObjectName(QStringLiteral("label_grade_1"));
        label_grade_1->setFont(font);

        gridLayout_2->addWidget(label_grade_1, 0, 4, 1, 1);

        grade_1 = new QComboBox(centralwidget);
        grade_1->setObjectName(QStringLiteral("grade_1"));

        gridLayout_2->addWidget(grade_1, 0, 5, 1, 1);

        label_grade_4 = new QLabel(centralwidget);
        label_grade_4->setObjectName(QStringLiteral("label_grade_4"));
        label_grade_4->setFont(font);

        gridLayout_2->addWidget(label_grade_4, 4, 4, 1, 1);

        credit_4 = new QSpinBox(centralwidget);
        credit_4->setObjectName(QStringLiteral("credit_4"));

        gridLayout_2->addWidget(credit_4, 4, 2, 1, 1);

        label_grade_8 = new QLabel(centralwidget);
        label_grade_8->setObjectName(QStringLiteral("label_grade_8"));
        label_grade_8->setFont(font);

        gridLayout_2->addWidget(label_grade_8, 8, 4, 1, 1);

        label_credit_5 = new QLabel(centralwidget);
        label_credit_5->setObjectName(QStringLiteral("label_credit_5"));
        label_credit_5->setFont(font);

        gridLayout_2->addWidget(label_credit_5, 5, 1, 1, 1);

        label_credit_7 = new QLabel(centralwidget);
        label_credit_7->setObjectName(QStringLiteral("label_credit_7"));
        label_credit_7->setFont(font);

        gridLayout_2->addWidget(label_credit_7, 7, 1, 1, 1);

        label_credit_1 = new QLabel(centralwidget);
        label_credit_1->setObjectName(QStringLiteral("label_credit_1"));
        label_credit_1->setFont(font);

        gridLayout_2->addWidget(label_credit_1, 0, 1, 1, 1);

        label_credit_2 = new QLabel(centralwidget);
        label_credit_2->setObjectName(QStringLiteral("label_credit_2"));
        label_credit_2->setFont(font);

        gridLayout_2->addWidget(label_credit_2, 1, 1, 1, 1);

        credit_8 = new QSpinBox(centralwidget);
        credit_8->setObjectName(QStringLiteral("credit_8"));

        gridLayout_2->addWidget(credit_8, 8, 2, 1, 1);

        credit_7 = new QSpinBox(centralwidget);
        credit_7->setObjectName(QStringLiteral("credit_7"));

        gridLayout_2->addWidget(credit_7, 7, 2, 1, 1);

        label_credit_6 = new QLabel(centralwidget);
        label_credit_6->setObjectName(QStringLiteral("label_credit_6"));
        label_credit_6->setFont(font);

        gridLayout_2->addWidget(label_credit_6, 6, 1, 1, 1);

        label_grade_6 = new QLabel(centralwidget);
        label_grade_6->setObjectName(QStringLiteral("label_grade_6"));
        label_grade_6->setFont(font);

        gridLayout_2->addWidget(label_grade_6, 6, 4, 1, 1);

        grade_6 = new QComboBox(centralwidget);
        grade_6->setObjectName(QStringLiteral("grade_6"));

        gridLayout_2->addWidget(grade_6, 6, 5, 1, 1);

        credit_3 = new QSpinBox(centralwidget);
        credit_3->setObjectName(QStringLiteral("credit_3"));

        gridLayout_2->addWidget(credit_3, 3, 2, 1, 1);

        label_grade_7 = new QLabel(centralwidget);
        label_grade_7->setObjectName(QStringLiteral("label_grade_7"));
        label_grade_7->setFont(font);

        gridLayout_2->addWidget(label_grade_7, 7, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 5, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 6, 0, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_14, 6, 3, 1, 1);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_1, 0, 0, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_18, 0, 6, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 1, 3, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_12, 4, 3, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_13, 5, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_16, 8, 3, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_23, 5, 6, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_24, 6, 6, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 8, 0, 1, 1);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_22, 4, 6, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_21, 3, 6, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_20, 1, 6, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 7, 3, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_25, 7, 6, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_26, 8, 6, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_total_credits = new QLabel(centralwidget);
        label_total_credits->setObjectName(QStringLiteral("label_total_credits"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_total_credits->setFont(font1);

        horizontalLayout_7->addWidget(label_total_credits);

        total_credits = new QSpinBox(centralwidget);
        total_credits->setObjectName(QStringLiteral("total_credits"));

        horizontalLayout_7->addWidget(total_credits);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        label_current_gpa = new QLabel(centralwidget);
        label_current_gpa->setObjectName(QStringLiteral("label_current_gpa"));
        label_current_gpa->setFont(font1);

        horizontalLayout_7->addWidget(label_current_gpa);

        current_gpa = new QDoubleSpinBox(centralwidget);
        current_gpa->setObjectName(QStringLiteral("current_gpa"));

        horizontalLayout_7->addWidget(current_gpa);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 370, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(credit_1, grade_1);
        QWidget::setTabOrder(grade_1, credit_2);
        QWidget::setTabOrder(credit_2, grade_2);
        QWidget::setTabOrder(grade_2, credit_3);
        QWidget::setTabOrder(credit_3, grade_3);
        QWidget::setTabOrder(grade_3, credit_4);
        QWidget::setTabOrder(credit_4, grade_4);
        QWidget::setTabOrder(grade_4, credit_5);
        QWidget::setTabOrder(credit_5, grade_5);
        QWidget::setTabOrder(grade_5, credit_6);
        QWidget::setTabOrder(credit_6, grade_6);
        QWidget::setTabOrder(grade_6, credit_7);
        QWidget::setTabOrder(credit_7, grade_7);
        QWidget::setTabOrder(grade_7, credit_8);
        QWidget::setTabOrder(credit_8, grade_8);
        QWidget::setTabOrder(grade_8, submitButton);

        retranslateUi(MainWindow);

        grade_5->setCurrentIndex(0);
        grade_4->setCurrentIndex(0);
        grade_2->setCurrentIndex(0);
        grade_8->setCurrentIndex(0);
        grade_3->setCurrentIndex(0);
        grade_7->setCurrentIndex(0);
        grade_1->setCurrentIndex(0);
        grade_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GUI", 0));
        submitButton->setText(QApplication::translate("MainWindow", "Calculate", 0));
        label_credit_4->setText(QApplication::translate("MainWindow", "Credit :", 0));
        grade_5->clear();
        grade_5->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        label_grade_3->setText(QApplication::translate("MainWindow", "Grade :", 0));
        grade_4->clear();
        grade_4->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        grade_2->clear();
        grade_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        grade_8->clear();
        grade_8->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        label_credit_3->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_grade_2->setText(QApplication::translate("MainWindow", "Grade :", 0));
        grade_3->clear();
        grade_3->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        grade_7->clear();
        grade_7->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        label_credit_8->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_grade_5->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_grade_1->setText(QApplication::translate("MainWindow", "Grade :", 0));
        grade_1->clear();
        grade_1->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        label_grade_4->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_grade_8->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_credit_5->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_7->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_1->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_2->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_6->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_grade_6->setText(QApplication::translate("MainWindow", "Grade :", 0));
        grade_6->clear();
        grade_6->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "AA", 0)
         << QApplication::translate("MainWindow", "BA", 0)
         << QApplication::translate("MainWindow", "BB", 0)
         << QApplication::translate("MainWindow", "CB", 0)
         << QApplication::translate("MainWindow", "CC", 0)
         << QApplication::translate("MainWindow", "DC", 0)
         << QApplication::translate("MainWindow", "DD", 0)
         << QApplication::translate("MainWindow", "FF", 0)
        );
        label_grade_7->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_total_credits->setText(QApplication::translate("MainWindow", "Total Credits :", 0));
        label_current_gpa->setText(QApplication::translate("MainWindow", "Current GPA :", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEST_GUIAB1937_H
