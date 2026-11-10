/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914c80; name: FUN_00914c80
 */


long FUN_00914c80(long param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      sVar1 = FUN_00915210(*(long *)(param_1 + 0xa0) + lVar3);
      if ((sVar1 != 0) &&
         (uVar2 = FUN_00915210(*(long *)(param_1 + 0xa0) + lVar3), (uVar2 & 0xffff) == param_2)) {
        return *(long *)(param_1 + 0xa0) + lVar3;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x2728;
    } while (uVar4 < *(uint *)(param_1 + 0x100));
  }
  return 0;
}


