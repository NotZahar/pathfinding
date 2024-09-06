#pragma once

#include <memory>

#include "../../views/main_window_view.hpp"
#include "states/state.hpp"

namespace pf::controller {
    class MainWindowController final {
        Q_DISABLE_COPY_MOVE(MainWindowController)

    public:
        static MainWindowController& instance() noexcept;

        view::MainWindowView* getView() const noexcept;
        void changeState(std::unique_ptr<state::State> state) noexcept;

    private:
        MainWindowController() noexcept;
        ~MainWindowController() = default;

        std::unique_ptr<state::State> _state;
        std::unique_ptr<view::MainWindowView> _mainView;
    };
} // namespace pf::controller
