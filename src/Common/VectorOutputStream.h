// Copyright (c) 2018, The Bitcoin Note Developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>
#include <vector>
#include "IOutputStream.h"

namespace Common {

class VectorOutputStream : public IOutputStream {
public:
  VectorOutputStream(std::vector<uint8_t>& out);
  VectorOutputStream& operator=(const VectorOutputStream&) = delete;
  size_t writeSome(const void* data, size_t size) override;

private:
  std::vector<uint8_t>& out;
};

}
