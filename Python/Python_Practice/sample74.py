# Thread in Python
import threading as thread

t = thread.current_thread()  # Return current running thread object
print("Current thread : ", t)
print("Name of thread : ", t.name)
print("Identifier of thread : ", t.ident)
print(t.is_alive())
t.name = 'ArjunThread'
print("Name of thread : ", t.name)
