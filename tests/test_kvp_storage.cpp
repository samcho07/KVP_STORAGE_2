#include "key_storage.h"
#include <cassert>

int main() {
    KVPStorage storage;
    storage.set("TestKey", "TestValue");
    assert(storage.get("TestKey") == "TestValue");

    storage.remove("TestKey");
    assert(storage.get("TestKey").empty());

    return 0;
}
