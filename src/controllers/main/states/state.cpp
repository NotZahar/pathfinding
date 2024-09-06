#include "state.hpp"

namespace pf::state {
    State::State(const id stateId, controller::MainWindowController* controller,
                 QObject* parent) noexcept
        : QObject(parent),
          _stateId(stateId),
          _controller(controller) {
    }
} // namespace pf::state
