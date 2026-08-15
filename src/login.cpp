#include <iostream>
#include <string>
bool login(const std::string& user, const std::string& pass) {
    return user == "admin" && pass == "1234";
}

void printLoginPrompt() {
    std::cout << "Enter username and password to continue.\n";
}
