#include <QGuiApplication>

#include "constants/settings.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName(pf::settings::organizationName);
    QCoreApplication::setApplicationName(pf::settings::applicationName);

    QGuiApplication app(argc, argv);

    return app.exec();
}
