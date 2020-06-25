- Like arrays, Linked List is a linear data structure. Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.
- no random element access
- bad cache locality, elements are not contiguous in memory
- insertions/deletions are fast at any point in the list
- references/iterators to elements stay valid when other elements are inserted/deleted (depends on the implementation, though)

### Why Linked List?

Arrays can be used to store linear data of similar types, but arrays have the following limitations.
1. **The size of the arrays is fixed:** So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage.
2. Inserting a new element in an array of elements is expensive because the room has to be created for the new elements and to create room existing elements have to be shifted.

### Drawbacks:
1) Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation. Read about it here.
2) Extra memory space for a pointer is required with each element of the list.
3) Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

