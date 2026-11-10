/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f6110; name: FUN_006f6110
 */


void FUN_006f6110(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = (long *)*param_2;
  plVar10 = (long *)plVar5[1];
  plVar4 = (long *)plVar5[2];
  plVar1 = plVar5;
  if (plVar10 == (long *)0x0) {
    plVar2 = plVar4;
  }
  else if (plVar4 == (long *)0x0) {
    plVar2 = plVar10;
  }
  else {
    plVar2 = plVar4;
    do {
      plVar1 = plVar2;
      plVar2 = (long *)plVar1[1];
    } while ((long *)plVar1[1] != (long *)0x0);
    plVar2 = (long *)plVar1[2];
  }
  plVar3 = (long *)*plVar5;
  plVar8 = plVar3 + 1;
  plVar9 = (long *)*plVar8;
  if (plVar1 != plVar5) {
    *plVar10 = (long)plVar1;
    plVar1[1] = (long)plVar10;
    plVar10 = plVar1;
    if (plVar4 != plVar1) {
      plVar1[2] = (long)plVar4;
      *plVar4 = (long)plVar1;
      plVar10 = (long *)*plVar1;
      if (plVar2 != (long *)0x0) {
        *plVar2 = (long)plVar10;
      }
      plVar10[1] = (long)plVar2;
    }
    *plVar1 = (long)plVar3;
    if (plVar3 == (long *)*param_1) {
      *plVar3 = (long)plVar1;
      param_3[1] = plVar10;
      param_3[2] = plVar1;
      *param_3 = plVar2;
      return;
    }
    if (plVar9 == plVar5) {
      *plVar8 = (long)plVar1;
      param_3[1] = plVar10;
      param_3[2] = plVar1;
      *param_3 = plVar2;
      return;
    }
    plVar3[2] = (long)plVar1;
    param_3[1] = plVar10;
    param_3[2] = plVar1;
    *param_3 = plVar2;
    return;
  }
  if (plVar2 != (long *)0x0) {
    *plVar2 = (long)plVar3;
  }
  if (plVar3 == (long *)*param_1) {
    plVar6 = plVar3;
  }
  else {
    plVar6 = plVar3 + 2;
    if (plVar9 == plVar5) {
      plVar6 = plVar8;
    }
  }
  *plVar6 = (long)plVar2;
  lVar7 = *param_1;
  if (*(long *)(lVar7 + 8) == *param_2) {
    if (plVar4 == (long *)0x0) {
      plVar5 = plVar3;
    }
    else {
      do {
        plVar5 = plVar4;
        plVar4 = (long *)plVar5[1];
      } while ((long *)plVar5[1] != (long *)0x0);
    }
    *(long **)(lVar7 + 8) = plVar5;
    lVar7 = *param_1;
    if (*(long *)(lVar7 + 0x10) == *param_2) goto LAB_006f6264;
  }
  else if (*(long *)(lVar7 + 0x10) == *param_2) {
LAB_006f6264:
    if (plVar10 == (long *)0x0) {
      plVar4 = plVar3;
    }
    else {
      do {
        plVar4 = plVar10;
        plVar10 = (long *)plVar4[2];
      } while ((long *)plVar4[2] != (long *)0x0);
    }
    *(long **)(lVar7 + 0x10) = plVar4;
    param_3[1] = plVar3;
    param_3[2] = plVar1;
    *param_3 = plVar2;
    return;
  }
  param_3[1] = plVar3;
  param_3[2] = plVar1;
  *param_3 = plVar2;
  return;
}


