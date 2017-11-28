//
// Created by artem on 28.11.17.
//

#include <QtTest>

#include "TestQBS58.h"
#include "../lib/bs58/QBS58.h"

void TestQBS58::encode() {
    QString encoded = QBS58::encode(QByteArray("test_string"));

    QCOMPARE(encoded, QString("Vs5LyU619z1XYfY"));
}