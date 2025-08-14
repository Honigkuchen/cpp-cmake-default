#pragma once
#ifndef CPP_CMAKE_DEFAULT_EXAMPLE_HPP_
#define CPP_CMAKE_DEFAULT_EXAMPLE_HPP_

// STL includes
#include <string_view>

// Project includes
#include "defines.hpp"

namespace cpp_cmake_default
{
CCD_NODISCARD CCD_CONSTEXPR std::string_view HelloWorld() CCD_NOEXCEPT
{
  return "Hello World!";
}
} // namespace cpp_cmake_default

#endif