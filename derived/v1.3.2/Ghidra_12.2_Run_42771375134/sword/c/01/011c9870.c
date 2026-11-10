/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c9870; name: FUN_011c9870
 */


undefined8 FUN_011c9870(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    return 1;
  }
  uVar1 = FUN_011cd300();
  return uVar1;
}


