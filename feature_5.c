#include "features.h"

void __attribute__((constructor)) feature_f5()
{
    add_feature("f5");
}
