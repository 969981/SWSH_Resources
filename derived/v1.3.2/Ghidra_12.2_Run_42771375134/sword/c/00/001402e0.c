/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001402e0; name: FUN_001402e0
 */


undefined8 FUN_001402e0(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  
  uVar3 = param_2;
  if (param_2 <= param_3) {
    uVar3 = param_3;
    param_3 = param_2;
  }
  if ((int)param_1[2] == 0) {
    return 0;
  }
  uVar5 = param_3 | uVar3 << 0x10;
  uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
  uVar5 = (uVar5 ^ (int)uVar5 >> 10) * 9;
  uVar5 = uVar5 ^ (int)uVar5 >> 6;
  uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
  uVar5 = *(uint *)(*param_1 + (ulong)(*(uint *)(param_1 + 7) & (uVar5 ^ (int)uVar5 >> 0x10)) * 4);
  if (uVar5 == 0x3fffffff) {
    return 0;
  }
  do {
    puVar1 = (uint *)(param_1[4] + (ulong)uVar5 * 8);
    if (*puVar1 == param_3 && puVar1[1] == uVar3) {
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      FUN_001401b0(param_1);
      uVar3 = *(uint *)(param_1 + 6) | *(uint *)(param_1 + 6) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      if ((uVar3 != *(uint *)(param_1 + 2)) &&
         (uVar5 = *(uint *)(param_1 + 3), uVar5 <= uVar3 || *(uint *)(param_1 + 2) != uVar5)) {
        uVar2 = uVar5;
        if (uVar5 <= uVar3) {
          uVar2 = uVar3;
        }
        *(uint *)(param_1 + 2) = uVar2;
        *(uint *)(param_1 + 7) = uVar2 - 1;
        if ((uVar5 < uVar3) || (uVar2 <= *(uint *)((long)param_1 + 0x14) >> 2)) {
          bVar4 = true;
        }
        else {
          bVar4 = uVar2 <= *(uint *)((long)param_1 + 0x34) >> 2;
        }
        FUN_0013fe50(param_1,bVar4);
      }
      return 1;
    }
    uVar5 = *(uint *)(param_1[1] + (ulong)uVar5 * 4);
  } while (uVar5 != 0x3fffffff);
  return 0;
}


