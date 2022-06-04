/** PROBLEMA A SER RESOLVIDO
* Criar uma função que recebe dois números (a e b).
* Deve-se retornar quanto porcento de b é de a?
*/
const porcentagem = (a, b) =>{//criei duas constantes (a,b) e dividi "a" por "b".
    var resultado = a/b;
    console.log(a + " equivale a " + resultado*100 + "% de " + b); // modelo de como ficará impresso no terminal.
};

porcentagem(10, 100) //local onde pode mudar o valor de a, b.