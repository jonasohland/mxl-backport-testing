#include "features.h"

void __attribute__((constructor)) feature_f12()
{
    add_feature("f12");
}
