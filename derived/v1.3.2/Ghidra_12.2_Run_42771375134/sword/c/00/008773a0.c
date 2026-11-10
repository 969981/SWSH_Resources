/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008773a0; name: FUN_008773a0
 */


uint FUN_008773a0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  if (0xf < (uVar1 ^ (uint)param_1 & 0xfff0 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
    param_2 = param_2 & 0xffff | (uVar1 ^ (uint)param_1 ^ param_2) << 0x10;
  }
  return param_2;
}


