/**
 * @brief Main function
 */

#include <QApplication>
#include "mainwindow.h"

/**
 * @brief Main function to start the main window
 * @param argc Command line argument count parsing to create main window
 * @param argv Command line argument value parsing to create main window
 * @return The result of main window execution
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
