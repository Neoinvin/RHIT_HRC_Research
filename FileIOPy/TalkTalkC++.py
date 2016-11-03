'''
Created on Oct 29, 2016

@author: fairfijr
'''
import os
def main():
    i = 0
    os.chdir(r'C:\Users\fairfijr\Documents\Projects\HRC\RHIT_HRC_Research-Master\FileIO\FileIO')
    intxt = open('test.txt', 'w+')
    intxt.close()
    while True:
        intxt = open('test.txt', 'r+')
        line = intxt.readline()
        if(line == '' or line == 'DONE'):
            print(line)
            intxt.seek(0)
            intxt.truncate()
            if(i == 3):
                command = 'GAME'
            else:
                command = '4,3'
            intxt.write(command)
            i += 1
        elif(line == 'WORKING'):
            print(line)
            intxt.seek(0)
            continue
        elif(line == 'OVER'):
            print(line)
            intxt.close()
            break
        intxt.close()
if __name__ == '__main__':
    main()
