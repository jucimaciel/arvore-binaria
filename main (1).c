#include <stdio.h>
#include <stdlib.h>

typedef struct no{
int conteudo;
struct no *esquerdo, *direito;
} No;
typedef struct {
No *raiz;
}Arvo;
     
  void mostrar(No *raiz){
    if(raiz!=NULL){
      printf("%d" , raiz->conteudo);
      mostrar(raiz->esquerdo);
      mostrar(raiz ->direito);
      return;
    }
  }
    No *inserir(int valor){
  
    No *node=(No*) malloc(sizeof (No));
    node ->conteudo=valor;
    node->esquerdo=NULL;
    node->direito=NULL;
    return node;

   }
  
int main() {
No *raiz = inserir(17);
	No *subarv11 = inserir(11);
	No *subarv7 = inserir(7);
	No *subarv21 = inserir(21);
	No *subarv12 = inserir(12);
	No *subarv22 = inserir(22);
	No *subarv31 = inserir(31);
	
	raiz->esquerdo = subarv11;
	subarv11->esquerdo = subarv7;
	subarv21->esquerdo = subarv12;
	
	raiz->direito = subarv21;
	subarv7->direito = subarv22;
	subarv22->direito = subarv31;

	mostrar(raiz);
	
	return 0;

}