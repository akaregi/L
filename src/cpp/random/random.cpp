#include <iostream>
#include <random>

int main(int argc, char const *argv[])
{
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());

    for (size_t i = 0; i < 10; i++)
    {
        std::uint32_t result = engine();
        std::cout << result << std::endl;
    }

    return 0;
}
