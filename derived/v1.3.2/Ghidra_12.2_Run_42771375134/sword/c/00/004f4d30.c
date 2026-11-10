/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4d30; name: FUN_004f4d30
 */


long FUN_004f4d30(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xf8) + -1;
  if (iVar3 < 0) {
    return 0;
  }
  iVar4 = 0;
  do {
    while( true ) {
      iVar2 = iVar3 - iVar4;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar4 + (iVar2 >> 1);
      uVar1 = *(uint *)(*(long *)(param_1 + 0xf0) + (long)iVar2 * 0x18);
      if (param_2 > uVar1 || uVar1 == param_2) break;
      iVar3 = iVar2 + -1;
      if (iVar3 < iVar4) {
        return 0;
      }
    }
    if (param_2 <= uVar1) {
      return *(long *)(param_1 + 0xf0) + (long)iVar2 * 0x18;
    }
    iVar4 = iVar2 + 1;
  } while (iVar4 <= iVar3);
  return 0;
}


