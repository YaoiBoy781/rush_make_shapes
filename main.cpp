#include <iostream>

int rush(int width, int height)
{
    if(width > 0)
    {
        std::cout << "/";

        if(width == 2)
        {
            std::cout << "\\";
        }
    }

    if (width > 2)
    {
        for (int x = 0; x < width - 2; x++)
        {
            std::cout << "*";
        }
    }

    if (width > 2)
    {
        std::cout << "\\";
    }
    std::cout << std::endl;




    for(int y = 0; y < height - 2; y++)
    {
        std::cout << "*";
        for (int x = 0; x < width - 2; x++)
        {
            std::cout << " ";
        }

        if(width >= 2)
        {
            std::cout << "*";
        }

        std::cout << std::endl;
    }



    if(height > 1)
    {
        std::cout << "\\";
        for (int x = 0; x < width - 2; x++)
        {
            std::cout << "*";
        }
        if(width >= 2)
        {
            std::cout << "/";
        }
    }
}

int main()
{
    rush(3, 10);
    
}
