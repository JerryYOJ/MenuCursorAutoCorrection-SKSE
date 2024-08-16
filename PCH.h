#pragma once

// This file is required.

#include "RE/Skyrim.h"
#include "SKSE/SKSE.h"

using namespace std::literals;
namespace logger = SKSE::log;

template <typename T>
class SINGLETON {
public:
    static T* getInstance() {
        static T instance; // Create instance of T
        return &instance;
    }

protected:
    SINGLETON() = default;
    ~SINGLETON() = default;

    // Delete copy and move constructors and assignment operators
    SINGLETON(const SINGLETON&) = delete;
    SINGLETON(SINGLETON&&) = delete;
    SINGLETON& operator=(const SINGLETON&) = delete;
    SINGLETON& operator=(SINGLETON&&) = delete;
};