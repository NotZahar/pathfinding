#pragma once

#include <QWidget>

namespace Ui {
    class MapView;
}

namespace pf::view {
    class MapView : public QWidget {
        Q_OBJECT

    public:
        explicit MapView(QWidget* parent = nullptr);
        ~MapView();

    private:
        Ui::MapView* _ui;
    };
} // namespace pf::view
