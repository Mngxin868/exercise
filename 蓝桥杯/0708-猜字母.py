import os
import sys

x = ""
for i in range(106):
  x += "abcdefghijklmnopqrs"

while(len(x)>1):
  x = x[1::2]

print(x[0])
