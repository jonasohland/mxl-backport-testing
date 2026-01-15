#pragma once

typedef struct feature_t
{
    struct feature_t* next;
    char const* version;
} feature;

void print_features();
void add_feature(char const* version);
