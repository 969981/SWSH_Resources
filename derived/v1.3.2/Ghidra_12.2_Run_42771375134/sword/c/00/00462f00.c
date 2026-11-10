/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00462f00; name: FUN_00462f00
 */


void FUN_00462f00(long *param_1)

{
  param_1[10] = 0;
  *param_1 = (long)(PTR_DAT_027130d8 + 0x10);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) & 0x80 | 0x30;
  return;
}


