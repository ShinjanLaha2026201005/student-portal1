#include <iostream>
struct Settings {
    bool darkMode = false;
    bool notificationsOn = true;
};

void toggleDarkMode(Settings& s) {
    s.darkMode = !s.darkMode;
}

void toggleNotifications(Settings& s) {
    s.notificationsOn = !s.notificationsOn;
}

void printSettings(const Settings& s) {
    std::cout << "Dark mode: " << s.darkMode << ", Notifications: " << s.notificationsOn << "\n";
}
// accidental settings edit made on main
