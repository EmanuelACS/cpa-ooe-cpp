# Test 2 Review

## 1)

> A) What is the output produced after the following program is executed?
```
int *ptr1, *ptr2;

// allocates memory for new integer on the heap
ptr1= new int; 
// *pointer = something, means we're accessing the value not address
*ptr1 = 88; 
// Since no * then we are reassigning the address of ptr1 to ptr2
ptr2=ptr1; 
// Displays the values of ptr1 and ptr2
cout << "*ptr1 = " << * ptr1 << endl; // 88
cout << "*ptr2 = " << * ptr2 << endl; // 88

// Value that ptr2 points to becomes 42
*ptr2 = 42; 
cout << "*ptr1 = " << *ptr1 << endl; // 42
cout << "*ptr2 = " << *ptr2 <<endl; // 42

// Assigning new memory on the heap for ptr1
ptr1 = new int;
// Giving it a value of 53 (had no value before this)
*ptr1 = 53;
cout << "*ptr1 = " << *ptr1 << endl; // 53
cout << "*ptr2 = " << *ptr2 << endl; // 42
```
> Answer:
```
*ptr1 = 88 
*ptr2 = 88
*ptr1 = 42 
*ptr2 = 42
*ptr1 = 53 
*ptr2 = 42
```

 
> B) Write the statement that will remove all memory that was allocated dynamically above.

```
// Since they are pointing at diff memories now, delete both
delete ptr1
delete ptr2
```

## 2)
>  A) Supply the missing code for the following program:
```
// If you have a virtual function inside a class you must
// make the destructor virtual too

class Pet
{
    public:
        Pet(string);
        virtual void show() const;  <= postpone binding
    private:
        string name;
};
```

```
Pet::Pet(string newName)
{
    name=newName;
}
void Pet::show() const
{
    cout << " Name: "<<name;
}
```

```
class Cat : public Pet <= Cat class inherits the public member of Pet class
{
    public:
        Cat(string /*name*/, string /*breed*/, int /*age*/, char int /*sex*/); <= receives values for all data
        void show() const;
        ~Cat(); <= add a destructor
    private:
        string *breed;
        int age;
        char sex;
};
```

```
// Must call pet's non-default constructor, otherwise it will by default call the default const.
Cat::Cat(string newName, string newBreed, int newAge, char newSex) : Pet(newName) <= add nec. code
{
    // call string() constructor to pass it a value (vs new string;)
    breed = new string(newBreed); <= create memory for breed on the heap
    assert(breed) <= ensure memory was allocated
    // Use condensed if
    age=(newAge >= 0 && newAge <= 150) ? newAge : 0; <= validate to ensure 0-150
    sex=(newSex == 'F' || newSex == 'M') ? newSex : 'F'; <= validate to ensure F or M
}
```

```
void Cat::show() const
{
    cout << " Breed: " << *breed << " Age: " << age << " Sex: "<< sex;
    Pet::show(); <= display the name of the pet
}

Cat::~Cat() { delete breed; }; <= write the destructor

// Child always has to know about the parent
void showPet(const Pet* myPet) <= client function that receives an Pet or Cat object
{
    myPet->show(); <= call the member show function
} 
```

> a) Declare an object of type Cat on the stack called myCat, passing it hard coded values.
```
Cat myCat("catName", "Siamese", 5, 'F');
```

> b) Declare an object dynamically of type Cat, passing it hard coded values. Declare any variables that you require. Ensure memory was allocated.
```
Cat *myCat2 = new Cat("catName2", "Tabby", 2, 'F');
```

> c) Print the contents of the object created in c) above, by calling the member function show().
```
myCat2->show();
```

> d) Call the showPet function to print the contents of myCat and myCat2.
```
showPet(myCat2);
showPet(&myCat);
```

> e) The function showPet() is referred to as a [] function
```
function
```

> f) The member function show() uses [dynamic] binding

> g) The object created in b) above creates memory on the [heap]

> h) What is the difference between static and dynamic binding?
```
Static: Determined at compile time
Dynamic: Determined at run time
```
