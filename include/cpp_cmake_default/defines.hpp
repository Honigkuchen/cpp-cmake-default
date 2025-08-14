#pragma once
#ifndef CPP_CMAKE_DEFAULT__DEFINES_HPP_
#define CPP_CMAKE_DEFAULT__DEFINES_HPP_

#if __cplusplus < 201103L
#define CCD_HAS_CXX11 0
#else
#define CCD_HAS_CXX11 1
#endif

#if __cplusplus < 201402L
#define CCD_HAS_CXX14 0
#else
#define CCD_HAS_CXX14 1
#endif

#if __cplusplus < 201703L
#define CCD_HAS_CXX17 0
#else
#define CCD_HAS_CXX17 1
#endif

#if __cplusplus < 202002L
#define CCD_HAS_CXX20 0
#else
#define CCD_HAS_CXX20 1
#endif

#if CCD_HAS_CXX11
#define CCD_INLINE inline
#define CCD_CONSTEXPR constexpr
#define CCD_NOEXCEPT noexcept
#define CCD_NOEXCEPT_IF(x) noexcept(x)
#define CCD_DEPRECATED [[deprecated]]
#define CCD_NODISCARD [[nodiscard]]
#define CCD_FALLTHROUGH [[fallthrough]]
#else
#define CCD_INLINE
#define CCD_CONSTEXPR
#define CCD_NOEXCEPT
#define CCD_NOEXCEPT_IF(x)
#define CCD_DEPRECATED
#define CCD_NODISCARD
#define CCD_FALLTHROUGH
#endif

#if CCD_HAS_CXX20
#define CCD_CONCEPT concept
#define CCD_REQUIRES requires
#define CCD_CONSTEVAL consteval
#define CCD_CONSTINIT constinit
#define CCD_CO_AWAIT co_await
#define CCD_CO_RETURN co_return
#define CCD_CO_YIELD co_yield
#else
#define CCD_CONCEPT
#define CCD_REQUIRES
#define CCD_CONSTEVAL
#define CCD_CONSTINIT
#define CCD_CO_AWAIT
#define CCD_CO_RETURN
#define CCD_CO_YIELD
#endif

#endif