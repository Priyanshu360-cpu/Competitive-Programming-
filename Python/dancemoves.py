n=input("")
if(n.isnumeric() == True):
 if(int(n)<=1000):
    if(int(n)>=1):
       for i in range(0,int(n),1):
           c = input("")
           d = len(c)
           for j in c:
               if(j == " "):
                f = c.index(" ")
                if(f!=d-1):
                 if(f!=0):
                   g = c[0:f]
                   u = c[f+1:d]
                   if(g[0] == "-"):
                    g = c[1:f]
                    if(u[0] == "-"):
                     u = c[f+2:d]
                     if(g.isnumeric() == True):
                      if(u.isnumeric() == True):
                       if(int(g)<=1000 and int(u)<=1000):
                           if(int(u) < int(g)):
                               o = int(g)-int(u)
                               if(o%2==0):
                                   e = int((o/2)-0.5)+1
                                   print(e)
                               else:
                                    e = int((o/2)-0.5)+2
                                    print(e)
                           elif(int(u) == int(g)):
                               e = 0
                           else:
                               e = int(u)-int(g)
                               print(e)
                    else:
                     if(g.isnumeric() == True):
                      if(u.isnumeric() == True):
                       if(int(g)<=1000 and int(u)<=1000):
                                o = int(g)+int(u)
                                if(o%2==0):
                                    e = int((o/2)-0.5)+1
                                    print(e)
                                else:
                                    e = int((o/2)-0.5)+2
                                    print(e)
                   else:
                       if(u[0] == "-"):
                           u = c[f+2:d]
                           if(g.isnumeric() == True and u.isnumeric() == True):
                            if(int(g)<=1000 and int(u)<=1000):
                             if(int(u) < int(g)):
                              o = int(g)+int(u)
                              if(o%2==0):
                               e = int((o/2)-0.5)+1
                               print(e)
                              else:
                               e = int((o/2)-0.5)+2
                               print(e)
                             else:
                                 e = int(g)+int(u)
                                 print(e)
                       else:
                        if(g.isnumeric() == True and u.isnumeric() == True):
                         if(int(g)<=1000 and int(u)<=1000):
                           if(int(u) > int(g)):
                               o = int(u)-int(g)
                               if(o%2==0):
                                   e = int((o/2)-0.5)+1
                                   print(e)
                               else:
                                   e = int((o/2)-0.5)+2
                                   print(e)
                           elif(int(u) == int(g)):
                               e = 0
                               print(e)
                           else:
                               e = int(g)-int(u)
                               print(e)