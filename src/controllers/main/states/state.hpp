#pragma once

#include <QObject>

#include "id.hpp"

namespace pf::controller {
    class MainWindowController;
} // namespace pf::controller

namespace pf::state {
    class State : public QObject {
        Q_OBJECT

    public:
        virtual ~State() = default;

        virtual void start() noexcept = 0;
        virtual void finish() noexcept = 0;

    protected:
        State() = delete;
        explicit State(const id stateId,
                       controller::MainWindowController* controller,
                       QObject* parent = nullptr) noexcept;

        const id _stateId;
        controller::MainWindowController* _controller;
    };
} // namespace pf::state
