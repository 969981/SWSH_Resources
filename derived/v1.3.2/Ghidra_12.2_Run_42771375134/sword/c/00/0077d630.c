/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d630; name: FUN_0077d630
 */


void FUN_0077d630(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar1 = FUN_0077d680(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(param_1 + 0x7a) = uVar1;
  }
  return;
}


