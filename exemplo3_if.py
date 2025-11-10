n1 = float( input("Digite a nota 1: ") )
n2 = float( input("Digite a nota 2: ") )
n3 = float( input("Digite a nota 3: ") )

media = (n1 + n2 + n3) / 3

if media  >=7 :
    print("Aprovado com a média {}".format(media) )
elif media >= 5 : 
    print( f"Em recuperação com a média {media}")
else :
    print("Reprovado com a média", media)