# Student Portal1

## About
A simple student portal for managing login, profile, dashboard, and settings.

## Features
- Login (with attempt tracking and account lockout)
- Profile management (view, update email, validate email)
- Dashboard (welcome screen, notifications, courses, grade summary)
- Settings (dark mode toggle, notification toggle)

## Project Structure
student-portal1/
├── src/
│ ├── app.cpp # main entry point, lists available modules
│ ├── login.cpp # login + credential check logic
│ ├── profile.cpp # profile data and update functions
│ ├── dashboard.cpp # dashboard display functions
│ └── settings.cpp # settings toggle functions
├── notes.txt
├── .gitignore
└── README.md

## Requirements
- g++ (C++17 or later)
- Git 2.30+

## Setup

1. Clone the repository:
```bash
   git clone https://github.com/ShinjanLaha2026201005/student-portal1.git
```

2. Move into the project folder:
```bash
   cd student-portal1
```

3. Check out the latest release (optional):
```bash
   git checkout v1.0
```

No external libraries or package installation is required — every module uses only the C++ standard library.

## Code Execution

Each module lives in `src/` and can be compiled and run independently.

**Run the main entry point:**
```bash
g++ src/app.cpp -o app
./app
```

**Run the login module:**
```bash
g++ src/login.cpp -o login
./login
```

**Run the profile module:**
```bash
g++ src/profile.cpp -o profile
./profile
```

**Run the dashboard module:**
```bash
g++ src/dashboard.cpp -o dashboard
./dashboard
```

**Run the settings module:**
```bash
g++ src/settings.cpp -o settings
./settings
```

## Git History
This project's full commit and branch history (including feature branches, stash usage, conflict resolution, and the `v1.0` release tag) can be viewed with:
```bash
git log --graph --oneline --all
```

## License
MIT
