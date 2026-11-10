/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00786ee0; name: FUN_00786ee0
 */


undefined8 FUN_00786ee0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x2a8)) {
    uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
    return uVar1;
  }
  return 0;
}


