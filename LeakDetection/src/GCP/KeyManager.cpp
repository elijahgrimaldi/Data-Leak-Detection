#include "KeyManager.h"

namespace LDS {

    void KeyManager::CreateKey() {
        namespace kms = google::cloud::kms;

        kms::KeyManagementServiceClient client(kms::MakeKeyManagementServiceConnection());

        kms::CryptoKey crypto_key;
        crypto_key.set_purpose(kms::CryptoKey::ENCRYPT_DECRYPT);

        kms::CryptoKeyVersion crypto_key_version;
        crypto_key_version.set_state(kms::CryptoKeyVersion::ENABLED);

        crypto_key.add_crypto_key_versions()->Swap(&crypto_key_version);

        crypto_key = client.CreateCryptoKey(/* KeyRing ID */, /* Location ID */, crypto_key);
    }


}