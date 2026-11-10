/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d450; name: FUN_0077d450
 */


undefined8 FUN_0077d450(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return 0;
  }
  uVar1 = FUN_0077d930(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  return uVar1;
}


