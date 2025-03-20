#pragma once

#include "key_storage.h"
#include <iostream>
#include <fstream>


//Constructor
KVPStorage:: KVPStorage()
{
    loadFile();
}


//DeConstructor
KVPStorage:: ~KVPStorage()
{
    saveFile();
}


void KVPStorage::set(const std::string& key, const std::string& value)
{
    kvp_map[key] = value;
}


std::string KVPStorage::get(const std::string& key) const
{
    auto it = kvp_map.find(key);
    return(it != kvp_map.end() ? it->second: " ");

}

bool KVPStorage::remove(const std::string& key)
{
    return kvp_map.erase(key) > 0;
}

void KVPStorage::saveFile() const
{
    std::ofstream file(store_file);
    for(const auto& pair : kvp_map)
    {
        file << pair.first << "  " << pair.second << "  " << std::endl;
    }
}

void KVPStorage::loadFile()
{
    std::ifstream file(store_file);
    std::string key, value;
    while (file >> key >> value)
    {
        kvp_map[key] = value;
    }
    
}