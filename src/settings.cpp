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
