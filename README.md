# Bubble Sorting Program in C++

## Overview

This is a simple C++ program that accepts an array of integers from the user, sorts the array in ascending order using the Bubble Sort technique, and displays the sorted array.

## Features

- Accepts user-defined array size and elements  
- Sorts the array in ascending order  
- Displays the sorted array  

## Prerequisites

- Code::Blocks IDE with a C++ compiler installed (like MinGW for Windows)  

## How to Run in Code::Blocks

1. Open Code::Blocks.  
2. Go to `File` > `New` > `Empty File`.  
3. Copy and paste the code below into the new file.  
4. Save the file as `bubble_sorting.cpp`.  
5. Go to `File` > `New` > `Project`, then select "Console Application" → C++.  
6. Replace the main file in the project with `bubble_sorting.cpp`.  
7. Build and run the project using `F9` or by clicking the **Build and Run** button.

## GitHub Repository

- GitHub Repo: [https://github.com/AbisheckD/cpp_programs](https://github.com/AbisheckD/cpp_programs)  
- Source File: [bubble_sorting.cpp](https://github.com/AbisheckD/cpp_programs/blob/main/bubble_sorting.cpp)

## Clone This Repository

To clone this repository to your local machine, use the following command:
- git clone https://github.com/AbisheckD/cpp_programs.git

## Code
```

#include<iostream>
using namespace std;

int main()
{
    int i,j,size,t=0;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements :"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    cout<<"Array elements after sorting : "<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
```
## Sample output
```
Enter the size of array:
5
Enter the array elements:
12 5 9 1 6
Array elements after sorting :
1 5 6 9 12
```
---
## Code Explanation
This C++ program performs bubble sort on an array entered by the user:

*Input Phase:*

- The user is asked to enter the size of the array.

- Then, the user inputs the array elements.

*Sorting Phase:*

- A nested for loop is used to compare each element with the ones after it.

- If an element is greater than the next one, they are swapped.

- This continues until the entire array is sorted in ascending order.

*Output Phase:*

- The sorted array is printed to the console.

---

## License
This project is open-source and available under the MIT License.

## Contributing
Feel free to fork this repository, create pull requests, or report issues. Contributions are welcome!
