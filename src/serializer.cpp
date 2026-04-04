#include <iostream>
#define ENET_IMPLEMENTATION
#include "enet.h"
#include "cista/containers/vector.h"

struct Foo {int x;};


class Serializer{
    Foo foo = {1};
    cista::offset::vector<std::string> test = {"hi, bye"};
};