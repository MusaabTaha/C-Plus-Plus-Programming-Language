#include <iostream>
#include <cstdint>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{

    auto workspacepath = fs::path{"D:\\semester break plan\\C++\\UdemyCppEng\\"};
    auto chapterPath = workspacepath;
    chapterPath /= "Chapter 5";
    std::cout << chapterPath << "\n";

    auto currentPath = fs::current_path();
    currentPath /= {"file_systems1.cc"};
    std::cout << currentPath << "\n";

    std::cout << "relative path : " << currentPath.relative_path() << "\n";
    std::cout << "parent path : "   << currentPath.parent_path() << "\n";
    std::cout << "filename      : " << currentPath.filename() << "\n";
    std::cout << "stem : "          << currentPath.stem() << "\n";
    std::cout << "extension : "     << currentPath.extension() << "\n";
    std::cout << "exists : "        << std::boolalpha << fs::exists(currentPath) << '\n';
    std::cout << "Is file : "       << std::boolalpha << fs::is_regular_file(currentPath) << '\n';
    std::cout << "Is directory : "  << std::boolalpha << fs::is_directory(currentPath) << '\n';

    for(auto it = fs::directory_iterator(fs::current_path()); it != fs::directory_iterator{}; ++it){

        std::cout << *it << "\n";

    }

    auto newDirectory = fs::current_path();
    newDirectory /= "test1";

    if(!(fs::exists(newDirectory))){

        fs::create_directory(newDirectory);

    }

    auto newFile = newDirectory;
    newFile /= "copyFile.cc";

    if(!fs::exists(newFile)){

        fs::copy_file(currentPath, newFile);

    }

    return 0;

}
