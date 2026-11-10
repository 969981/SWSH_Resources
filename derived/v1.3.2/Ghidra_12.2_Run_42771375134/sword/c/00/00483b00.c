/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00483b00; name: FUN_00483b00
 */


void FUN_00483b00(long param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_00483900(param_1,0,param_2,param_3,0);
    return;
  }
  FUN_00483900(param_1,*(undefined1 *)(*(long *)(param_1 + 0x60) + 0x24),param_2,param_3,0);
  return;
}


