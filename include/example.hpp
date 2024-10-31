#pragma once
#ifndef CPP_CMAKE_DEFAULT_EXAMPLE_HPP_
#define CPP_CMAKE_DEFAULT_EXAMPLE_HPP_

// STL includes
#include <string_view>

namespace cpp_cmake_default
{
[[nodiscard]] constexpr std::string_view hello_world() noexcept
{
  return "Hello World!";
}
} // namespace cpp_cmake_default

#endif