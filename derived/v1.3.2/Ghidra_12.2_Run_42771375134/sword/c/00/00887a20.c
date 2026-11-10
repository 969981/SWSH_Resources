/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00887a20; name: FUN_00887a20
 */


undefined8 FUN_00887a20(long param_1,int param_2,short param_3,undefined8 param_4)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      iVar2 = FUN_00886130(*(long *)(param_1 + 8) + lVar3);
      if ((iVar2 == param_2) &&
         (sVar1 = FUN_00886140(*(long *)(param_1 + 8) + lVar3), sVar1 == param_3)) {
        FUN_008863f0(*(long *)(param_1 + 8) + lVar3,param_4);
        return 1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x30;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}


