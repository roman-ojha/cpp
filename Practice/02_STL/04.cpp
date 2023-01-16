#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names{"roman", "razz", "hari", "harry", "ram", "sita"};
    names.push_back("tom");
    names.push_back("sita");

    std::vector<std::string>::iterator itb = names.begin();
    std::vector<std::string>::iterator ite = names.end();

    std::cout << "Begin: " << (*names.begin()) << std::endl;
    std::cout << "Begin: " << (*(names.end() - 1)) << std::endl;

    std::cout << "At 3: " << names.at(3) << std::endl;
    std::cout << "At 4: " << names[4] << std::endl;

    names.pop_back();

    std::cout << "Front: " << names.front() << std::endl;
    std::cout << "Back: " << names.back() << std::endl;

    names.shrink_to_fit();

    std::cout << "Size: " << names.size() << std::endl;
    std::cout << "Max Size: " << names.max_size() << std::endl;
    std::cout << "Capacity: " << names.capacity() << std::endl;

    std::string *data = names.data();
    std::cout << *(data + 1) << std::endl;

    for (std::string name : names)
    {
        std::cout << name << " ";
    }
    std::cout << std::endl;
    return 0;
}