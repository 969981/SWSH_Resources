/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb220; name: FUN_008fb220
 */


undefined2 FUN_008fb220(long param_1,byte param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 5) && (*(char *)(*(long *)(param_1 + 0x88) + 0x3b8) != '\0')) {
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x88) + (ulong)param_2 * 2 + 0xa08);
  }
  return uVar1;
}


