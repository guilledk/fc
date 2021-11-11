#include <fc/crypto/openssl.hpp>

#include <fc/filesystem.hpp>

#include <boost/filesystem/path.hpp>

#include <cstdlib>
#include <string>
#include <stdlib.h>

namespace  fc 
{
   int init_openssl() {
      static bool initialized = false;
      if (!initialized) {
         OPENSSL_init_crypto(OPENSSL_INIT_LOAD_CONFIG, NULL);
         initialized = true;
      }
      return 0;
   }
}