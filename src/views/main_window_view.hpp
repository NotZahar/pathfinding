#pragma once

#include <memory>

#include <QWidget>

#include "map_view.hpp"

namespace Ui {
    class MainWindowView;
}

namespace pf::view {
    class MainWindowView final : public QWidget {
        Q_OBJECT

    public:
        explicit MainWindowView(QWidget* parent = nullptr);

        ~MainWindowView();

    private:
        Ui::MainWindowView* _ui;
        std::unique_ptr<MapView> _mapView;
    };
} // namespace pf::view
