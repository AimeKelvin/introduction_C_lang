#include <iostream>
#include <string>
#include <ctime> // For time command

using namespace std;

void showTime() {
    time_t now = time(0); // Get current time
    string timeStr = ctime(&now); // Convert to readable string
    cout << "Current time: " << timeStr;
}

int main() {
    string command;

    cout << "Welcome to My Command Prompt!\n";
    cout << "Type 'help' for available commands.\n";

    while (true) {
        // Display prompt and get input
        cout << "> ";
        getline(cin, command); // Read full line to handle spaces

        // Process commands
        if (command == "help") {
            cout << "Commands:\n";
            cout << "  hello - Prints a greeting\n";
            cout << "  time  - Shows current time\n";
            cout << "  exit  - Quits the program\n";
        }
        else if (command == "hello") {
            cout << "Hello, user!\n";
        }
        else if (command == "time") {
            showTime();
        }
        else if (command == "exit") {
            cout << "Goodbye!\n";
            break; // Exit the loop
        }
        else {
            cout << "Unknown command. Type 'help' for a list.\n";
        }
    }

    return 0;
}