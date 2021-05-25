// Lista de Exercícios 4 - pseudoCodigo
//Dúvidas:
    /*
    - uso do "senão se" - exercício 6: posso usar 'senao se' mesmo dentro de um 'se'
    */

//Exercícios
/*
1)  
ALGORITMO
DECLARE N1, N2, N3, M, E NUMÉRICO
ESCREVA 'Insira suas três notas: '
LEIA N1, N2, N3
M = (N1+N2+N3)/3.0
ESCREVA 'MÉDIA: ', M
SE (M >= 0 E M < 3)
ENTAO ESCREVA 'REPROVADO(A)'
SE (M >= 7 E M <= 10)
ENTAO ESCREVA 'APROVADO(A)'
SE (M >= 3 E M < 7)
ENTAO INICIO 
ESCREVA 'EXAME'
E = 12-M
ESCREVA 'DEVE TIRAR', E, 'NO EXAME PARA SER APROVADO(A)'
FIM
FIM_ALGORITMO
*/

/*
2)
ALGORITMO
DECLARE N1, N2 NUMÉRICO
ESCREVA 'Insira os dois números: '
LEIA N1, N2
SE (N1 > N2)
ENTAO ESCREVA 'MAIOR: ', N1
SE (N2 > N1)
ENTAO ESCREVA 'MAIOR: ', N2
SE (N1 = N2)
ESCREVA 'OS NUMEROS SÃO IGUAIS"
FIM_ALGORITMO
 */

/*
3)
ALGORITMO
DECLARE N1, N2, N3 NUMÉRICO
ESCREVA 'DIGITE OS 3 NÚMEROS'
LEIA N1, N2, N3
SE (N1<N2 E N1<N3)
ENTAO SE (N2<N3)
ENTAO ESCREVA N1, N2, N3
SENAO ESCREVA N1, N3, N2
SE (N2<N1 E N2<N3)
ENTAO SE (N1<N3)
ENTAO ESCREVA N2, N1, N3
SENAO ESCREVA N2, N3, N1
SE (N3<N1 E N3<N2)
ENTAO SE (N1<N2)
ENTAO ESCREVA N3, N1, N2
SENAO ESCREVA N3, N2, N1
FIM_ALGORITMO
*/

/*
4)
ALGORITMO
DECLARE N, P NUMÉRICO
ESCREVA 'DIGITE UM NÚMERO INTEIRO'
LEIA N
P = N MOD 2
SE (P=0)
ENTAO ESCREVA 'NÚMERO PAR'
SENAO ESCREVA 'NÚMERO IMPAR'
FIM_ALGORITMO
*/

/*
5)
ALGORITMO
DECLARE OP, N1, N2, S, R1, RQ NUMÉRICO
ESCREVA 'MENU DE OPÇÕES'
ESCREVA '1. Somar dois números'
ESCREVA '2. Raiz quadrada de um número'
ESCREVA 'Digite a opção desejada: '
LEIA OP

ENQUANTO (OP)
    SE 1:
    ESCREVA 'Digite dois números: '
    LEIA N1, N2
    S = N1+N2
    ESCREVA 'A soma dos dois números é: ', S
    FIM
    SE 2:
    ESCREVA 'Digite um número: '
    LEIA R1
    RQ = RAD (R1)
    ESCREVA 'A raiz quadrada do número digitado é: ', RQ
    FIM
    SENÃO:
    ESCREVA 'Essa opção não existe'    
FIM_ALGORITMO
*/

/*
5)
ALGORITMO
DECLARE OP, N1, N2, S, R NUMÉRICO
ESCREVA 'Menu de opções: '
ESCREVA '1. Somar dois números'
ESCREVA '2. Raiz quadrada de um número'
ESCREVA 'Digite a opção desejada: '
LEIA OP
SE (OP=1)
ENTAO INICIO 
ESCREVA 'Digite dois números: '
LEIA N1, N2
S = N1+N2
ESCREVA 'A soma dos dois números é: ', S
FIM
SE (OP=2)
ENTAO INICIO
ESCREVA 'Digite o número que deseja obter a raiz quadrada: '
LEIA N1
R = rad(N1)
ESCREVA 'A raiz quadrada do número é: ', R
FIM
SE (OP<>1 E OP <>2)
ENTAO ESCREVA 'Essa opção não existe'
FIM_ALGORITMO
*/

/*
6)
ALGORITMO
DECLARE SI, NS, BON, AUX NUMÉRICO
ESCREVA 'Digite seu salário atual: '
LEIA SI
SE (SI<=500.0)
ENTAO BON = SI*0.05
SE (SI>500 E SI<=1200.0)
ENTAO BON = SI*0.12
SE (SI>1200.0)
ENTAO BON = 0.0
SE (SI<=600.0)
ENTAO AUX = 150.0
SENAO AUX = 100.0
NS = SI+BON+AUX
ESCREVA 'NOVO SALÁRIO: ', NS
FIM_ALGORITMO
*/

/*
7)
ALGORITMO
DECLARE VMM, PA, PC NUMÉRICO
ESCREVA 'Digite a venda média mensal e preço atual do produto: '
LEIA VMM, PA
SE (VMM<500 OU PA<30)
ENTAO INICIO
PC = PA*0.10
ESCREVA 'Novo valor: ', PA+PC
FIM
SE ((VMM>=500.0 E VMM<1200.0) OU (PA>=30.0 E PA<80.0))
ENTAO INICIO
PC = PA*0.15
ESCREVA 'Novo valor: ', PA+PC
FIM
SE (VMM>=1200.0 E PA>=80)
ENTAO INICIO
PC = PA*0.20
ESCREVA 'Novo valor: ', PA-PC
FIM
FIM_ALGORITMO
*/

/*
7) SEGUNDA VERSÃO
ALGORITMO
DECLARE VMM, PA, AU, DIM, PF NUMÉRICO
ESCREVA 'Digite a venda média mensal do produto: '
LEIA VMM
ESCREVA 'Digite o preço atual do produto: '
LEIA PA
SE (VMM<500 OU PA<30)
ENTAO AU = PA*0.10
SE (VMM>= 500.0 OU VMM<1200.0)
ENTAO SE (PA>=20.0 E PA<80.0)
ENTAO AU = PA*0.15
PF = PA+AU
ESCREVA 'O novo preço do produto é: ', PF
SE (VMM >=1200.0 OU PA>=80)
ENTAO DIM = PA*0.20
PF = PA-DIM
ESCREVA 'O novo preço do produto é: ', PF
FIM_ALGORITMO
*/

/*
8)
ALGORITMO
DECLARE X, Y, Z NUMÉRIO
ESCREVA 'Digite X, Y e Z: '
LEIA X, Y, Z
SE (X>=Y+Z E Y>=X+Z E Z>=X+Y)
ENTAO ESCREVA 'Os valores não formam um triângulo.'
SENAO SE (X=Y E Y=Z)
ENTAO ESCREVA 'O triângulo é equilátero'
SENAO SE (X=Y E Z<>X)
ENTAO ESCREVA 'O triângulo é isósceles'
SENAO ESCREVA 'O triângulo é escaleno'
FIM_ALGORITMO
*/
