/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206c40; name: FUN_00206c40
 */


void FUN_00206c40(long param_1,undefined8 param_2)

{
  FUN_003ff470(param_1 + 0x20);
  if (*(int *)(param_1 + 0x108) < 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    FUN_003ff470(param_1 + 0x108);
    return;
  }
  FUN_003ff470(param_1 + 0x108);
  return;
}


