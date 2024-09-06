#include <QApplication >

#include "constants/settings.hpp"
#include "controllers/main/main_window_controller.hpp"

int main(int argc, char* argv[]) {
    QCoreApplication::setOrganizationName(pf::settings::organizationName);
    QCoreApplication::setApplicationName(pf::settings::applicationName);

    QApplication app(argc, argv);

    pf::controller::MainWindowController::instance();

    return app.exec();
}
