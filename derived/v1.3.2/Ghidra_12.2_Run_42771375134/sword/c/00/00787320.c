/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00787320; name: FUN_00787320
 */


undefined8 FUN_00787320(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x2a8)) {
    uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_007888a0(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
      return uVar2;
    }
  }
  return 1;
}


