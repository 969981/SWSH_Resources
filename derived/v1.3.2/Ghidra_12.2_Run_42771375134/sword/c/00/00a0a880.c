/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0a880; name: FUN_00a0a880
 */


undefined8 FUN_00a0a880(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0x1f;
  }
  uVar1 = FUN_008e0a00();
  return uVar1;
}


