#include <iostream>


// some parts of the code are from professor

# Stack

isEmpty(S) //empty function:
if S.top == 0
return True //return true when top is equal to 0
else return False

Push(S,x) //push function:
if (S.top != n){
    S.top += 1; //update the top location
    S[S.top] = x; //push the value
}
else error "overflow"; //check whether the stack is full or not

Pop(S) //pop function
if Stack_Emypty(S)
error "underflow" // check whether the stack is empty or not
else S.top -= 1 // update the top location
return S[S.top+1]


#Queue
//the queue has a tail and head, when it is enqueued, it takes place at the end of the queue,
//the element dequeued, it happens at the head of the queue.
isEmpty()
if head[Q]==length[Q]//when the queue is empty
return true;
else return false;

Enqueue(Q,x)
//n is the length of the Q;
if tail[Q]==length[Q]//when the queue is full, return overflow
return tail[Q]<-1
else {
    Q[tail++] = x; //insert the element
}

Dequeue(Q)
if head[Q]==length[Q]//when the queue is empty, return underflow
return head[Q]<-1
else {
head[Q]=head[Q]+1
}

isFull()
if tail[Q]==length[Q] return true;
else return false;
