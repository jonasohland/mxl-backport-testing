#include "features.h"

void __attribute__((constructor)) feature_f10()
{
    add_feature("f10");
}
