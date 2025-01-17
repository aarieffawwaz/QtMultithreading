#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QThread>
#include <QDebug>

class WorkerThread : public QThread {
    Q_OBJECT

public:
    explicit WorkerThread(QString name);
    void run() override;

private:
    QString threadName;
};

#endif // WORKERTHREAD_H
