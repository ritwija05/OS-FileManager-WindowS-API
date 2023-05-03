#include <iostream>
#include "FileManager.h"
#include<regex>
std::regex FileManager::only_directory_path_regex = std::regex("^(?:(?:[a-zA-Z]:)?\\\\)?(?:[^\\\\\n]+\\\\)*[^\\\\\n]+\\\\$");
std::regex FileManager::full_path_with_file = std::regex("(^(?:[a-zA-Z]:)?\\\\?(?:\\\\.{1,2}\\\\)?(?:[^\\\\/:*?\"<>|\\r\\n]+\\\\)*[^\\\\/:*?\"<>|\\r\\n]+\\.[a-zA-Z0-9]{1,4}$)");
int main() {
    FileManager fm;
    bool result = fm.createFile("test.txt");
    if (result) {
        std::cout << "File created successfully\n";
    } else {
        std::cout << "Failed to create file\n";
    }
    return 0;
}
