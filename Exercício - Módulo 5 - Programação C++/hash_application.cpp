#include <iostream>
#include "hash.h"
#include <algorithm>
#include <vector>

// Usa o namespace std para facilitar a chamada de funções padrão
using namespace std;

// Função para verificar se um número é primo
bool is_prime(int n) {
    if (n <= 1) { // Números menores ou iguais a 1 não são primos
        return false;
    }

    // Verifica se há algum número de 2 até n-1 que seja um divisor de n
    for (int i = 2; i < n; i++) {
        if (n % i == 0) { // Se houver, n não é primo
            return false;
        }
    }
    return true; // Se não houver divisor, n é primo
}

// Método para testar a remoção de um item da tabela hash
void test_1() {
  // Cria um objeto da classe Hash com tamanho 13
  Hash clienteHash(13);
  // Vetor de IMEIs de clientes
  int   IMEI[9] = {
    12704, 31300, 1234, 33345, 33345,
    49001, 31300 ,52202, 65606,
  };
  // Vetor de emails de clientes
  string email[9] = {
    "Pedro@gmail.com", "Raul@gmail.com", "Paulo@gmai.com",
    "Carlos@gmail.com", "Lucas@gmail.com", "Maria@gmail.com",
    "Samanta@gmail.com", "dayllan@gmail.com", "Mariana@gmail"}; 
	    
  // Insere cada cliente na tabela hash
  for (int i = 0; i < 9; i++) {
    Cliente cliente = Cliente(IMEI[i], email[i]);
    clienteHash.insertItem(cliente);
  }
  // Imprime a tabela hash
  clienteHash.print();  
  // Deleta um item, que é o Pedro@gmail.com
  Cliente cliente(12704, "");
  bool found = false;
  clienteHash.retrieveItem(cliente, found);
  if (found) {
    clienteHash.deleteItem(cliente);
    cout << "----------------------------------" << endl;
    cout << "Item deletado: " << cliente.getEmail() << endl;
    cout << "----------------------------------" << endl;
  } else {
    cout << "----------------------------------" << endl;
    cout << "Item não encontrado: " << cliente.getEmail() << endl;
    cout << "----------------------------------" << endl;
  }

  // Imprime a tabela hash após a deleção
  clienteHash.print();
};

// Código para o caso de teste de inserção de itens
void test_2() {
  // Criando uma tabela hash com tamanho 13
  Hash clienteHash(13);
  
  // Vetor de IMEI's
  int   IMEI[9]   = {
    12704, 31300, 1234, 33345, 49001,
    52202, 65606, 77907, 81604,
  };
  
  // Vetor de emails
  string email[9] = {
    "Pedro@gmail.com", "Raul@gmail.com", "Paulo@gmail.com",
    "Carlos@gmail.com", "Lucas@gmail.com", "Maria@gmail.com",
    "Samanta@gmail.com", "Dayllan@gmail.com", "Mariana@gmail.com",
  }; 
  
  // Loop para inserir os clientes na tabela hash
  for (int i = 0; i < 9; i++) {
    // Criando um objeto cliente
    Cliente cliente = Cliente(IMEI[i], email[i]);
    
    // Verifica se o item já existe na tabela hash
    bool found = false;
    clienteHash.retrieveItem(cliente, found);
    
    // Se o item não foi encontrado, então insere na tabela
    if (!found) {
      clienteHash.insertItem(cliente);
    } else {
      // Senão, imprime uma mensagem informando que o item é duplicado
      cout << "----------------------------------" << endl;
      cout << "Item duplicado: " << cliente.getEmail() << endl;
      cout << "----------------------------------" << endl;
    }
  }
  // Imprime a tabela hash após a inserção de todos os itens
  clienteHash.print();  
  cout << "Inserido " << endl;
};

// Código para o caso de de busca de elemento aqui
void test_3() {
  // Declaração da variável clienteHash do tipo Hash com tamanho 13
  Hash clienteHash(13);

  // Declaração dos arrays IMEI e email
  int   IMEI[9] = {
    12704, 31300, 1234, 33345, 33345,
    49001, 31300, 52202, 65606
  };
  string email[9] = {
    "Pedro@gmail.com", "Raul@gmail.com", "Paulo@gmai.com",
    "Carlos@gmail.com", "Lucas@gmail.com", "Maria@gmail.com",
    "Samanta@gmail.com", "dayllan@gmail.com", "Mariana@gmail"
  }; 
  
  // Loop para inserir os itens no Hash
  for (int i = 0; i < 9; i++) {
    Cliente cliente = Cliente(IMEI[i], email[i]);
    clienteHash.insertItem(cliente);
  }
  
  // Impressão dos elementos no Hash
  clienteHash.print(); 

  // Variável target para o email a ser buscado
  string target = "dayllan@gmail.com";

  // Verifica se o elemento existe no array email
  int n = sizeof(email) / sizeof(*email);
  bool exists = std::find(email, email + n, target) != email + n;
  
  // Saída de mensagem de acordo com o resultado da busca
  if (exists) {
      std::cout << "Elemento encontrado" << endl;
  } else {
      std::cout << "Elemento não encontrado";
  }
};

void test_4(){
  // Código para o caso de teste que diz se a lista possui mais de 10 elementos

  // Instanciando uma tabela Hash com tamanho 13
  Hash clienteHash(13);

  // Vetores para armazenar IMEIs e e-mails
  int   IMEI[9] = {
    12704, 31300, 1234, 33345, 33345,
    49001, 31300 ,52202, 65606,
  };
  string email[9] = {
    "Pedro@gmail.com", "Raul@gmail.com", "Paulo@gmai.com",
    "Carlos@gmail.com", "Lucas@gmail.com", "Maria@gmail.com",
    "Samanta@gmail.com", "dayllan@gmail.com", "Mariana@gmail"}; 
	    
  // Inserindo os clientes na tabela Hash
  for (int i = 0; i < 9; i++) {
    Cliente cliente = Cliente(IMEI[i], email[i]);
    clienteHash.insertItem(cliente);
  }

  // Imprimindo a tabela Hash
  clienteHash.print(); 

  // Verificando se a tabela Hash possui mais de 10 elementos
  if (9 < 10) {
      cout << "A tabela possui menos de 10 elementos." << endl;
  } else if (9 > 10) {
      cout << "A tabela possui mais de 10 elementos." << endl;
  } else {
      cout << "A tabela possui exatamente 10 elementos." << endl;
  }
};

void test_5(){
  // Inicialização da tabela hash de clientes com tamanho 13
  Hash clienteHash(13);

  // Vetores com informações sobre IMEI e email dos clientes
  int   IMEI[9] = {
    12704, 31300, 1234, 33345, 33345,
    49001, 31300 ,52202, 65606,
  };
  string email[9] = {
    "Pedro@gmail.com", "Raul@gmail.com", "Paulo@gmai.com",
    "Carlos@gmail.com", "Lucas@gmail.com", "Maria@gmail.com",
    "Samanta@gmail.com", "dayllan@gmail.com", "Mariana@gmail"}; 
  
  // Adicionando os clientes à tabela hash
  for (int i = 0; i < 9; i++) {
    Cliente cliente = Cliente(IMEI[i], email[i]);
    clienteHash.insertItem(cliente);
  }
  
  // Variável count para armazenar o número de elementos na lista IMEI
  int count = 0;

  // Loop para percorrer o vetor IMEI e verificar se cada elemento é primo
  for (int num : IMEI) {
    count++;
    if (is_prime(num)) {
        std::cout << num << " é primo" << std::endl;
    } else {
        std::cout << num << " não é primo" << std::endl;
    }
  }

  // Exibir o número de elementos na lista IMEI
  std::cout << "A lista tem " << count << " elementos" << std::endl;
};


int main(){

  // test_1();
  // cout << "" <<  endl;
  
  // test_2();
  // cout << "" <<  endl;

  // test_3();
  // cout << "" << endl;
  
  // test_4();
  // cout << "" << endl;

  test_5();
  cout << "" << endl;
  
};