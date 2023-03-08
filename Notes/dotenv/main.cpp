#include <dotenv.h>
#include <iostream>

int main()
{
    dotenv::init();

    std::cout << std::getenv("NAME") << std::endl;

    getchar();
    return 0;
}