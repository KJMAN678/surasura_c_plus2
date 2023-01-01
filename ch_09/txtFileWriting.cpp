#include <iostream>
#include <fstream>

int main()
{
    std::ofstream fout("myFile.txt");

    if (!fout.is_open())
    {
        std::cout << "ファイルをオープンできません！";

        return 1;
    }

    fout << "helllo, world" << std::endl;
    fout << "皆さん、こんにちは" << std::endl;

    fout.close();
    std::cout << "ファイルに書き込みました！" << std::endl;

    return 0;
}