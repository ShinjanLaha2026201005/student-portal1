#include <iostream>
#include <string>
bool login(const std::string& user, const std::string& pass) {
    return user == "admin" && pass == "1234";
}

void printLoginPrompt() {
    std::cout << "Enter username and password to continue.\n";
}

int loginAttempts = 0;
const int MAX_ATTEMPTS = 3;

void lockAccount() {
    std::cout << "Account locked after too many failed attempts.\n";
}
// WIP: adding password reset flow
