#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

void showUsage(std::string name) {
    std::cerr << "Usage: " << name << " <option(s)> DIRECTORY\n"
        << "Options:\n"
        << "NONE" << std::endl;
}

int main(int argc, char *argv []) {

    showUsage(argv[0]);
    
    if (argc < 2) {
        showUsage(argv[0]);
        return EXIT_FAILURE;
    }
    std::vector<std::string> directory;
    std::string destination;
    for (int i = 1; i < argc; ++i) {
        std::string arg{argv[i]};
        if ((arg == "-h") || (arg == "--help")) {
            showUsage(argv[0]);
            return EXIT_SUCCESS;
        } else if ((arg == "--build-system") || (arg == "-b")) {
            
        } else {
            destination.push_back(argv[i]);
        }
    }

    return EXIT_SUCCESS;
}
