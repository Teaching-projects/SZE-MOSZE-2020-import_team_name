import os
import subprocess as sb
import sys

exe = './' + sys.argv[1]
output = sys.argv[2]

WarriorMatches = [['ritchie.json', 'page.json'],
             ['ritchie.json', 'gates.json'],
             ['page.json', 'ritchie.json'],
             ['page.json', 'gates.json'],
             ['gates.json', 'ritchie.json'],
             ['gates.json', 'page.json']]


with open(output, 'w') as output_f:
    for pair in WarriorMatches:
        args = [exe, pair[0], pair[1]]
        sb.call(args,stdout=output_f, stderr=output_f)