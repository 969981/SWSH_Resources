/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed0f40; name: FUN_00ed0f40
 */


void FUN_00ed0f40(float param_1,long param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  uVar1 = 1;
  if (param_3 == 2) {
    uVar1 = 2;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar1;
  fVar2 = DAT_01d4bb38;
  *(float *)(param_2 + 0x88) = param_1;
  fVar2 = (param_1 * fVar2) / DAT_01d4c284;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  *(int *)(param_2 + 0x78) = param_3;
  *(undefined4 *)(param_2 + 0x80) = param_4;
  *(undefined1 *)(param_2 + 0x6a) = 0;
  FUN_00a92cd0(fVar2,0,0);
  *(undefined8 *)(param_2 + 0xa8) = extraout_var_00;
  *(ulong *)(param_2 + 0xa0) = CONCAT44(extraout_var,extraout_s0);
  return;
}


