/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914d20; name: FUN_00914d20
 */


long FUN_00914d20(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar2 = 0;
    do {
      uVar1 = FUN_00915210(*(long *)(param_1 + 0xa0) + lVar3);
      if ((uVar5 == 0) || ((uVar1 != 0 && (uVar5 <= uVar1)))) {
        uVar2 = uVar4 & 0xffffffff;
        uVar5 = uVar1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x2728;
    } while (uVar4 < *(uint *)(param_1 + 0x100));
    if (uVar5 != 0) {
      return *(long *)(param_1 + 0xa0) + uVar2 * 0x2728;
    }
  }
  return 0;
}


