#include <iostream>
#include <cstdint>
#include <fstream>

struct PlayerData{

    std::uint32_t id;
    float x_pos;
    float y_pos;

};

void printOut(const PlayerData &data){

    std::cout << data.id << "\t" << data.x_pos << "\t" << data.y_pos << "\n";
}

int write_line_to_file(std::string_view filepath, const std::string &line)
{

    auto file = std::ofstream{};

    file.open(filepath.data(), std::ios::out);
    if(file.fail())
        return 1;

    file << line << "\n";

    if(!file.good())
        return 1;

    return 0;

}

int write_bin_to_file(std::string_view filepath, const PlayerData &data)
{

    auto file = std::ofstream{};

    file.open(filepath.data(), std::ios::out | std::ios::binary);
    if(file.fail())
        return 1;

    file.write((char *)& data, sizeof(data));

    if(!file.good())
        return 1;

    return 0;

}

int read_bin_to_file(std::string_view filepath, const PlayerData &data)
{

    auto file = std::ifstream{};

    file.open(filepath.data(), std::ios::in | std::ios::binary);
    if(file.fail())
        return 1;

    file.read((char *)& data, sizeof(data));

    if(!file.good())
        return 1;

    return 0;

}

int main()
{

    const auto text = std::string{"Hello World!\n"};
    const auto fileName = std::string{"text.txt"};
    write_line_to_file(fileName, text);

    const auto player = PlayerData{.id = 1, .x_pos = 10.0F, .y_pos = 15.0F};
    const auto filename1 = std::string{"player.bin"};
    write_bin_to_file(filename1, player);

    auto playerData1 = PlayerData{};
    read_bin_to_file(filename1, playerData1);
    printOut(playerData1);
    
    return 0;

}
