#pragma once

#include "state.hpp"

namespace pf::state {
    class Init final : public State {
        Q_OBJECT

    public:
        Init() = delete;
        Init(controller::MainWindowController* controller) noexcept;
        ~Init() override = default;

        void start() noexcept override;
        void finish() noexcept override;
    };
} // namespace pf::state
