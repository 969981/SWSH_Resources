/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012248c0; name: FUN_012248c0
 */


void FUN_012248c0(char *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((((((*(long *)PTR_DAT_027185f8 != 0) && (lVar5 = FUN_0120e640(), lVar5 != 0)) &&
        (*param_1 != '\0')) &&
       ((*(long *)(param_1 + 0x30) != lVar5 && (*(long *)(param_1 + 0x60) != lVar5)))) &&
      ((*(long *)(param_1 + 0x90) != lVar5 &&
       ((*(long *)(param_1 + 0xc0) != lVar5 && (*(long *)(param_1 + 0xf0) != lVar5)))))) &&
     ((*(long *)(param_1 + 0x120) != lVar5 &&
      ((*(long *)(param_1 + 0x150) != lVar5 && (*(long *)(param_1 + 0x180) != lVar5)))))) {
    if (*(long *)(param_1 + 0x30) == 0) {
      plVar6 = (long *)(param_1 + 0x30);
    }
    else if (*(long *)(param_1 + 0x60) == 0) {
      plVar6 = (long *)(param_1 + 0x60);
    }
    else if (*(long *)(param_1 + 0x90) == 0) {
      plVar6 = (long *)(param_1 + 0x90);
    }
    else if (*(long *)(param_1 + 0xc0) == 0) {
      plVar6 = (long *)(param_1 + 0xc0);
    }
    else if (*(long *)(param_1 + 0xf0) == 0) {
      plVar6 = (long *)(param_1 + 0xf0);
    }
    else if (*(long *)(param_1 + 0x120) == 0) {
      plVar6 = (long *)(param_1 + 0x120);
    }
    else if (*(long *)(param_1 + 0x150) == 0) {
      plVar6 = (long *)(param_1 + 0x150);
    }
    else {
      if (*(long *)(param_1 + 0x180) != 0) {
        return;
      }
      plVar6 = (long *)(param_1 + 0x180);
    }
    lVar7 = *(long *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    *plVar6 = lVar5;
    plVar6[1] = lVar7;
    plVar6[4] = lVar2;
    plVar6[5] = lVar4;
    plVar6[2] = lVar1;
    plVar6[3] = lVar3;
  }
  return;
}


