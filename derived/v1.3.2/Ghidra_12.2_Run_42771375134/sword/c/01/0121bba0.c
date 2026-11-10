/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121bba0; name: FUN_0121bba0
 */


void FUN_0121bba0(long param_1,long param_2,undefined4 param_3,undefined1 param_4)

{
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_0077d7e0((undefined8 *)(param_1 + 0x24),param_2,0xd);
  }
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined1 *)(param_1 + 0x44) = param_4;
  return;
}


