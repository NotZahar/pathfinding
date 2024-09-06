#include "map_view.hpp"
#include "ui_map_view.h"

namespace pf::view {
    MapView::MapView(QWidget* parent)
        : QWidget(parent),
          _ui(new Ui::MapView) {
        _ui->setupUi(this);
    }

    MapView::~MapView() {
        delete _ui;
    }
} // namespace pf::view
