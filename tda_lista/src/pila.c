#include "pila.h"
#include "lista.h"

#define INDICE_TOPE 0

pila_t *pila_crear()
{
	return (pila_t *)lista_crear();
}

pila_t *pila_apilar(pila_t *pila, void *elemento)
{
	return (pila_t *)lista_insertar_en_posicion((lista_t *)pila, elemento, INDICE_TOPE);
}

void *pila_desapilar(pila_t *pila)
{
	return lista_quitar_de_posicion((lista_t *)pila, INDICE_TOPE);
}

void *pila_tope(pila_t *pila)
{
	return lista_primero((lista_t *)pila);
}

size_t pila_tamanio(pila_t *pila)
{
	return lista_tamanio((lista_t *)pila);
}

bool pila_vacia(pila_t *pila)
{
	return lista_vacia((lista_t *)pila);
}

void pila_destruir(pila_t *pila)
{
	lista_destruir((lista_t *)pila);
}
