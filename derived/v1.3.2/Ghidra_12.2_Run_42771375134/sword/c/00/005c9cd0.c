/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9cd0; name: FUN_005c9cd0
 */


undefined8 FUN_005c9cd0(int param_1,long param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (0x20 < (int)param_4) {
    return 0;
  }
  if (param_1 * 8 < (int)(param_4 + param_3)) {
    return 0;
  }
  if ((int)param_4 < 1) {
    return 1;
  }
  uVar5 = 0;
  do {
    uVar1 = param_3 + uVar5;
    uVar2 = uVar1 + 7;
    if (-1 < (int)uVar1) {
      uVar2 = uVar1;
    }
    uVar3 = uVar5 & 0x1f;
    lVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    uVar5 = uVar5 + 1;
    *(byte *)(param_2 + lVar4) =
         *(byte *)(param_2 + lVar4) & ((byte)(1 << (ulong)(uVar1 & 7)) ^ 0xff) |
         ((1 << (ulong)uVar3 & param_5) != 0) << (ulong)(uVar1 & 7);
  } while (param_4 != uVar5);
  return 1;
}


