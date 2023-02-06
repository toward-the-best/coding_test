#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {

    std::vector<std::pair<std::string, uint16_t>> temp_ip;
    std::vector<std::pair<std::string, uint16_t>> server_ip;
    std::vector<std::pair<std::string, uint16_t>> result_ip;

    // temp_ip.push_back(std::make_pair("1.1.1.1", 10));
    // temp_ip.push_back(std::make_pair("3.1.1.1", 10));
    // server_ip.push_back(std::make_pair("2.1.1.1", 10));
    // server_ip.push_back(std::make_pair("3.1.1.2", 10));

    bool result = true;
    std::function<bool(const std::pair<std::string, u_int16_t> &,
                       const std::pair<std::string, u_int16_t> &)>
        compare = [&result](const std::pair<std::string, u_int16_t> &lhs,
                            const std::pair<std::string, u_int16_t> &rhs) {
            if (lhs.first == rhs.first && lhs.second == rhs.second) {
                return true;
            }
            std::cout << "server IP " << rhs.first << ":" << rhs.second;
            std::cout << " => " << lhs.first << ":" << lhs.second << "\n";
            result = false;
            return true;
        };

    if (temp_ip.size() == server_ip.size()) {
        std::equal(temp_ip.begin(), temp_ip.end(), server_ip.begin(),
                   [&result](const std::pair<std::string, u_int16_t> &lhs,
                             const std::pair<std::string, u_int16_t> &rhs) {
                       if (lhs.first == rhs.first && lhs.second == rhs.second) {
                           return true;
                       }
                       std::cout << "server IP " << rhs.first << ":"
                                 << rhs.second;
                       std::cout << " => " << lhs.first << ":" << lhs.second
                                 << "\n";
                       result = false;
                       return true;
                   });

        result_ip.clear();
        if (result) {
            std::cout << "같음\n";
        } else {
            std::cout << "다름\n";
            result_ip = temp_ip;
        }
    } else {
        std::cout << "server IP From \n";

        for (auto it : server_ip) {
            std::cout << it.first << ":" << it.second << "\n";
        }
        std::cout << " => \n";
        std::cout << "server IP To \n";
        result_ip = temp_ip;
        for (auto it : result_ip) {
            std::cout << it.first << ":" << it.second << "\n";
        }
    }

    temp_ip.clear();
    temp_ip.push_back(std::make_pair("1.1.1.1", 10));
    temp_ip.push_back(std::make_pair("3.1.1.1", 40));
    server_ip.clear();
    server_ip.push_back(std::make_pair("1.1.1.1", 10));
    server_ip.push_back(std::make_pair("3.1.1.1", 40));

    result = true;
    std::equal(temp_ip.begin(), temp_ip.end(), server_ip.begin(), compare);
    result_ip.clear();
    if (result) {
        std::cout << "같음\n";
    } else {
        std::cout << "다름\n";
        result_ip = temp_ip;
    }
    /*
        for (auto it : result_ip) {
            std::cout << it.first << ":" << it.second << "\n";
        }
    */

    return 0;
}
