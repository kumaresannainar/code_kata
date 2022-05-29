n= int( input( "" ) )
sum= 0
while( n>0 ):
    rem= n%2
    sum+= rem
    n= int(n/2)
print(sum)
