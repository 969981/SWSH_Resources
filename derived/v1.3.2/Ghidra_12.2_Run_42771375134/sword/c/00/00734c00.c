/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734c00; name: FUN_00734c00
 */


long FUN_00734c00(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0xb8) + param_2 * 0x10;
  iVar2 = *(int *)(lVar1 + 8);
  lVar4 = (long)iVar2;
  iVar3 = *(int *)(lVar1 + 0xc);
  if (iVar3 <= iVar2) {
    return 0;
  }
  plVar5 = (long *)(*(long *)(param_1 + 0xe8) + lVar4 * 0x40 + 8);
  do {
    if (*plVar5 == *param_3) {
      return plVar5[-1];
    }
    lVar4 = lVar4 + 1;
    plVar5 = plVar5 + 8;
  } while (lVar4 < iVar3);
  return 0;
}


