#include <iostream>
#include <iomanip>

int main(int argc, char *argv[])
{
    for (char data = 0; data <= 15; data++)
    {
        std::cout << std::setw(2) << std::setfill('0') << std::hex << std::uppercase << ((int)data & 0xff) << ' ';
    }
    std::cout << std::endl;

    return 0;
}