n = int(input("Digite um número: "))

primeiro = 0
segundo = 1
proximo = 0
pertence = False

while proximo < n:
    proximo = primeiro + segundo
    primeiro = segundo
    segundo = proximo
    if proximo == n:
        pertence = True
        break

if pertence:
    print(f"O número {n} pertence à sequência de Fibonacci.")
else:
    print(f"O número {n} não pertence à sequência de Fibonacci.")