#include <iostream>
#include <fstream>
#include <iomanip>

int main(int argc, char *argv[])
{
    char data;
    int num;

    if (argc != 2)
    {
        std::cerr << "使い方: ./myDump.exe ./ファイル名" << std::endl;
        return 1;
    }

    std::ifstream fin(argv[1], std::ios::in | std::ios::binary);

    if (!fin.is_open())
    {
        std::cerr << "ファイルをオープンできません！";
        return 2;
    }

    num = 0;
    while (fin.get(data))
    {
        std::cout << std::setw(2) << std::setfill('0') << std::hex << std::uppercase << ((int)data & 0xff) << ' ';

        num++;
        if (num % 16 == 0)
        {
            std::cout << std::endl;
        }
    }

    std::cout << std::endl;

    fin.close();

    return 0;
}