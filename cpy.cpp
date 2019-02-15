#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    std::cout << "cpy " << argv[1] << " " << argv[2] << std::endl;

    std::ifstream  src(argv[1], std::ios::binary);
    std::ofstream  dst(argv[2], std::ios::binary);

    dst << src.rdbuf();
}