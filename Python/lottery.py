n=int(input(""))
if(n<=1000):
    if(n>=1):
        for i in range(0,n,1):
            c = input("")
            d = len(c)
            if(d == 5):
                if(c[0] != "-"):
                    if(c[0].isnumeric() == True):
                        if(c[2].isnumeric() == True):
                            if(c[4].isnumeric() == True):
                                if(int(c[0]) >= 0):
                                    if(c[1] == " "):
                                        if(c[3] == " "):
                                            if(int(c[2]) >= 0):
                                                if(int(c[4]) >= 0):
                                                    if(int(c[0]) == 7):
                                                        print("YES")
                                                    elif(int(c[2]) == 7):
                                                        print("YES")
                                                    elif(int(c[4]) == 7):
                                                        print("YES")
                                                    else:
                                                        print("NO")
                                                else:
                                                        print("NO")
                                            else:
                                                        print("NO")
                                        else:
                                                        print("NO")
                                    else:
                                                        print("NO")
                                else:
                                                        print("NO")
                            else:
                                                        print("NO")
                        else:
                                                        print("NO")
                    else:
                                                        print("NO")
                else:
                                                        print("NO")
            else:
                                                        print("NO")
    else:
                                                        print("NO")
else:
                                                        print("NO")
                            