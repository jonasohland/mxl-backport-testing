#include "features.h"

void __attribute__((constructor)) feature_f1()
{
    add_feature("f1");
}
