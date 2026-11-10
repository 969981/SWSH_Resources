/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cfc70; name: FUN_003cfc70
 */


void FUN_003cfc70(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 != 0) {
    plVar1 = *(long **)(param_1 + 0x18);
    do {
      lVar4 = *plVar1;
      iVar5 = iVar5 + -1;
      if (iVar5 != 0) {
        Hint_Prefetch(plVar1[1],0,0,0);
      }
      Hint_Prefetch(*(undefined8 *)(lVar4 + 0x48),0,0,0);
      if (((*(uint *)(lVar4 + 0x40) ^ 0xffffffff) & 0x408) == 0) {
        lVar2 = FUN_003fc7b0(*(undefined8 *)(lVar4 + 0x28));
        lVar3 = FUN_003fc7b0(*(undefined8 *)(lVar4 + 0x30));
        if ((*(uint *)(lVar2 + 0xb8) < 0xfffffffe) ||
           ((lVar3 != 0 && (*(uint *)(lVar3 + 0xb8) < 0xfffffffe)))) {
          FUN_003f9c50(lVar4,8,0,0,0,0,param_2);
        }
      }
      plVar1 = plVar1 + 1;
    } while (iVar5 != 0);
  }
  return;
}


