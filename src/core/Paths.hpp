#pragma once
#include <string>

class Paths {
public:
    // Initialization of all core paths
    static void init();

    // Base directories
    static std::string root();
    static std::string config();
    static std::string logs();
    static std::string models();
    static std::string knowledge();
    static std::string memory();
    static std::string backups();
    static std::string themes();
    static std::string hive();
    static std::string tmp();

private:
    static std::string s_root;
};
