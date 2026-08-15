#include <iostream>
#include <string>
struct Profile {
    std::string name;
    std::string email;
};

void printProfile(const Profile& p) {
    std::cout << p.name << " - " << p.email << "\n";
}
