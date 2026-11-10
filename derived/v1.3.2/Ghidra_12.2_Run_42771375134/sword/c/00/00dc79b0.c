/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc79b0; name: FUN_00dc79b0
 */


undefined8 FUN_00dc79b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x66b) != '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x3b8) == '\0') {
    return 1;
  }
  if (*(long *)(param_1 + 0x600) == 0) {
    return 0;
  }
  uVar1 = FUN_00dc79e0();
  return uVar1;
}


