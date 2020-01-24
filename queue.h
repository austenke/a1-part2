#include "object.h"

#pragma once

class Queue {
    public:
    virtual int size(); // Return the size of the queue
    virtual bool push(Object* o); // Add an object to the queue, return operation result
    virtual Object* front(); // Return the first item in the queue or null pointer if empty
    virtual Object* back(); // Return the last item in the queue or null pointer if empty
    virtual Object* pop(); // Remove the first item in the queue and return it or null pointer if empty
    virtual bool equals(Queue* queue); // Compare to another Queue, return true if all elements are equal
};