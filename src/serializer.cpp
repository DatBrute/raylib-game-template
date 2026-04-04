#include <iostream>
#define ENET_IMPLEMENTATION
#include "enet.h"
#include "cista/containers/vector.h"

struct Foo {int x;};


class Serializer{
    Foo foo = {1};
};