#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

string getResponse(const string& input) {
    string lowerInput = toLowerCase(input);

    if (lowerInput.find("hello") != string::npos || lowerInput.find("hi") != string::npos) {
        return "Hello! How can I help you today?";
    } else if (lowerInput.find("how are you") != string::npos) {
        return "I'm just a program, but thanks for asking!";
    } else if (lowerInput.find("bye") != string::npos || lowerInput.find("goodbye") != string::npos) {
        return "Goodbye! Have a great day!";
    } else {
        return "I'm not sure how to respond to that. Ask me something else.";
    }
}

int main() {
    cout << "Chatbot: Hello! Type 'bye' to exit.\n";

    while (true) {
        string userInput;
        cout << "You: ";
        getline(cin, userInput);

        if (toLowerCase(userInput) == "bye") {
            cout << "Chatbot: Goodbye!\n";
            break;
        }

        string response = getResponse(userInput);
        cout << "Chatbot: " << response << "\n";
    }

    return 0;
}
