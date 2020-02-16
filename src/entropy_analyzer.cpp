#include <fstream>
#include <iostream>

int
main(int argc, char ** argv)
{
    if (argc == 1)
        return 1;

    if (argc > 2)
        return 1;

    std::ifstream fd;
    fd.open(argv[1], std::ios::in | std::ios::binary);

    if (fd.is_open())
    {
        fd.seekg(0, fd.beg);
        char * b = new char[1];

        while (fd.read(b, 1))
        {
            std::cout << b;
        }
    } else {
        return 1;
    }

    return 0;
}

// TODO:
// entropy levels 0.0 - 