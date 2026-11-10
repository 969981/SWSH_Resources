/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418860; name: FUN_00418860
 */


void FUN_00418860(long param_1,long *param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(byte *)(param_1 + 299) = param_3 & 1;
  (**(code **)(*param_2 + 0x98))(param_2,param_1,0);
  *(byte *)(param_1 + 0x12a) = ~param_3 & 1;
  return;
}


