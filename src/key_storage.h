#ifndef KVP_STORAGE_H
#define KVP_STORAGE_H

#include <unordered_map>
#include <string>

class KVPStorage{

    public:
        KVPStorage();
        ~KVPStorage();

        void set(const std::string& key, const std::string& value);
        std::string get(const std::string& key) const;
        bool remove(const std::string& key);
        void saveFile() const;
        void loadFile();

    private:
        std::unordered_map<std::string, std::string> kvp_map;
        const std::string store_file = "store.txt";
};




#endif