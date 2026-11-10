/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786fd0; name: FUN_00786fd0
 */


void FUN_00786fd0(float param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3 < *(uint *)(param_2 + 0x2a8)) {
    uVar4 = (ulong)param_3;
    uVar2 = FUN_00788660(*(long *)(param_2 + 0x288) + uVar4 * 0x40);
    if ((uVar2 & 1) != 0) {
      if (0.0 <= param_1) {
        FUN_00788950(*(long *)(param_2 + 0x288) + uVar4 * 0x40);
        uVar1 = FUN_019a9320();
        if ((float)uVar1 < param_1) {
          FUN_00788950(*(long *)(param_2 + 0x288) + uVar4 * 0x40);
          uVar1 = FUN_019a9320();
          param_1 = (float)uVar1;
        }
      }
      else {
        param_1 = 0.0;
      }
      lVar3 = FUN_00788950(*(long *)(param_2 + 0x288) + uVar4 * 0x40);
      *(float *)(lVar3 + 0x20) = param_1;
    }
  }
  return;
}


