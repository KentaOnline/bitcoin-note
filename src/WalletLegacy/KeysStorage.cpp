// Copyright (c) 2018, The Bitcoin Note Developers.
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "KeysStorage.h"

#include "WalletLegacy/WalletLegacySerialization.h"
#include "Serialization/ISerializer.h"
#include "Serialization/SerializationOverloads.h"
#include "CryptoNoteCore/CryptoNoteSerialization.h"

namespace CryptoNote {

void KeysStorage::serialize(ISerializer& serializer, const std::string& name) {
  serializer.beginObject(name);

  serializer(creationTimestamp, "creation_timestamp");

  serializer(spendPublicKey, "spend_public_key");
  serializer(spendSecretKey, "spend_secret_key");

  serializer(viewPublicKey, "view_public_key");
  serializer(viewSecretKey, "view_secret_key");

  serializer.endObject();
}

}
