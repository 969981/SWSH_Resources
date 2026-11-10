/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1980; name: FUN_008e1980
 */


undefined8 FUN_008e1980(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0xb8) & 7) != 0) {
    uVar1 = FUN_008ed1d0(param_1 + 0xb8);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


