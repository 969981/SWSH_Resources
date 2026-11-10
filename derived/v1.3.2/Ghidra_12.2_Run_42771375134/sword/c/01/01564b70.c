/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01564b70; name: FUN_01564b70
 */


void FUN_01564b70(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  FUN_0076c580();
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar1 = PTR_DAT_0272af18;
  *(undefined4 *)((long)param_1 + 0x284) = param_3;
  *(undefined4 *)(param_1 + 0x51) = param_4;
  param_1[0x52] = -0x340d631b7bddd9bb;
  param_1[0x53] = (long)&DAT_01d38550;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = -0x340d631b7bddd9bb;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = -0x340d631b7bddd9bb;
  param_1[0x6b] = -0x340d631b7bddd9bb;
  param_1[0x68] = -0x340d631b7bddd9bb;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0;
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 200);
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  return;
}


