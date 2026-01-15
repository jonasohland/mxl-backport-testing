#include "features.h"

void __attribute__((constructor)) feature_f4()
{
    add_feature("f4");
}
