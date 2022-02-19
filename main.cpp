#include <iostream>

int main(int argc, const char*argv[])
{
    try
    {

        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}