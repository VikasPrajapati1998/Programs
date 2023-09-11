class QueueError(Exception):
    def __inti__(self, msg):
        self.errorMessage = msg

    def get_message(self):
        return self.errorMessage


class Queue:
    def __init__(self, sz=0):
        self.size = sz
        self.arr = []

    def push(self, item):
        if len(self.arr) >= self.size:
            print(self.arr)
            raise QueueError("Queue is full.")
        else:
            self.arr.append(item)

    def pop(self):
        if len(self.arr) <= 0:
            raise QueueError("Queue is empty.")
        item = self.arr.pop(0)
        return item

    def display(self):
        print(self.arr)

    def __del__(self):
        del self.arr
        del self.size


q = 0


def main():
    global q
    message = '''
    You have Queue Choice Like : 
    1. Create a Queue : 
    2. Push item in Queue, item : 
    3. Pop item from Queue, item :
    4. Display the Queue
    5. Exit
    '''
    try:
        while True:
            print(message)
            choice = int(input("Enter Your Choice : "))
            match choice:
                case 1:
                    size = int(input("Enter the size of Queue : "))
                    assert size > 0, 'Check size is Looking zero of less than 0.'
                    q = Queue(size)
                case 2:
                    item = int(input('Enter the item : '))
                    q.push(item)
                case 3:
                    item = q.pop()
                    print(item)
                case 4:
                    q.display()
                case 5:
                    break
                case _:
                    print("Invalid Choice.")

    except QueueError as qe:
        print(qe)

    except AssertionError as ae:
        print(ae)

    except Exception as e:
        print(e)

    else:
        print("Program Run Successful.")


if __name__ == '__main__':
    main()
