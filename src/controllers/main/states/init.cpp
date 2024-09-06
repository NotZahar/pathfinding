#include "init.hpp"

#include "../main_window_controller.hpp"

namespace pf::state {
    Init::Init(controller::MainWindowController* controller) noexcept
        : State(id::init, controller) {
    }

    void Init::start() noexcept {
        Q_ASSERT(_controller);
        _controller->getView()->show();
    }

    void Init::finish() noexcept {
    }
} // namespace pf::state
