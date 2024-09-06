#include "main_window_view.hpp"
#include "ui_main_window_view.h"

namespace pf::view {
    MainWindowView::MainWindowView(QWidget* parent)
        : QWidget(parent),
          _ui(new Ui::MainWindowView) {
        _ui->setupUi(this);
    }

    MainWindowView::~MainWindowView() {
        delete _ui;
    }
} // namespace pf::view
