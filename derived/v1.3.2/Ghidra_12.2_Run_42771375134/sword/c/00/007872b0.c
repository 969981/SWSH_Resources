/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007872b0; name: FUN_007872b0
 */


float FUN_007872b0(long param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (param_2 < *(uint *)(param_1 + 0x2a8)) {
    uVar2 = FUN_00788660(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
    if ((uVar2 & 1) != 0) {
      FUN_00788950(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
      uVar1 = FUN_019a9320();
      fVar3 = (float)uVar1;
    }
  }
  return fVar3;
}


