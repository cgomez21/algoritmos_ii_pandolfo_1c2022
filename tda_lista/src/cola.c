#include "cola.h"
#include "lista.h"

#define INDICE_TOPE 0

cola_t *cola_crear()
{
	return (cola_t *)lista_crear();
}

cola_t *cola_encolar(cola_t *cola, void *elemento)
{
	return lista_insertar((lista_t *)cola, elemento);
}

void *cola_desencolar(cola_t *cola)
{
	return lista_quitar_de_posicion((lista_t *)cola, INDICE_TOPE);
}

void *cola_frente(cola_t *cola)
{
	return lista_primero((lista_t *)cola);
}

size_t cola_tamanio(cola_t *cola)
{
	return lista_tamanio((lista_t *)cola);
}

bool cola_vacia(cola_t *cola)
{
	return lista_vacia((lista_t *)cola);
}

void cola_destruir(cola_t *cola)
{
	lista_destruir((lista_t *)cola);
}
