#include "features.h"

void __attribute__((constructor)) feature_f2()
{
    add_feature("f2");
}
