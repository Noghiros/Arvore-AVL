//Stefano Calheiros Stringhini R.A.: 2312123

#include <stdio.h>
#include "bst.h"

int main()
{
  Tree t = createTree();

  AVLinsert(t, 80);
  AVLinsert(t, 14);
  AVLinsert(t, 31);
  AVLinsert(t, 39);
  AVLinsert(t, 74);
  AVLinsert(t, 43);


  imprime(t,"Yggdrasil");
  return 0;
}
