/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00946c00; name: FUN_00946c00
 */


undefined8 FUN_00946c00(long *param_1)

{
  ulong uVar1;
  
  if (((*param_1 == 0) || (uVar1 = FUN_008e0b50(), (uVar1 & 1) == 0)) || ((int)param_1[1] != 1)) {
    return 0;
  }
  return 1;
}


