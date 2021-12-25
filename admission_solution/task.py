import sys

# first = sys.argv[1]
# priority = sys.argv[2] 
# work = sys.argv[3]  


if sys.argv[1] == 'help':
    with open('help.txt') as my_file:  
        print(my_file.read()) 

elif sys.argv[1] == 'report':
    with open('report.txt') as my_file2:
        print(my_file2.read())

elif sys.argv[1] == 'ls':
    with open('ls.txt') as my_file3:
        print(my_file3.read())

if sys.argv[1] == 'add':
    count = 1
    with open('ls.txt', mode='a') as my_file4:
        text_2 = my_file4.write(f'{count}. "{sys.argv[3]}" [{sys.argv[2]}]\n')
        print(f'Added task: "{sys.argv[3]}" with priority {sys.argv[2]}')
    with open('report.txt', mode='a') as my_file5:
        text_3 = my_file5.write(f'"{sys.argv[3]}" [{sys.argv[2]}]\n')

# Sorry, I didn't know how to do any further.