#include "WorkerThread.h"

WorkerThread::WorkerThread(QString name) : threadName(name) {}

void WorkerThread::run() {
    for (int i = 0; i < 5; ++i) {
        qDebug() << threadName << "running iteration" << i;
        QThread::sleep(1);  // Simulate work with delay
    }
}
