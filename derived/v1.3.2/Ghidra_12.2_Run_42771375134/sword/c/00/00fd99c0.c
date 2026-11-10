/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd99c0; name: FUN_00fd99c0
 */


undefined8 FUN_00fd99c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x600) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_02162130);
  return uVar1;
}


