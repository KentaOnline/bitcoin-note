// Copyright (c) 2018, The Bitcoin Note Developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <fstream>
#include "StreamLogger.h"

namespace Logging {

class FileLogger : public StreamLogger {
public:
  FileLogger(Level level = DEBUGGING);
  void init(const std::string& filename);

private:
  std::ofstream fileStream;
};

}