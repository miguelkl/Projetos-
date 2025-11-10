import random

numero = random.randint(1 , 100)
palpite = int(input("Digite seu palpite: "))

while numero != palpite :
    if numero > palpite :
        print("Número secreto é maior")
    else :
        print("Número secreto é menor")
    palpite = int(input("Tente de novo: "))

print ("Parabéns! você acertou")
5