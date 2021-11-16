# Linked Lists

### Each node is defined as a struct
```
struct node {
    data values
    node * link; // link to next nodes
}
```

### Example
```
// Each node must point to the next node
struct spacestation {
    string valuable;
    int qty;
    spacetstation * link;
}
```

### Desc
> Our first pointer points to the first node
```
firstPtr->valuable="gold";
firstPtr->qty=6; 
```

> If on last node
```
firstPtr->link=NULL  // Assign link to NULL
```

> Create a second Spacestation
```
Spacestation * builder;
builder = new Spacestation;
builder->valuable="quartz";
builder->qty=4;
builder->link=NULL
```

> Add it to the end of the list
```
firstPtr->link=builder;
```

> Build a third Spacestation
```
Spacestation * builder;
builder = new Spacestation;
```

> Populate it and close portal
```
builder->valuable="aquamarine";
builder->qty=9;
builder->link=NULL;
```

> Add to the end of the list
firstPtr->link->link=builder;

### Move spacestation to start at first node

> The only way to access the list is through the firt ptr.
```
Spacestation * walker;
int noNodes=0;
walker=firstPtr
noNodes++ // Count node
```

> Walk to next node
```
walker=walker->link;
noNodes++
walker=walker->link;
noNodes++
walker=walker->link; // if link==NULL, you know you reached last node
```

### Examples
```
SpaceStation * walker=firstPtr;
int noNodes=0;
noNodes++;
walker=walker->link;

noNodes++;
walker=walker->link;

noNodes++;
walker=walker->link;

cout << “No Nodes=“ << noNodes << endl; // noNodes = 3
```

```
SpaceStation * walker=firstPtr;

cout << walker->animal << walker->qty;
walker=walker->link;

cout << walker->animal << walker->qty;
walker=walker->link;

cout << walker->animal << walker->qty;
walker=walker->link;
```

### Removing a node
> Go up the list, find the node we want to delete, and remove it
> Then re-link the past node to the next one (if not last node)
> Use a stalker to always hold last found node
```
Spacestation * stalker;
walker=firstPtr;
stalker=NULL;
walker=walker->link;
walker->valuable is 'aquamarine' // found node to delete
stalker->link=walker->link;
delete walker;
```

## Summary
```
SpaceStation *walker=firstPtr;

while (walker!=NULL)		
{
   
  

 walker=walker->link ; //move to next node

}
```