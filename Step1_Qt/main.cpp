#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget widget;
    widget.setMinimumHeight(500);
    widget.setMinimumWidth(800);
    widget.setWindowTitle("Hello, my Qt program");

    QLabel label{&widget};
    label.setText("Hello, how are you, i kill you");

    widget.show();
    return app.exec();
}
