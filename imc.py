print("Bem vindo ao calculo de IMC:")
massa = float(input("Digite a massa: "))
altura = float(input("Digite a altura: "))


imc = massa / ( altura ** 2 )

print(f"o IMC resulta em: {imc:.2f}" )
