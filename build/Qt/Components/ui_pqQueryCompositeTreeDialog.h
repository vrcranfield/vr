/********************************************************************************
** Form generated from reading UI file 'pqQueryCompositeTreeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQQUERYCOMPOSITETREEDIALOG_H
#define UI_PQQUERYCOMPOSITETREEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "pqTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_pqQueryCompositeTreeDialog
{
public:
    QVBoxLayout *verticalLayout;
    pqTreeWidget *Blocks;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pqQueryCompositeTreeDialog)
    {
        if (pqQueryCompositeTreeDialog->objectName().isEmpty())
            pqQueryCompositeTreeDialog->setObjectName(QStringLiteral("pqQueryCompositeTreeDialog"));
        pqQueryCompositeTreeDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(pqQueryCompositeTreeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Blocks = new pqTreeWidget(pqQueryCompositeTreeDialog);
        Blocks->setObjectName(QStringLiteral("Blocks"));
        Blocks->setRootIsDecorated(false);

        verticalLayout->addWidget(Blocks);

        buttonBox = new QDialogButtonBox(pqQueryCompositeTreeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(pqQueryCompositeTreeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), pqQueryCompositeTreeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pqQueryCompositeTreeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(pqQueryCompositeTreeDialog);
    } // setupUi

    void retranslateUi(QDialog *pqQueryCompositeTreeDialog)
    {
        pqQueryCompositeTreeDialog->setWindowTitle(QApplication::translate("pqQueryCompositeTreeDialog", "Select Block", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = Blocks->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("pqQueryCompositeTreeDialog", "Structure (Flat Index)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqQueryCompositeTreeDialog: public Ui_pqQueryCompositeTreeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQQUERYCOMPOSITETREEDIALOG_H