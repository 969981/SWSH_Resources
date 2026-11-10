/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045abb0; name: FUN_0045abb0
 */


undefined8 FUN_0045abb0(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar1 = FUN_004599e0(param_1 + 0x20);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_0045a3a0(param_1);
  return 1;
}


