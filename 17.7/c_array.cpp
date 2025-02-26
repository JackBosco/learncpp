#include <iostream>
//#include <string>

int main()
{
    int mat[20]; // 5 row x 4 col matrix
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
            mat[row * 5 +  col] = row * 10 + col;
    }

    // now print
    for (int row = 0; row < 5; row ++)
    {
        std::cout << "[";
        for (int col = 0; col < 4; col++)
        {
            if (row == 0)
                std::cout << " 0" << mat[row * 5 + col];
            else
                std::cout << " " << mat[row * 5 + col];
        }
        std::cout << " ]\n";
    }
}
