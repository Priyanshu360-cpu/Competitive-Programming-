# cook your dish here
n = int(input(""))
w = 0
l = 0
d = 0
p = 0
if(n<=1000):
    for i in range(0,n,1):
        c=input("")
        d=len(c)
        if(d == 9):
            if(c[0].isnumeric() == True):
                if(c[2].isnumeric() == True):
                    if(c[4].isnumeric() == True):
                        if(c[6].isnumeric() == True):
                            if(c[8].isnumeric() == True):
                                if(int(c[0]) == 0):
                                    d=d+1
                                if(int(c[0]) == 1):
                                    w=w+1
                                if(int(c[0]) == 2):
                                    l=l+1
                                if(int(c[2]) == 0):
                                    d=d+1
                                if(int(c[2]) == 1):
                                    w=w+1
                                if(int(c[2]) == 2):
                                    l=l+1
                                if(int(c[4]) == 0):
                                    d=d+1
                                if(int(c[4]) == 1):
                                    w=w+1
                                if(int(c[4]) == 2):
                                    l=l+1
                                if(int(c[6]) == 0):
                                    d=d+1
                                if(int(c[6]) == 1):
                                    w=w+1
                                if(int(c[6]) == 2):
                                    l=l+1
                                if(int(c[8]) == 0):
                                    d=d+1
                                if(int(c[8]) == 1):
                                    w=w+1
                                if(int(c[8]) == 2):
                                    l=l+1
                                if(int(c[0])<0 or int(c[0]) > 2):
                                    p=p+1
                                if(int(c[2])<0 or int(c[2]) > 2):
                                    p=p+1
                                if(int(c[4])<0 or int(c[4]) > 2):
                                    p=p+1
                                if(int(c[6])<0 or int(c[6]) > 2):
                                    p=p+1
                                if(int(c[8])<0 or int(c[8]) > 2):
                                    p=p+1
                            else:
                                p=p+1
                        else:
                                p=p+1
                    else:
                                p=p+1
                else:
                                p=p+1
            else:
                                p=p+1
        else:
                                p=p+1
        if(p==0):
            if(w>l):
              print("INDIA")
            elif(l>w):
               print("ENGLAND")
            else:
               print("DRAW")
            
        w = 0
        l = 0
        d = 0
        p = 0 
                               