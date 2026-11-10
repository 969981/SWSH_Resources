/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00734c60; name: FUN_00734c60
 */


long FUN_00734c60(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xb8) + param_2 * 0x10;
  iVar1 = *(int *)(lVar3 + 8);
  lVar4 = (long)iVar1;
  iVar2 = *(int *)(lVar3 + 0xc);
  if (iVar2 <= iVar1) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0xe8) + lVar4 * 0x40;
  do {
    if (*(long *)(lVar3 + 8) == *param_3) {
      return lVar3;
    }
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + 0x40;
  } while (lVar4 < iVar2);
  return 0;
}


