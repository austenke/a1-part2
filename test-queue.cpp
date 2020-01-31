#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "queue.h"    // Your file with the two list classes
#include <cassert>

void test1() {
    String* str = new String("foo");
    Object* obj = new Object();
    Queue* queue = new Queue();
    assert(queue->size() == 0);
    queue->push(str);
    queue->push(obj);
    assert(queue->size() == 2);
    assert(queue->front()->equals(str));
    assert(queue->back()->equals(obj));
    assert(queue->pop()->equals(str));
    assert(queue->size() == 1);
    delete queue;
}

void test2() {
    Queue* queue = new Queue();
    assert(queue->size() == 0);
    queue->push(NULL);
    assert(queue->size() == 0);
    assert(queue->front() == NULL);
    assert(queue->back() == NULL);
    assert(queue->pop() == NULL);
    delete queue;
}

void test3() {
    String* str = new String("foo");
    String* str2 = new String("foobar");
    Object* obj = new Object();
    Queue* queue = new Queue();
    queue->push(str);
    queue->push(obj);
    Queue* queue2 = new Queue();
    queue2->push(str);
    queue2->push(obj);
    assert(queue->equals(queue2));
    Queue* queue3 = new Queue();
    queue2->push(str2);
    queue2->push(obj);
    assert(!queue->equals(queue3));
    delete queue;
}

void test4() {
    String* str = new String("foo");
    String* str2 = new String("foobar");
    String* str3 = new String("foobar1");
    String* str4 = new String("foobar2");
    String* str5 = new String("foobar3");
    Object* obj = new Object();
    Queue* queue = new Queue();
    assert(queue->size() == 0);
    queue->push(str);
    queue->push(obj);
    assert(queue->size() == 2);
    assert(queue->front()->equals(str));
    assert(queue->back()->equals(obj));
    assert(queue->pop()->equals(str));
    assert(queue->size() == 1);
    queue->push(str2);
    queue->push(str3);
    queue->push(str4);
    assert(queue->size() == 4);
    assert(queue->back()->equals(str4));
    assert(queue->pop()->equals(obj));
    queue->push(str5);
    assert(queue->size() == 4);
    delete queue;
}

int main() {
    test1();
    test2();
    test3();
    test4();
}
