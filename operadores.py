
n1 = 20
n2 = 3

res = n1 + n2 
print( f"{n1} + {n2} = {res}" )

res = n1 - n2 
print( f"{n1} - {n2} = {res}" )

res = n1 * n2 
print( f"{n1} * {n2} = {res}" )

res = n1 / n2 
print( f"{n1} / {n2} = {res}" )
# o trecho ':.4f' é pra formatar com 4 casas decimais
print( f"{n1} / {n2} = {res:.4f}" ) 

res = n1 // n2 
print( f"{n1} // {n2} = {res}" ) #Valor inteiro divisão

res = n1 % n2 
print( f"{n1} / {n2} sobra: {res}" ) 

res = n1 ** n2 
print( f"{n1} ** {n2} = {res}" ) #Potência

#n1 = n1+10
n1 += 10
print( f"n1 = {n1}" )