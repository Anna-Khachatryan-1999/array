#include <iostream>
#include <exception>

void f()
{
    throw std::invalid_argument("!");
}

void g () noexcept
{
    throw std::invalid_argument("!");
    //f();
}

int main()
{
    g();
}
