#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[]) {

    std::string parm1, parm2;

    try {
        {
            std::cout << "formatting\n";
            std::ifstream infile("./test.txt");
            if (infile.is_open()) {
                // format이 정해져 있을때
                while (infile >> parm1 >> parm2) {
                    std::cout << parm1 << " : " << parm2 << "\n";
                }
                infile.close();
            } else {
                std::cout << "file is not opended\n";
            }
        }
        {
            std::cout << "non formatting\n";
            std::ifstream infile("./test.txt");
            if (infile.is_open()) {
                // format이 없을때
                std::string line;
                while (std::getline(infile, line)) {
                    // istringstream는 cin 처럼 사용합니다.
                    std::istringstream iss(line);

                    if (!(iss >> parm1 >> parm2)) {
                        break;
                    }
                    std::cout << parm1 << " : " << parm2 << "\n";
                }
                infile.close();
            } else {
                std::cout << "file is not opended\n";
            }
        }

    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}