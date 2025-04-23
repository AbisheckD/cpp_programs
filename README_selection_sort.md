# Selection Sorting Program in C++

## Overview

This is a simple C++ program that accepts an array of integers from the user, sorts the array in ascending order using the Selection Sort technique, and displays the sorted array.

## Features

- Accepts user-defined array size and elements  
- Sorts the array in ascending order using Selection Sort  
- Displays the sorted array  

## Prerequisites

- Code::Blocks IDE with a C++ compiler installed (like MinGW for Windows)  

## How to Run in Code::Blocks

1. Open Code::Blocks.  
2. Go to `File` > `New` > `Empty File`.  
3. Copy and paste the code below into the new file.  
4. Save the file as `selection_sorting.cpp`.  
5. Go to `File` > `New` > `Project`, then select "Console Application" → C++.  
6. Replace the main file in the project with `selection_sorting.cpp`.  
7. Build and run the project using `F9` or by clicking the **Build and Run** button.

## GitHub Repository

- GitHub Repo: [https://github.com/AbisheckD/cpp_programs](https://github.com/AbisheckD/cpp_programs)  
- Source File: [selection_sorting.cpp](https://github.com/AbisheckD/cpp_programs/blob/main/selection_sorting.cpp)

## Clone This Repository

To clone this repository to your local machine, use the following command:
```bash
git clone https://github.com/AbisheckD/cpp_programs.git
```

## Code
```cpp
#include<iostream>
using namespace std;

int main()
{
    int i, j, t=0, size, min_value;
    cout<<"Enter the array size :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements :"<<endl;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size; i++)
    {
        int min_value = i;
        for(j=i+1; j<size; j++)
        {
            if(arr[min_value] > arr[j])
            {
                min_value = j;
            }
        }
        t = arr[min_value];
        arr[min_value] = arr[i];
        arr[i] = t;
    }
    cout<<"Array elements after sorting :"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
```

## Sample output
```
Enter the array size :
5
Enter the array elements :
23 12 45 6 19
Array elements after sorting :
6 12 19 23 45
```

---

## Code Explanation

This C++ program performs selection sort on an array entered by the user:

**Input Phase:**

- The user is asked to enter the size of the array.
- Then, the user inputs the array elements.

**Sorting Phase:**

- The program finds the smallest element in the unsorted part of the array.
- It swaps the smallest element with the first unsorted element.
- This process continues until the entire array is sorted.

**Output Phase:**

- The sorted array is printed to the console.

---

## License

This project is open-source and available under the MIT License.

## Contributing

Feel free to fork this repository, create pull requests, or report issues. Contributions are welcome!
