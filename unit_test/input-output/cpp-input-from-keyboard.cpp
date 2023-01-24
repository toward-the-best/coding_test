#include <iostream>

int main(int argc, char const *argv[])
{
    std::string parm1, param2;

    std::cin >> parm1 >> param2;

    std::cout << parm1 << " " << param2 << std::endl; // no flush needed

    return 0;
}
