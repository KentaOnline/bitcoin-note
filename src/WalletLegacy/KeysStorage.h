// Copyright (c) 2018, The Bitcoin Note Developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "crypto/crypto.h"

#include <stdint.h>

namespace CryptoNote {

class ISerializer;

//This is DTO structure. Do not change it.
struct KeysStorage {
  uint64_t creationTimestamp;

  Crypto::PublicKey spendPublicKey;
  Crypto::SecretKey spendSecretKey;

  Crypto::PublicKey viewPublicKey;
  Crypto::SecretKey viewSecretKey;

  void serialize(ISerializer& serializer, const std::string& name);
};

} //namespace CryptoNote
