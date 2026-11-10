/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ae6d0; name: FUN_012ae6d0
 */


void FUN_012ae6d0(long param_1,char param_2,undefined8 param_3)

{
  if (param_2 == '\0') {
    param_3 = *(undefined8 *)(param_1 + 0x70);
  }
  FUN_012ae5a0(param_1 + 0x60,param_3);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}


