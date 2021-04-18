def imprimeTabuleiro(p1, p2, p3, p4, p5, p6, p7, p8, p9):
    """
    Recebe os valores das nove posições do tabuleiro e imprime o tabuleiro
    """
    #Complete o código da função
    print(f"{p7} | {p8} | {p9}")
    print("---------")
    print(f"{p4} | {p5} | {p6}")
    print("---------")
    print(f"{p1} | {p2} | {p3}")

def entradaValida(p1, p2, p3, p4, p5, p6, p7, p8, p9):
    """
    Recebe os valores das nove posições do tabuleiro e
    verifica se os valores são válidos, ou seja, retorna True
    se cada variável possui " " ou "x" ou "o" e False, caso contrário.
    """
    #Complete o código da função
    if p1 == " " or p1 == "x" or p1 == "o":
        return True
    if p2 == " " or p2 == "x" or p2 == "o":
        return True
    if p3 == " " or p3 == "x" or p3 == "o":
        return True
    if p4 == " " or p4 == "x" or p4 == "o":
        return True
    if p5 == " " or p5 == "x" or p5 == "o":
        return True
    if p6 == " " or p6 == "x" or p6 == "o":
        return True
    if p7 == " " or p7 == "x" or p7 == "o":
        return True
    if p8 == " " or p8 == "x" or p8 == "o":
        return True
    if p9 == " " or p9 == "x" or p9 == "o":
        return True
    return False

def jogadaValida(p1, p2, p3, p4, p5, p6, p7, p8, p9):
    """
    Recebe os valores das nove posições do tabuleiro e
    verifica se os valores formam uma jogada válida.

    Retorna True se a jogada for válida e False, caso contrário
    """
    #Complete o código da função
    x = 0
    o = 0
    v = 0
    if p1 == "x":
        x += 1
    if p1 == "o":
        o += 1
    if p1 == " ":
        v += 1
    if p2 == "x":
        x += 1
    if p2 == "o":
        o += 1
    if p2 == " ":
        v += 1
    if p3 == "x":
        x += 1
    if p3 == "o":
        o += 1
    if p3 == " ":
        v += 1
    if p4 == "x":
        x += 1
    if p4 == "o":
        o += 1
    if p4 == " ":
        v += 1
    if p5 == "x":
        x += 1
    if p5 == "o":
        o += 1
    if p5 == " ":
        v += 1
    if p6 == "x":
        x += 1
    if p6 == "o":
        o += 1
    if p6 == " ":
        v += 1
    if p7 == "x":
        x += 1
    if p7 == "o":
        o += 1
    if p7 == " ":
        v += 1
    if p8 == "x":
        x += 1
    if p8 == "o":
        o += 1
    if p8 == " ":
        v += 1
    if p9 == "x":
        x += 1
    if p9 == "o":
        o += 1
    if p9 == " ":
        v += 1
    r = verificavito(p1, p2, p3, p4, p5, p6, p7, p8, p9)
    if r == "x" or r == "o" or r == "e":
        if x+1 == o or o+1 == x:
            if v >= 1:
                if r == 'e':
                    print("O jogo nao terminou ! ! !")
                    return
                else:
                    return True
            elif v == 0:
                return True
            else:
                return False
    elif v == 0 and r == "e":
            return True
def verificavito(p1, p2, p3, p4, p5, p6, p7, p8, p9):
    """
    Recebe os valores das nove posições e retorna se 
    há vitória e quem ganhou
    """
    if p1 == "x" and p2 == "x" and p3 == "x":
        return "x"
    if p1 == "x" and p4 == "x" and p7 == "x":
        return "x"
    if p1 == "x" and p5 == "x" and p9 == "x":
        return "x"
    if p9 == "x" and p8 == "x" and p7 == "x":
        return "x"
    if p9 == "x" and p6 == "x" and p3 == "x":
        return "x"
    if p2 == "x" and p5 == "x" and p8 == "x":
        return "x"
    if p4 == "x" and p5 == "x" and p6 == "x":
        return "x"
    if p1 == "o" and p2 == "o" and p3 == "o":
        return "o"
    if p1 == "o" and p4 == "o" and p7 == "o":
        return "o"
    if p1 == "o" and p5 == "o" and p9 == "o":
        return "o"
    if p9 == "o" and p8 == "o" and p7 == "o":
        return "o"
    if p9 == "o" and p6 == "o" and p3 == "o":
        return "o"
    if p2 == "o" and p5 == "o" and p8 == "o":
        return "o"
    if p4 == "o" and p5 == "o" and p6 == "o":
        return "o"
    return "e"
def verificaJogada(p1, p2, p3, p4, p5, p6, p7, p8, p9):
    """
    Recebe os valores das nove posições do tabuleiro e
    imprime se um jogador ('x' ou 'o') venceu a jogada. 
    (Cada variável representa uma posição no tabuleiro)
    """
    #Complete o código da função
    r = verificavito(p1, p2, p3, p4, p5, p6, p7, p8, p9)
    if r == "x" or r == "o":
        print(f"O jogador '{r}' ganhou a partida")
        return
    print("Empate ! ! !")


## NÃO ALTERE A FUNÇÃO 'main' ##
def main():
    t1 = input()
    t2 = input()
    t3 = input()
    t4 = input()
    t5 = input()
    t6 = input()
    t7 = input()
    t8 = input()
    t9 = input()
    imprimeTabuleiro(t1, t2, t3, t4, t5, t6, t7, t8, t9)
    if not entradaValida(t1, t2, t3, t4, t5, t6, t7, t8, t9):
        print("\nEntrada invalida!")
    elif not jogadaValida(t1, t2, t3, t4, t5, t6, t7, t8, t9):
        print("\nJogada invalida!")
    else:
        print("\n")
        verificaJogada(t1, t2, t3, t4, t5, t6, t7, t8, t9)

main()
#~~phelipes2000