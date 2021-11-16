# Test 2 Review

### 1)
> What is the output produced after the following program is executed?
```
int *ptr1, *ptr2;
ptr1= new int;
*ptr1 = 88;
ptr2=ptr1;
cout << "*ptr1 = " << * ptr1 << endl;
cout << "*ptr2 = " << * ptr2 << endl;
*ptr2 = 42;
cout << "*ptr1 = " << *ptr1 << endl;
cout << "*ptr2 = " << *ptr2 <<endl;
ptr1 = new int;
*ptr1 = 53;
cout << "*ptr1 = " << *ptr1 << endl;
cout << "*ptr2 = " << *ptr2 << endl;
```