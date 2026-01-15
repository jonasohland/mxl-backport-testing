#include "features.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

feature* g_features = NULL;

feature* alloc_feature(char const* version)
{
    feature* f = (feature*)malloc(sizeof(feature));
    f->version = strdup(version);
    f->next = NULL;
    return f;
}

void print_features()
{
    feature* features = g_features;

    while (features != NULL)
    {
        fprintf(stderr, "Have feature from %s\n", features->version);
        features = features->next;
    }
}

void add_feature(char const* version)
{
    if (g_features == NULL)
    {
        g_features = alloc_feature(version);
    }
    else
    {
        feature* f = g_features;
        g_features = alloc_feature(version);
        g_features->next = f;
    }
}
