#include "react-native-bls-signatures.h"
#include "bls.hpp"
using namespace bls;

namespace blssignatures {
	double multiply(double a, double b) {
		return a * b;
	}

  int add(int a) {
    vector<uint8_t> seed = {0,  50, 6,  244, 24,  199, 1,  25,  52,  88,  192,
                        19, 18, 12, 89,  6,   220, 18, 102, 58,  209, 82,
                        12, 62, 89, 110, 182, 9,   44, 20,  254, 22};

    PrivateKey sk = AugSchemeMPL().KeyGen(seed);
    G1Element pk = sk.GetG1Element();

    vector<uint8_t> message = {1, 2, 3, 4, 5};  // Message is passed in as a byte vector
    G2Element signature = AugSchemeMPL().Sign(sk, message);

    // Verify the signature
    bool ok = AugSchemeMPL().Verify(pk, message, signature);
		return ok ? 1 : 0;
	}
}
