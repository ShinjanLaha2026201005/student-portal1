#include <iostream>
#include <string>
bool login(const std::string& user, const std::string& pass) {
    return user == "admin" && pass == "1234";
}
