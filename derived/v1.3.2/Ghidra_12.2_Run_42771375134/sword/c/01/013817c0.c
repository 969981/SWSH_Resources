/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013817c0; name: FUN_013817c0
 */


void FUN_013817c0(long *param_1)

{
  undefined *puVar1;
  
  FUN_01383ad0();
  puVar1 = PTR_DAT_02728ba8;
  *(undefined4 *)(param_1 + 0x19) = 0x17;
  param_1[0x16] = -0x40cf10c340cf10c4;
  param_1[0x17] = -0x40cf10c340cf10c4;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0xbf30ef3cbf30ef3c;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[9] = (long)(puVar1 + 0xe8);
  param_1[10] = (long)(puVar1 + 0x158);
  *(undefined4 *)((long)param_1 + 0xdc) = 0x437f0000;
  return;
}


