#include <iostream>

#include <Metal/Metal.hpp>

int main()
{
    MTL::Device* device = MTL::CreateSystemDefaultDevice();
    std::cout << device << std::endl;
    return 0;
}
