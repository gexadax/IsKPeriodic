#include <iostream>
#include <string>


bool IsKPeriodic(const std::string& str, int k) {
    // ���������, ��� k > 0 � ��� ����� ������ ������ k.
    if (k <= 0 || str.length() % k != 0) {
        return false;
    }





}


int main() {
    std::string str = "abcabcabcabc";
    int k = 3;
    if (IsKPeriodic(str, k)) {
        std::cout << str << " is " << k << "-periodic" << std::endl;
    }
    else {
        std::cout << str << " is not " << k << "-periodic" << std::endl;
    }
    return 0;
}