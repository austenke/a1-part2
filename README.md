This directory contains an API design for a Queue object. Queues can hold anything of type Object and have a series
of methods for accessing this data. The method signatures for these objects are:

Object
- size_t hash(): Return the hashcode of the object
- bool equals(Object o): Compare to another object, returns true if equal

Queue
- int size(): Return the size of the queue
- void push(Object): Add an object to the queue, return operation result
- Object front(): Return the first item in the queue or null pointer if empty
- Object back(): Return the last item in the queue or null pointer if empty
- Object pop(): Remove the first item in the queue and return it or null pointer if empty
- bool equals(Queue): Compare to another Queue, return true if all elements are equal

The String class is an example of an Object. The implementation of String exists solely as a demonstration.


