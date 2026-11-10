/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00417a70; name: FUN_00417a70
 */


void FUN_00417a70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  short sVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  if (*(uint *)(lVar2 + 0x30) < 2) {
    if (*(uint *)(lVar2 + 0x28) == 0) {
      sVar4 = 0;
    }
    else {
      plVar3 = *(long **)(lVar2 + 0x20);
      sVar4 = 0;
      lVar2 = (ulong)*(uint *)(lVar2 + 0x28) << 3;
      do {
        if (*plVar3 == param_2) break;
        sVar4 = sVar4 + 1;
        plVar3 = plVar3 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    lVar2 = *(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18;
    if ((*(uint *)(*(long *)(lVar2 + -0x18) + 0x30) | 2) == 3) {
      lVar2 = FUN_004164b0();
    }
    else {
      lVar2 = *(long *)(lVar2 + -8);
    }
    if (lVar2 != 0) {
      if (((*(byte *)(param_1 + 0x40) & 1) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x18 +
                           -0x18), *(long *)(lVar1 + 0x38) == lVar2)) {
        FUN_00418070(param_1,lVar1,lVar2);
      }
      *(short *)(lVar2 + 10) = sVar4;
    }
  }
  else if (*(uint *)(lVar2 + 0x30) - 2 < 2) {
    FUN_00417e10(param_1);
    return;
  }
  return;
}


