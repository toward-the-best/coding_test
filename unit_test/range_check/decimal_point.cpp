/*
 * 연관 자료 
 * url : https://doitnow-man.tistory.com/entry/%EC%BD%94%ED%85%8C-%EA%B8%B0%EC%B4%88-c-%EC%86%8C%EC%88%98%EC%A0%90-%ED%91%9C%ED%98%84
 */

#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
    #if 0
    cout << "char \t\t: " << sizeof(char) << " bytes\n";
    cout << "unsigned char \t: " << sizeof(unsigned char) << " bytes\n";
    cout << "wchar_t \t: " << sizeof(wchar_t) << " bytes\n";
    cout << "bool \t\t: " << sizeof(bool) << " bytes\n";
    cout << "short \t\t: " << sizeof(short) << " bytes\n";
    cout << "unsigned short \t: " << sizeof(unsigned short) << " bytes\n";
    cout << "int \t\t: " << sizeof(int) << " bytes\n";
    cout << "unsigned int \t: " << sizeof(unsigned int) << " bytes\n";
    cout << "long  \t\t: " << sizeof(long) << " bytes\n";
    cout << "unsigned long \t: " << sizeof(unsigned long) << " bytes\n";
    cout << "int8_t \t\t: " << sizeof(int8_t) << " bytes\n";
    cout << "int16_t \t: " << sizeof(int16_t) << " bytes\n";
    cout << "int32_t \t: " << sizeof(int32_t) << " bytes\n";
    cout << "int64_t \t: " << sizeof(int64_t) << " bytes\n";
    cout << "float \t\t: " << sizeof(float) << " bytes\n";
    cout << "double \t\t: " << sizeof(double) << " bytes\n";
    #endif
    double result = 0;
    
    //cout << fixed;
    //cout.precision(24);
    result = (float)1 / (float)3;
    std::cout << result << std::endl;
    result = (float)300001 / (float)3;
    std::cout << result << std::endl;
    
    result = (double)1 / (double)3;
    std::cout << result << std::endl;
    result = (double)300001 / (double)3;
    std::cout << result << std::endl;
    

    return 0;
}
