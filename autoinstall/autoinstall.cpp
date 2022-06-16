#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>

void showUsage(std::string name) {
    std::cerr << "Usage: " << name << " <option(s)> DIRECTORY\n"
        << "Options:\n"
        << "NONE" << std::endl;
}

int main(int argc, char *argv []) {

    showUsage(argv[0]);

    return EXIT_FAILURE;
}
