/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd9970; name: FUN_00fd9970
 */


uint FUN_00fd9970(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x600) != '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 0;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&DAT_02162130);
  return (uVar1 ^ 1) & 1;
}


