#include <iostream> 
#include <string>
#include <vector>  
using namespace std;
int main() {
    // Declare a vector of strings to hold names
    vector<string> names;

    // Add some names to the vector
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");

    // Print the names
    for (const auto& name : names) {
        cout << "Hello, " << name << "!" << endl;
    }

    return 0;
}