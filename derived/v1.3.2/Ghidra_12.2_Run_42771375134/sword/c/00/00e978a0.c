/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e978a0; name: FUN_00e978a0
 */


void FUN_00e978a0(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x670) = param_2;
  *(byte *)(param_1 + 0x674) = param_3 & 1;
  return;
}


