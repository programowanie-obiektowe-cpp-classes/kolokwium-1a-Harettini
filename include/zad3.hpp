#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem
template <typename T>
std::size_t polejSosem (const Tagliatelle* mak, const T* sos)
{
  return sos.polej(mak);
}