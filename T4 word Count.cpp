#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;

// Function to count words in a file
int countWords(const string& filename) {
    ifstream file(filename); // Open the file
    if (!file.is_open()) {
        cerr << "Error: Unable to open the file." << endl;
        exit(0);
    }

    string line;
    int wordCount = 0;

    // Read line by line from the file
    while (getline(file, line)) {
        istringstream iss(line);
        string word;

        // Count words in the current line
        while (iss >> word) {
            wordCount++;
        }
    }

    file.close(); // Close the file
    return wordCount;
}

int main() {
    string filename;

    cout << "Enter the file name: ";
    cin >> filename;

    int totalWords = countWords(filename);

    cout << "Total number of words in the file: " << totalWords << endl;

    return 0;
}
