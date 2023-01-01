#include <iostream>
#include <fstream>

int main() {
    std::ofstream fout("myFile.bin", std::ios::out | std::ios::binary);

    if (!fout.is_open()) {
        std::cout << "ファイルをオープンできません！" << std::endl;

        return 1;
    }

    for (char data = 1; data <= 10; data++) {
        fout.put(data);
    }

    fout.close();
    std::cout << "ファイルに書き込みました！" << std::endl;

    return 0;
}