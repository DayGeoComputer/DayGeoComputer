/**PARA EXECUTAR O CÓDIGO, UTILIZE O VISUAL STUDIO CODE,
 * E POSTERIORMENTE ABRA O TERMINAL E INDIQUE EXATAMENTE O PERCURSO (ENDEREÇO)
 * DA PASTA ONDE ESTÁ O ARQUIVO Contador_de_letra.js, EM SEGUIDA, ESCREVA NO TERMINAL EXATAMENTE
 * O NOME DO ARQUIVO (Contador_de_letra.js)*/

const stringCounter = (letra, frase) => { //StringCouter, ou seja, vamos contar as letras de acordo com a frase escrita.
    var cont = 0; //Coloquei uma variável cont para servir como contador, começando na posição 0.

    for(var i in frase){ //iniciei o for e a a variavel i para buscar iniciar na posição 0, mas seguir buscando o que eu colocar na letra.
        if(letra == frase[i]){ // if (se) letra for igual ao [i] da frase somar +1.
            cont++;
/**O == é usado para comparação entre duas variáveis,
 * independentemente do tipo de dados da variável.
 * Já o ++ é o equivalente a x=x+1.*/
        }
    }
    console.log(cont); /** No final do for, é necessário
    colocar o console.log para contar e terminar o for!*/
};

stringCounter("l", "Dayllan é graduando do curso de Ciência da Computação no Instituto de Tecnologia e Liderança,localizado em São Paulo");
 //Aqui é a execução e onde pode-se modificar a letra e a frase.