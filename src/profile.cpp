#include <iostream>
#include <string>
struct Profile {
    std::string name;
    std::string email;
};

void printProfile(const Profile& p) {
    std::cout << p.name << " - " << p.email << "\n";
}

void updateEmail(Profile& p, const std::string& newEmail) {
    p.email = newEmail;
}

bool isValidEmail(const std::string& email) {
    return email.find('@') != std::string::npos;
}
