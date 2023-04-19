# Compile the code
This example is writting in C++. You can compile the code with:
```
g++ overflow.cpp
```
Then run: ```./a.out```

# Explanation
In this example, the user can overflow the buffer, thus modifying secret_password.
On the first request, enter: aaaaaaaaaaaaaaa
On the second request, enter: aaaaaaa
