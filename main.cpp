#include "student.h"
#include <array>
#include <iostream>
namespace hongyejin2649058
{
    void printStudentArray(const student a[], const int n)
        {
            for (int i = 0; i < n; ++i)
                std::cout << a[i];
        }
}

int main()
{
    using namespace hongyejin2649058;
   
    const int n{4};
    student a[n];
    a[0] = student{"hong ye jin", 2649058, 100, 'A'};
    a[1].setName("Hong pro");
    a[1].setId(2649058);
    a[1].setScore(89);
    a[1].setGrade('B');
    a[2].input();
    std::cin >> a[3];
    printStudentArray(a,n);
    
    std::array<student, n> arr;

    for (int i = 0; i < arr.size(); ++i)
    {
        arr.at(i) = a[i]; 
    }

    for (const auto& arri : arr)//(int i = 0; i < arr.size(); ++i)
    {
        arri.print();
    }
    return 0;
}