/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119cc40; name: FUN_0119cc40
 */


void FUN_0119cc40(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = param_1 + 0x10;
  lVar2 = *param_1;
  lVar5 = *param_2;
  if ((lVar2 == 0) || (plVar1 = param_1, lVar2 != lVar5)) {
    plVar1 = param_1 + 2;
    if ((*plVar1 == 0) || (*plVar1 != lVar5)) {
      plVar1 = param_1 + 4;
      if ((*plVar1 == 0) || (*plVar1 != lVar5)) {
        plVar1 = param_1 + 6;
        if ((*plVar1 == 0) || (*plVar1 != lVar5)) {
          plVar1 = param_1 + 8;
          if ((*plVar1 == 0) || (*plVar1 != lVar5)) {
            plVar1 = param_1 + 10;
            if ((*plVar1 == 0) || (*plVar1 != lVar5)) {
              plVar1 = param_1 + 0xc;
              if (((*plVar1 == 0) || (*plVar1 != lVar5)) &&
                 (lVar6 = param_1[0xe], plVar1 = param_1 + 0xe, lVar6 != lVar5 || lVar6 == 0)) {
                plVar1 = plVar3;
              }
            }
          }
        }
      }
    }
  }
  if ((plVar1 != plVar3) && (plVar1 != (long *)0x0)) {
    cVar4 = (char)param_2[1];
    if ((((((lVar2 != 0) && (plVar3 = param_1, (char)param_1[1] == cVar4)) ||
          ((plVar3 = param_1 + 2, *plVar3 != 0 && ((char)param_1[3] == cVar4)))) ||
         ((plVar3 = param_1 + 4, *plVar3 != 0 && ((char)param_1[5] == cVar4)))) ||
        ((((plVar3 = param_1 + 6, *plVar3 != 0 && ((char)param_1[7] == cVar4)) ||
          ((plVar3 = param_1 + 8, *plVar3 != 0 && ((char)param_1[9] == cVar4)))) ||
         (((plVar3 = param_1 + 10, *plVar3 != 0 && ((char)param_1[0xb] == cVar4)) ||
          ((plVar3 = param_1 + 0xc, *plVar3 != 0 && ((char)param_1[0xd] == cVar4)))))))) ||
       ((plVar3 = param_1 + 0xe, *plVar3 != 0 && ((char)param_1[0xf] == cVar4)))) {
      *(char *)(plVar3 + 1) = (char)plVar1[1];
      cVar4 = (char)param_2[1];
    }
    *(char *)(plVar1 + 1) = cVar4;
    return;
  }
  plVar1 = param_1;
  if (((((lVar2 != 0) && (plVar1 = param_1 + 2, *plVar1 != 0)) &&
       (plVar1 = param_1 + 4, *plVar1 != 0)) &&
      ((plVar1 = param_1 + 6, *plVar1 != 0 && (plVar1 = param_1 + 8, *plVar1 != 0)))) &&
     ((plVar1 = param_1 + 10, *plVar1 != 0 &&
      ((plVar1 = param_1 + 0xc, *plVar1 != 0 && (plVar1 = param_1 + 0xe, param_1[0xe] != 0)))))) {
    plVar1 = plVar3;
  }
  if (plVar1 == plVar3) {
    return;
  }
  if (plVar1 == (long *)0x0) {
    return;
  }
  cVar4 = (char)param_2[1];
  if ((lVar2 == 0) || ((char)param_1[1] != cVar4)) {
    plVar3 = param_1 + 2;
    if (((((*plVar3 == 0) || ((char)param_1[3] != cVar4)) &&
         (((plVar3 = param_1 + 4, *plVar3 == 0 || ((char)param_1[5] != cVar4)) &&
          ((plVar3 = param_1 + 6, *plVar3 == 0 || ((char)param_1[7] != cVar4)))))) &&
        ((((plVar3 = param_1 + 8, *plVar3 == 0 || ((char)param_1[9] != cVar4)) &&
          ((plVar3 = param_1 + 10, *plVar3 == 0 || ((char)param_1[0xb] != cVar4)))) &&
         ((plVar3 = param_1 + 0xc, *plVar3 == 0 || ((char)param_1[0xd] != cVar4)))))) &&
       ((plVar3 = param_1 + 0xe, *plVar3 == 0 || ((char)param_1[0xf] != cVar4)))) goto LAB_0119cefc;
  }
  else {
    plVar3 = param_1;
  }
  *(undefined1 *)(plVar3 + 1) = 0;
  *plVar3 = 0;
LAB_0119cefc:
  lVar2 = *param_2;
  *(char *)(plVar1 + 1) = (char)param_2[1];
  *plVar1 = lVar2;
  return;
}


