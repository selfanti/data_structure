#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// Function to split a string using a delimiter
std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);

    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    std::string input = "part1(,part,2,part3),part4";
    char delimiter = ',';

    // Split the string
    std::vector<std::string> parts = split(input, delimiter);

    // Print the results
    for (const auto &part : parts) {
        std::cout << part << std::endl;
    }

    return 0;
}