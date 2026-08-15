#include <iostream>
#include <string>

int main() {
    std::string modules[] = {"Login", "Profile", "Dashboard", "Settings"};
    std::cout << "Student Portal - Available Modules:\n";
    for (const auto& m : modules) {
        std::cout << " - " << m << "\n";
    }
    return 0;
}
// TODO removed: this is the working entry point for the CLI menu
// important work
