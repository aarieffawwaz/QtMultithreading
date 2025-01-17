#include <QCoreApplication>
#include "WorkerThread.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Create and start two threads
    WorkerThread thread1("Thread 1");
    WorkerThread thread2("Thread 2");

    thread1.start();
    thread2.start();

    // Ensure main thread waits for worker threads to finish
    thread1.wait();
    thread2.wait();

    return 0;
}
