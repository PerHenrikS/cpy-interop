from ctypes import * 

fact = CDLL('fact.so')

fact.hello()
factorial = fact.fact(5)
print(factorial)