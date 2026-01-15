#include "features.h"

void __attribute__((constructor)) feature_f11()
{
    add_feature("f11");
}
