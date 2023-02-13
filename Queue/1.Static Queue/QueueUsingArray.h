
template <typename T>
class QueueUsingArray
{
  T *data;
  int size;
  int firstindex;
  int nextindex;
  int capacity;
  public:
  QueueUsingArray(int s)
  {
    data = new T[s];
    capacity = s;
    nextindex = 0;
    firstindex = -1;
    size = 0;
  }

  //size of the queue
  int getSize()
  {
    return size;
  }

  //if queue is empty or not
  bool isEmpty()
  {
    return size == 0;
  }

  //insert element in the queue

  void enqueue(T element)
  {
    if(size == capacity)
    {
      cout<<"Queue is full!"<<endl;
      return;
    }
    data[nextindex] = element;
    nextindex = (nextindex + 1) % capacity;
    if(firstindex == -1)
    {
      firstindex = 0;
    }
    size++;
  }

  //accessing the front element of the queue
  T front()
  {
    if(isEmpty())
    {
      cout<<"Queue is Empty !";
      return 0;
    }
    return data[firstindex];
  }


  //delete an element from the queue
  T dequeue()
  {
    if(isEmpty())
    {
      cout<<"Queue is Empty !";
      return 0;
    }
    T temp = data[firstindex];
    firstindex = (firstindex + 1) % capacity;
    size--;
    if(size == 0)
    {
      nextindex = 0;
      firstindex = -1;
    }
    return temp;
  }
};