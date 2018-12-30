/********************************************************************************
** Form generated from reading UI file 'test_GUIh23833.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEST_GUIH23833_H
#define TEST_GUIH23833_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *submitButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_total_credits;
    QLineEdit *lineEdit_total_credits;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_current_gpa;
    QLineEdit *lineEdit_current_gpa;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_credit_4;
    QComboBox *grade_5;
    QLabel *label_grade_3;
    QComboBox *grade_4;
    QSpinBox *credit_2;
    QLabel *label_credit_3;
    QComboBox *grade_8;
    QSpinBox *credit_6;
    QLabel *label_grade_2;
    QSpinBox *credit_1;
    QComboBox *grade_7;
    QLabel *label_credit_8;
    QComboBox *grade_3;
    QLabel *label_grade_5;
    QLabel *label_grade_01;
    QLabel *label_grade_4;
    QLabel *label_grade_8;
    QComboBox *grade_1;
    QSpinBox *credit_4;
    QLabel *label_credit_5;
    QLabel *label_credit_7;
    QLabel *label_credit_1;
    QLabel *label_credit_2;
    QComboBox *grade_2;
    QLabel *label_credit_6;
    QSpinBox *credit_8;
    QSpinBox *credit_7;
    QLabel *label_grade_6;
    QSpinBox *credit_5;
    QComboBox *grade_6;
    QSpinBox *credit_3;
    QLabel *label_grade_7;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(585, 411);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../Pictures/ros-kinetic.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(480, 350, 99, 27));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 567, 29));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_total_credits = new QLabel(horizontalLayoutWidget_2);
        label_total_credits->setObjectName(QStringLiteral("label_total_credits"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_total_credits->setFont(font);

        horizontalLayout_7->addWidget(label_total_credits);

        lineEdit_total_credits = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_total_credits->setObjectName(QStringLiteral("lineEdit_total_credits"));

        horizontalLayout_7->addWidget(lineEdit_total_credits);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        label_current_gpa = new QLabel(horizontalLayoutWidget_2);
        label_current_gpa->setObjectName(QStringLiteral("label_current_gpa"));
        label_current_gpa->setFont(font);

        horizontalLayout_7->addWidget(label_current_gpa);

        lineEdit_current_gpa = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit_current_gpa->setObjectName(QStringLiteral("lineEdit_current_gpa"));

        horizontalLayout_7->addWidget(lineEdit_current_gpa);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(160, 70, 268, 260));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_credit_4 = new QLabel(gridLayoutWidget);
        label_credit_4->setObjectName(QStringLiteral("label_credit_4"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_credit_4->setFont(font1);

        gridLayout_2->addWidget(label_credit_4, 3, 0, 1, 1);

        grade_5 = new QComboBox(gridLayoutWidget);
        grade_5->setObjectName(QStringLiteral("grade_5"));

        gridLayout_2->addWidget(grade_5, 4, 4, 1, 1);

        label_grade_3 = new QLabel(gridLayoutWidget);
        label_grade_3->setObjectName(QStringLiteral("label_grade_3"));
        label_grade_3->setFont(font1);

        gridLayout_2->addWidget(label_grade_3, 2, 3, 1, 1);

        grade_4 = new QComboBox(gridLayoutWidget);
        grade_4->setObjectName(QStringLiteral("grade_4"));

        gridLayout_2->addWidget(grade_4, 3, 4, 1, 1);

        credit_2 = new QSpinBox(gridLayoutWidget);
        credit_2->setObjectName(QStringLiteral("credit_2"));

        gridLayout_2->addWidget(credit_2, 1, 1, 1, 1);

        label_credit_3 = new QLabel(gridLayoutWidget);
        label_credit_3->setObjectName(QStringLiteral("label_credit_3"));
        label_credit_3->setFont(font1);

        gridLayout_2->addWidget(label_credit_3, 2, 0, 1, 1);

        grade_8 = new QComboBox(gridLayoutWidget);
        grade_8->setObjectName(QStringLiteral("grade_8"));

        gridLayout_2->addWidget(grade_8, 7, 4, 1, 1);

        credit_6 = new QSpinBox(gridLayoutWidget);
        credit_6->setObjectName(QStringLiteral("credit_6"));

        gridLayout_2->addWidget(credit_6, 5, 1, 1, 1);

        label_grade_2 = new QLabel(gridLayoutWidget);
        label_grade_2->setObjectName(QStringLiteral("label_grade_2"));
        label_grade_2->setFont(font1);

        gridLayout_2->addWidget(label_grade_2, 1, 3, 1, 1);

        credit_1 = new QSpinBox(gridLayoutWidget);
        credit_1->setObjectName(QStringLiteral("credit_1"));

        gridLayout_2->addWidget(credit_1, 0, 1, 1, 1);

        grade_7 = new QComboBox(gridLayoutWidget);
        grade_7->setObjectName(QStringLiteral("grade_7"));

        gridLayout_2->addWidget(grade_7, 6, 4, 1, 1);

        label_credit_8 = new QLabel(gridLayoutWidget);
        label_credit_8->setObjectName(QStringLiteral("label_credit_8"));
        label_credit_8->setFont(font1);

        gridLayout_2->addWidget(label_credit_8, 7, 0, 1, 1);

        grade_3 = new QComboBox(gridLayoutWidget);
        grade_3->setObjectName(QStringLiteral("grade_3"));

        gridLayout_2->addWidget(grade_3, 2, 4, 1, 1);

        label_grade_5 = new QLabel(gridLayoutWidget);
        label_grade_5->setObjectName(QStringLiteral("label_grade_5"));
        label_grade_5->setFont(font1);

        gridLayout_2->addWidget(label_grade_5, 4, 3, 1, 1);

        label_grade_01 = new QLabel(gridLayoutWidget);
        label_grade_01->setObjectName(QStringLiteral("label_grade_01"));
        label_grade_01->setFont(font1);

        gridLayout_2->addWidget(label_grade_01, 0, 3, 1, 1);

        label_grade_4 = new QLabel(gridLayoutWidget);
        label_grade_4->setObjectName(QStringLiteral("label_grade_4"));
        label_grade_4->setFont(font1);

        gridLayout_2->addWidget(label_grade_4, 3, 3, 1, 1);

        label_grade_8 = new QLabel(gridLayoutWidget);
        label_grade_8->setObjectName(QStringLiteral("label_grade_8"));
        label_grade_8->setFont(font1);

        gridLayout_2->addWidget(label_grade_8, 7, 3, 1, 1);

        grade_1 = new QComboBox(gridLayoutWidget);
        grade_1->setObjectName(QStringLiteral("grade_1"));

        gridLayout_2->addWidget(grade_1, 0, 4, 1, 1);

        credit_4 = new QSpinBox(gridLayoutWidget);
        credit_4->setObjectName(QStringLiteral("credit_4"));

        gridLayout_2->addWidget(credit_4, 3, 1, 1, 1);

        label_credit_5 = new QLabel(gridLayoutWidget);
        label_credit_5->setObjectName(QStringLiteral("label_credit_5"));
        label_credit_5->setFont(font1);

        gridLayout_2->addWidget(label_credit_5, 4, 0, 1, 1);

        label_credit_7 = new QLabel(gridLayoutWidget);
        label_credit_7->setObjectName(QStringLiteral("label_credit_7"));
        label_credit_7->setFont(font1);

        gridLayout_2->addWidget(label_credit_7, 6, 0, 1, 1);

        label_credit_1 = new QLabel(gridLayoutWidget);
        label_credit_1->setObjectName(QStringLiteral("label_credit_1"));
        label_credit_1->setFont(font1);

        gridLayout_2->addWidget(label_credit_1, 0, 0, 1, 1);

        label_credit_2 = new QLabel(gridLayoutWidget);
        label_credit_2->setObjectName(QStringLiteral("label_credit_2"));
        label_credit_2->setFont(font1);

        gridLayout_2->addWidget(label_credit_2, 1, 0, 1, 1);

        grade_2 = new QComboBox(gridLayoutWidget);
        grade_2->setObjectName(QStringLiteral("grade_2"));

        gridLayout_2->addWidget(grade_2, 1, 4, 1, 1);

        label_credit_6 = new QLabel(gridLayoutWidget);
        label_credit_6->setObjectName(QStringLiteral("label_credit_6"));
        label_credit_6->setFont(font1);

        gridLayout_2->addWidget(label_credit_6, 5, 0, 1, 1);

        credit_8 = new QSpinBox(gridLayoutWidget);
        credit_8->setObjectName(QStringLiteral("credit_8"));

        gridLayout_2->addWidget(credit_8, 7, 1, 1, 1);

        credit_7 = new QSpinBox(gridLayoutWidget);
        credit_7->setObjectName(QStringLiteral("credit_7"));

        gridLayout_2->addWidget(credit_7, 6, 1, 1, 1);

        label_grade_6 = new QLabel(gridLayoutWidget);
        label_grade_6->setObjectName(QStringLiteral("label_grade_6"));
        label_grade_6->setFont(font1);

        gridLayout_2->addWidget(label_grade_6, 5, 3, 1, 1);

        credit_5 = new QSpinBox(gridLayoutWidget);
        credit_5->setObjectName(QStringLiteral("credit_5"));

        gridLayout_2->addWidget(credit_5, 4, 1, 1, 1);

        grade_6 = new QComboBox(gridLayoutWidget);
        grade_6->setObjectName(QStringLiteral("grade_6"));

        gridLayout_2->addWidget(grade_6, 5, 4, 1, 1);

        credit_3 = new QSpinBox(gridLayoutWidget);
        credit_3->setObjectName(QStringLiteral("credit_3"));

        gridLayout_2->addWidget(credit_3, 2, 1, 1, 1);

        label_grade_7 = new QLabel(gridLayoutWidget);
        label_grade_7->setObjectName(QStringLiteral("label_grade_7"));
        label_grade_7->setFont(font1);

        gridLayout_2->addWidget(label_grade_7, 6, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 4, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 5, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 6, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 7, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_total_credits, lineEdit_current_gpa);
        QWidget::setTabOrder(lineEdit_current_gpa, credit_1);
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
        grade_8->setCurrentIndex(0);
        grade_7->setCurrentIndex(0);
        grade_3->setCurrentIndex(0);
        grade_1->setCurrentIndex(0);
        grade_2->setCurrentIndex(0);
        grade_6->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "GUI", 0));
        submitButton->setText(QApplication::translate("MainWindow", "Calculate", 0));
        label_total_credits->setText(QApplication::translate("MainWindow", "Total Credits :", 0));
        label_current_gpa->setText(QApplication::translate("MainWindow", "Current GPA :", 0));
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
        label_credit_3->setText(QApplication::translate("MainWindow", "Credit :", 0));
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
        label_grade_2->setText(QApplication::translate("MainWindow", "Grade :", 0));
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
        label_grade_5->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_grade_01->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_grade_4->setText(QApplication::translate("MainWindow", "Grade :", 0));
        label_grade_8->setText(QApplication::translate("MainWindow", "Grade :", 0));
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
        label_credit_5->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_7->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_1->setText(QApplication::translate("MainWindow", "Credit :", 0));
        label_credit_2->setText(QApplication::translate("MainWindow", "Credit :", 0));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEST_GUIH23833_H
