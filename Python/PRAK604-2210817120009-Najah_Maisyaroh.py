kata1=input()
kata2=input()
c=0
d=0
if(len(kata1)!=len(kata2)):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(len(kata1)):
        if(kata1[i]==kata2[i]):
            print("*", end="")
            c+=1
        else:
            print("#", end="")
            d+=1
    print()
    print("* = ", c)
    print("# = ", d)
    if(c>=d):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")