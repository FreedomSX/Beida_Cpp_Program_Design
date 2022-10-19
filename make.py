from fileinput import filename
import sys
import os

file_name = sys.argv[1]
current_path = sys.path[0]

print(file_name)
print(current_path)

cmd_str = "pause"
os.system(cmd_str)