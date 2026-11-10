/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009329a0; name: FUN_009329a0
 */


undefined8 FUN_009329a0(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (9 < (int)param_2) {
    return 0;
  }
  if (*(int *)(param_1 + (ulong)param_2 * 4 + 0x180) == 0) {
    return 0;
  }
  uVar3 = (ulong)param_2;
  lVar1 = param_1 + uVar3 * 4;
  uVar2 = *(uint *)(lVar1 + 0x158);
  if (4 < uVar2) {
    return 0;
  }
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      if (*(uint *)(param_1 + uVar3 * 0x14 + 0x90 + lVar4 * 4) == (param_3 & 0xff)) {
        return 0;
      }
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < uVar2);
  }
  *(uint *)(param_1 + uVar3 * 0x14 + (ulong)uVar2 * 4 + 0x90) = param_3 & 0xff;
  *(uint *)(lVar1 + 0x158) = uVar2 + 1;
  return 1;
}


