// Copyright (c) 2018, The Bitcoin Note Developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "StringOutputStream.h"

namespace Common {

StringOutputStream::StringOutputStream(std::string& out) : out(out) {
}

size_t StringOutputStream::writeSome(const void* data, size_t size) {
  out.append(static_cast<const char*>(data), size);
  return size;
}

}
