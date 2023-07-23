#include <iostream>
#include <string>
#include <fstream>


class Replace {
private:
    std::string filename;
    std::string s1;
    std::string s2;
public:
    Replace(std::string filename, std::string s1, std::string s2);
    ~Replace();
    void replace();
};
