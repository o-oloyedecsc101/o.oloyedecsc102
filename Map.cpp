#include <iostream>
#include <map>

int main() {
    // Create a map m
    std::map<int, int> m;

    // Insert elements into the map
    m[1] = 20;
    m[2] = 30;
    m[3] = 40;

    // Print all elements of the map
    for(auto it = m.begin(); it != m.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}
