#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf

// int main()
// {
//     int x = 1024;
//     double pi= 3.141592;


//     // console out, console in 
//     std::cout << "I love this lecture!\n"; // << std::endl;
//     std::cout << "x is "  << x << " pi is " << pi << std::endl;

//     std::cout << "abc" << "\t" << "def" << std::endl;
//     std::cout << "abc" << "\t" << "cdef" << std::endl;
 
//     return 0;
// }

// int main()
// {   
//     using namespace std;

//     int x = 1024;
//     double pi= 3.141592;


//     // console out, console in 
//     cout << "I love this lecture!\n"; // << std::endl;
//     cout << "x is "  << x << " pi is " << pi << endl;

//     cout << "abc" << "\t" << "def" << endl;
//     cout << "abc" << "\t" << "cdef" << endl;

//     //audio
//     cout << "\a";

//     return 0;
// }

int main()
{
    using namespace std;

    int x = 1;

    cout << "Before your input, x was " << x << endl;
    
    cin >> x;

    // int 2147483647 
    cout << "Your input is " << x << endl;

    return 0;
} 