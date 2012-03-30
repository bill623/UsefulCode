#ifndef PRINT_LONG_H
#define PRINT_LONG_H

#include <iostream>

#define my_max(a,b) \
       ({ typeof (a) _a = a; \
           typeof (b) _b = b; \
         _a > _b ? _a : _b; })

#pragma pack(push, 1)
struct A
{
    int a;
    short b;
	char c;
};
#pragma pack(pop)

template<typename T>
void print(const T& type)
{
    size_t size = sizeof(T) * 8;
    char bit[] = "01";
    for(size_t i = 0; i < size; ++i)
    {
        if(i && !(i % 8))
        {
            std::cout << " ";
        }

        bool have = type & ((long)1 << (size - 1 - i));
        std::cout << have ? bit[1] : bit[0];
    }
    std::cout << std::endl;
}

#endif // PRINT_LONG_H
