/********************************************************************************
** Form generated from reading UI file 'pqComparativeVisPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PQCOMPARATIVEVISPANEL_H
#define UI_PQCOMPARATIVEVISPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "pqAnimatablePropertiesComboBox.h"
#include "pqAnimatableProxyComboBox.h"
#include "pqCollapsedGroup.h"
#include "pqComparativeCueWidget.h"
#include "pqSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_pqComparativeVisPanel
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    pqSpinBox *layoutX;
    QLabel *label_2;
    pqSpinBox *layoutY;
    QSpacerItem *horizontalSpacer;
    QCheckBox *showParameterLabels;
    QTableWidget *activeParameters;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addParameter;
    pqAnimatableProxyComboBox *proxyCombo;
    pqAnimatablePropertiesComboBox *propertyCombo;
    pqCollapsedGroup *cueGroup;
    QGridLayout *gridLayout;
    pqComparativeCueWidget *cueWidget;
    QLabel *multivalueHint;
    QCheckBox *overlay;

    void setupUi(QWidget *pqComparativeVisPanel)
    {
        if (pqComparativeVisPanel->objectName().isEmpty())
            pqComparativeVisPanel->setObjectName(QStringLiteral("pqComparativeVisPanel"));
        pqComparativeVisPanel->resize(237, 404);
        gridLayout_2 = new QGridLayout(pqComparativeVisPanel);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(pqComparativeVisPanel);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        layoutX = new pqSpinBox(pqComparativeVisPanel);
        layoutX->setObjectName(QStringLiteral("layoutX"));
        layoutX->setValue(3);

        gridLayout_2->addWidget(layoutX, 0, 1, 1, 1);

        label_2 = new QLabel(pqComparativeVisPanel);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        layoutY = new pqSpinBox(pqComparativeVisPanel);
        layoutY->setObjectName(QStringLiteral("layoutY"));
        layoutY->setValue(3);

        gridLayout_2->addWidget(layoutY, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 4, 1, 1);

        showParameterLabels = new QCheckBox(pqComparativeVisPanel);
        showParameterLabels->setObjectName(QStringLiteral("showParameterLabels"));

        gridLayout_2->addWidget(showParameterLabels, 1, 0, 1, 4);

        activeParameters = new QTableWidget(pqComparativeVisPanel);
        if (activeParameters->columnCount() < 1)
            activeParameters->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        activeParameters->setHorizontalHeaderItem(0, __qtablewidgetitem);
        activeParameters->setObjectName(QStringLiteral("activeParameters"));
        activeParameters->setEditTriggers(QAbstractItemView::NoEditTriggers);
        activeParameters->setSelectionMode(QAbstractItemView::SingleSelection);
        activeParameters->setSelectionBehavior(QAbstractItemView::SelectRows);
        activeParameters->setCornerButtonEnabled(false);
        activeParameters->setRowCount(0);
        activeParameters->setColumnCount(1);
        activeParameters->horizontalHeader()->setDefaultSectionSize(17);
        activeParameters->horizontalHeader()->setHighlightSections(false);
        activeParameters->horizontalHeader()->setStretchLastSection(true);
        activeParameters->verticalHeader()->setVisible(true);
        activeParameters->verticalHeader()->setHighlightSections(false);

        gridLayout_2->addWidget(activeParameters, 3, 0, 1, 5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addParameter = new QPushButton(pqComparativeVisPanel);
        addParameter->setObjectName(QStringLiteral("addParameter"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QtWidgets/Icons/pqPlus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        addParameter->setIcon(icon);

        horizontalLayout_2->addWidget(addParameter);

        proxyCombo = new pqAnimatableProxyComboBox(pqComparativeVisPanel);
        proxyCombo->setObjectName(QStringLiteral("proxyCombo"));
        proxyCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(proxyCombo);

        propertyCombo = new pqAnimatablePropertiesComboBox(pqComparativeVisPanel);
        propertyCombo->setObjectName(QStringLiteral("propertyCombo"));
        propertyCombo->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_2->addWidget(propertyCombo);

        horizontalLayout_2->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 5);

        cueGroup = new pqCollapsedGroup(pqComparativeVisPanel);
        cueGroup->setObjectName(QStringLiteral("cueGroup"));
        gridLayout = new QGridLayout(cueGroup);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cueWidget = new pqComparativeCueWidget(cueGroup);
        cueWidget->setObjectName(QStringLiteral("cueWidget"));
        cueWidget->setEnabled(false);
        cueWidget->setSelectionMode(QAbstractItemView::ContiguousSelection);
        cueWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout->addWidget(cueWidget, 1, 0, 1, 2);

        multivalueHint = new QLabel(cueGroup);
        multivalueHint->setObjectName(QStringLiteral("multivalueHint"));

        gridLayout->addWidget(multivalueHint, 0, 0, 1, 2);


        gridLayout_2->addWidget(cueGroup, 5, 0, 1, 5);

        overlay = new QCheckBox(pqComparativeVisPanel);
        overlay->setObjectName(QStringLiteral("overlay"));

        gridLayout_2->addWidget(overlay, 2, 0, 1, 5);


        retranslateUi(pqComparativeVisPanel);

        QMetaObject::connectSlotsByName(pqComparativeVisPanel);
    } // setupUi

    void retranslateUi(QWidget *pqComparativeVisPanel)
    {
        pqComparativeVisPanel->setWindowTitle(QApplication::translate("pqComparativeVisPanel", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("pqComparativeVisPanel", "Layout:", Q_NULLPTR));
        label_2->setText(QApplication::translate("pqComparativeVisPanel", "x", Q_NULLPTR));
        showParameterLabels->setText(QApplication::translate("pqComparativeVisPanel", "Automatic Parameter Labels", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = activeParameters->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("pqComparativeVisPanel", "Parameter", Q_NULLPTR));
        addParameter->setText(QString());
        cueGroup->setTitle(QApplication::translate("pqComparativeVisPanel", "[Select Parameter]", Q_NULLPTR));
        multivalueHint->setText(QApplication::translate("pqComparativeVisPanel", "Comma-separated values accepted.", Q_NULLPTR));
        overlay->setText(QApplication::translate("pqComparativeVisPanel", "Overlay all comparisons", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pqComparativeVisPanel: public Ui_pqComparativeVisPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PQCOMPARATIVEVISPANEL_H