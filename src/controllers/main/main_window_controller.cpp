#include "main_window_controller.hpp"

#include "states/init.hpp"

namespace pf::controller {
    MainWindowController::MainWindowController() noexcept
        : _state(std::make_unique<state::Init>(this)),
          _mainView(std::make_unique<view::MainWindowView>()) {
        Q_ASSERT(_state);
        _state->start();
    }

    MainWindowController& MainWindowController::instance() noexcept {
        static MainWindowController instance;
        return instance;
    }

    view::MainWindowView* MainWindowController::getView() const noexcept {
        Q_ASSERT(_mainView);
        return _mainView.get();
    }

    void MainWindowController::changeState(
        std::unique_ptr<state::State> state) noexcept {
        Q_ASSERT(_state && state);
        _state->finish();
        _state = std::move(state);
        _state->start();
    }
} // namespace pf::controller
