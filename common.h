#ifndef COMMON_H_
#define COMMON_H_

#include <cstdint>
#include <memory>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <exception>
#include <stdexcept>
#include <stdexcept>
#include <cstring>
#include <iostream>
#include <vector>
#include <chrono>

using Clock = std::chrono::steady_clock;

#ifdef DEBUG
#define DBG(...) fprintf(stdout, __VA_ARGS__)
#else
#define DBG(...) {}
#endif

#endif