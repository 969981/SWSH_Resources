/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fd00; name: FUN_0044fd00
 */


undefined8 FUN_0044fd00(long param_1,ulong param_2,void *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = FUN_004959d0(*(undefined8 *)(param_1 + 0x10));
  iVar3 = *(int *)(lVar2 + 0x10) + -1;
  if (iVar3 < 0) {
    return 2;
  }
  iVar4 = 0;
  while( true ) {
    while( true ) {
      iVar1 = iVar3 - iVar4;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar4 + (iVar1 >> 1);
      uVar5 = *(ulong *)(*(long *)(lVar2 + 8) + (long)iVar1 * 8);
      if (param_2 > uVar5 || uVar5 == param_2) break;
      iVar3 = iVar1 + -1;
      if (iVar3 < iVar4) {
        return 2;
      }
    }
    if (param_2 <= uVar5) break;
    iVar4 = iVar1 + 1;
    if (iVar3 < iVar4) {
      return 2;
    }
  }
  if (*(long *)(lVar2 + 8) + (long)iVar1 * 8 == 0) {
    return 2;
  }
  lVar2 = FUN_0042c0f0(param_2);
  if (lVar2 == 0) {
    return 2;
  }
  memcpy(param_3,(void *)(lVar2 + 0x60),0x29);
  return 1;
}


