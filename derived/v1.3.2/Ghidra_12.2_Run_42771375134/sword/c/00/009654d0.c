/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009654d0; name: FUN_009654d0
 */


void FUN_009654d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[4];
  param_1[3] = param_2[5];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  uVar1 = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)((long)param_1 + 0x3c) = 0xf91f0000000000;
  *(undefined8 *)((long)param_1 + 0x54) = 0xf91f0000000000;
  *(undefined1 **)((long)param_1 + 0x34) = &LAB_00f91f00;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined1 **)((long)param_1 + 0x4c) = &LAB_00f91f00;
  *(undefined1 *)(param_1 + 6) = uVar1;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xf91f00;
  param_1[0xd] = 0;
  return;
}


