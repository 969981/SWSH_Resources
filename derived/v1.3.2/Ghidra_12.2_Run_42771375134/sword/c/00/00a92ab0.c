/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a92ab0; name: FUN_00a92ab0
 */


undefined4 FUN_00a92ab0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x58;
  if (*(char *)(param_1 + 0x81) != '\0') {
    lVar1 = 0xf4;
  }
  return *(undefined4 *)(param_1 + lVar1);
}


