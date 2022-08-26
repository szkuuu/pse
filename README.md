# pse
## setup `bits/stdc++.h`

```cpp
/// location:
/// /Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/include/c++/v1/bits  
/// name: stdc++.h

// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2022 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
// #include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
// #include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
// #include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <source_location>
#include <syncstream>
#include <version>
#endif

#if __cplusplus > 202002L
#include <expected>
#include <spanstream>
#if __has_include(<stacktrace>)
# include <stacktrace>
#endif
#include <stdatomic.h>
#endif
```

## 제한시간 내에 풀지 못 하거나 풀이방법을 몰랐음
### 정수론 및 조합론
- [BOJ 9375 : 패션왕 신해빈](https://www.acmicpc.net/problem/9375) ([solve](src/boj/9375.cpp))
- [BOJ 2004 : 조합 0의 개수](https://www.acmicpc.net/problem/2004) ([solve](src/boj/2004.cpp))
- [BOJ 11050 : 이항계수 1](https://www.acmicpc.net/problem/11050) ([solve](src/boj/11050.cpp))
- [BOJ 11051 : 이항계수 2](https://www.acmicpc.net/problem/11051) ([solve](src/boj/11051.cpp))

### 백트래킹
- [BOJ 15649 : N과 M (1)](https://www.acmicpc.net/problem/15649) ([solve](src/boj/15649.cpp))
- [BOJ 9663 : N-Queen](https://www.acmicpc.net/problem/9663) ([solve](src/boj/9663.cpp))
- [BOJ 2580 : 스도쿠](https://www.acmicpc.net/problem/2580) ([solve](src/boj/2580.cpp))
- [BOJ 14888 : 연산자 끼워넣기](https://www.acmicpc.net/problem/14888) ([solve](src/boj/14888.cpp))
- [BOJ 14889 : 스타트와 링크](https://www.acmicpc.net/problem/14889) ([solve](src/boj/14889.cpp))

### DP
- [BOJ 1912 : 연속합](https://www.acmicpc.net/problem/1912) ([solve](src/boj/1912.cpp))
- [BOJ 1149 : RGB 거리](https://www.acmicpc.net/problem/1149) ([solve](src/boj/1149.cpp))
- [BOJ 2579 : 계단 오르기](https://www.acmicpc.net/problem/2579) ([solve](src/boj/2579.cpp))
- [BOJ 10844 : 쉬운 계단 수](https://www.acmicpc.net/problem/10844) ([solve](src/boj/10844.cpp))
- [BOJ 2156 : 포도주 시식](https://www.acmicpc.net/problem/2156) ([solve](src/boj/2156.cpp))
- [BOJ 11053 : 가장 긴 증가하는 부분 수열](https://www.acmicpc.net/problem/11053) ([solve](src/boj/11053.cpp))
- [BOJ 2565 : 전깃줄](https://www.acmicpc.net/problem/2565) ([solve](src/boj/2565.cpp))
- [BOJ 9251 : LCS](https://www.acmicpc.net/problem/9251) ([solve](src/boj/9251.cpp))
- [BOJ 12865 : 평범한 배낭](https://www.acmicpc.net/problem/12865) ([solve](src/boj/12865.cpp))

### 누적 합
- [BOJ 10986 : 나머지 합](https://www.acmicpc.net/problem/10986) ([solve](src/boj/10986.cpp))
