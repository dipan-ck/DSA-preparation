# Time Compexity


Its the total time taken by an algorithm to run as the length of the Input grows. One thing to consider is that Time Complexity is not equals to Time taken by an algorithm.

Time Taken by an algorithm depends on various factors like the Processor speed, System and Programming Language but Time Compexity is independent and only depends on the input.

## O(1) - Constant Time
Constant Time means that no matter how big the input is, the algorithm will always take the same amount of time to complete.

In simpler terms, the time it takes to run the algorithm does not change as the input size increases. It stays constant.

In the below code I have `n  = 10` and then checking that is `n == 10` it doesnt matter how big n is the print statement will execute once so it's constant.

```c++
int n = 10;

if(n == 10){
    cout<<"Equals 10"<<endl;
}
```

## O(n) - Linear Time  
Linear Time means that the time it takes to run the algorithm increases directly in proportion to the size of the input.

In simpler terms, as the input size increases, the runtime grows linearly. For every additional element in the input, the algorithm does a little more work.

### Example:
In the following code, we have a list of numbers, and the algorithm checks each number one by one. The time it takes to run the algorithm grows with the number of elements in the array(`n`).

```c++
int arr[] = {1, 2, 3, 4, 5}; // n = 5

for(int i = 0; i < n; i++){
    cout << arr[i] << endl;  // This runs once for each element in the list
}

```
## O(n²) - Quadratic Time  
Quadratic Time means that the time it takes to run the algorithm grows proportional to the square of the input size.

In simpler terms, as the input size increases, the runtime increases much faster because the algorithm involves nested loops that each run for a number of iterations dependent on the input size.

### Example:
In the following code, there are two nested loops. The outer loop runs `n` times, and for each iteration of the outer loop, the inner loop also runs `n` times. This results in a total of `n * n` (or `n²`) iterations.

```c++
int arr[] = {1, 2, 3, 4, 5}; // n = 5

for(int i = 0; i < n; i++){        // Outer loop
    for(int j = 0; j < n; j++){    // Inner loop
        cout << arr[i] << " " << arr[j] << endl;  // Runs n * n times
    }
}
```
## O(log n) - Logarithmic Time  
### Understanding Logarithm:
A logarithm is just a way to figure out how many times you need to multiply a number (called the base) by itself to reach another number.
### Simple Example:
Imagine you start with the number 2, and you keep doubling it (multiplying by 2 each time):

2<sup>1</sup> = 2  (1 time)  
2<sup>2</sup> = 4  (2 times)  
2<sup>3</sup> = 8  (3 times)  
2<sup>4</sup> = 16 (4 times)


Now, if I ask you:

**"How many times do you need to multiply 2 by itself to get 16?"**

The answer is 4.

This is what a logarithm does! It tells you how many times you multiply.

In math, we write: log₂ (16) = 4

### Example:


```c++
for(int i = 1 i<=n; i = i * 2){
    cout<<"print"<<endl;
}
```



