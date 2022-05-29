n= int( input( "" ) )
array= [ int(x) for x in input( "" ).split( ' ' ) ]
for i in range( 0, n ):
    if( i == n-1 ):
        array[ i ]= array[ i ] ^ 0
    else:
        array[ i ]= array[ i ] ^ array[ i+1 ]
print( ' '.join( map( str, array ) ) )
