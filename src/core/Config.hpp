#pragma once
#include <string>
#include <unordered_map>

class Config {
public:
    // Load configuration from disk
    static void load();

    // Save configuration back to disk
    static void save();

    // Get or set values
    static std::string get(const std::string& key);
    static void set(const std::string& key, const std::string& value);

    // Default paths
    static std::string getConfigFilePath();

private:
    static std::unordered_map<std::string, std::string> s_values;
};
