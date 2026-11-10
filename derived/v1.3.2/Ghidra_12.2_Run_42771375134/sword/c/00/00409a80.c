/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409a80; name: FUN_00409a80
 */


int FUN_00409a80(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0xe0);
  if ((plVar3 != (long *)0x0) && ((int)plVar3[1] != 0)) {
    lVar2 = *plVar3;
    do {
      iVar1 = FUN_00482db0(*(undefined4 *)(lVar2 + 4));
      if (iVar1 != 1) {
        for (lVar4 = *plVar3; lVar4 != lVar2; lVar4 = lVar4 + 0x18) {
          FUN_00482e30(*(undefined4 *)(lVar4 + 4));
        }
        return iVar1;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x18);
  }
  return 1;
}


