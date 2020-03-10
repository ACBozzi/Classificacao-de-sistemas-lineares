#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include "utils.h"
#include "SistemasLineares.h"

//-------------------------------------------------------------------
//
//  Não alterar esta parte do código.
//
/// Alocaçao de memória
SistLinear_t* alocaSistLinear (unsigned int n)
{
	SistLinear_t *SL = (SistLinear_t *) malloc(sizeof(SistLinear_t));
	if ( SL ) 
	{
		SL->A = (real_t *) malloc(n * n * sizeof(real_t));
		SL->b = (real_t *) malloc(n * sizeof(real_t));
		SL->x = (real_t *) malloc(n * sizeof(real_t));
		if (!(SL->A) || !(SL->b) || !(SL->x))
			liberaSistLinear(SL);
	}

	return (SL);
}

// Liberacao de memória
void liberaSistLinear (SistLinear_t *SL)
{
	free(SL->A);
	free(SL->b);
	free(SL->x);
	free(SL);
}
//-------------------------------------------------------------------


// Calcula a normaL2 do resíduo
double normaL2Residuo(SistLinear_t *SL)
{

}


// Método da Eliminação de Gauss-Jordan
int eliminacaoGauss (SistLinear_t *SL, double *normaL2)
{

	return (0);
}

// Método de Gauss-Jacobi
int  gaussJacobi (SistLinear_t *SL, double eps, double *normaL2, unsigned int *iter)
{

	return (0);
}

// Método de Gauss-Seidel
int gaussSeidel (SistLinear_t *SL, double eps, double *normaL2, unsigned int *iter)
{

	return (0);
}


