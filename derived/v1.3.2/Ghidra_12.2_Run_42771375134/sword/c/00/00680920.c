/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00680920; name: FUN_00680920
 */


undefined8 FUN_00680920(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if ((param_3 & 1) == 0) {
    if ((long)uVar1 < (long)param_2) {
      return 0;
    }
  }
  else {
    param_2 = uVar1 - param_2;
    if ((long)param_2 < 0) {
      return 0;
    }
  }
  *(ulong *)(param_1 + 0x28) = param_2;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    if (uVar1 <= param_2) {
      *(ulong *)(param_1 + 0x20) = uVar1;
      return 1;
    }
    if (*(ulong *)(param_1 + 0x20) < param_2) {
      *(ulong *)(param_1 + 0x20) = param_2;
    }
  }
  return 1;
}


