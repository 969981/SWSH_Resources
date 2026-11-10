/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a6730; name: FUN_002a6730
 */


uint FUN_002a6730(long param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  
  local_2c = (*param_3 + param_3[3]) * 0.5;
  fStack_28 = (param_3[1] + param_3[4]) * 0.5;
  local_24 = (param_3[2] + param_3[5]) * 0.5;
  fStack_20 = (param_3[3] - *param_3) * 0.5;
  local_1c = (param_3[4] - param_3[1]) * 0.5;
  fStack_18 = (param_3[5] - param_3[2]) * 0.5;
  local_30 = 0x3f800000;
  local_50 = 0x3f800000;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  uStack_38 = 0;
                    /* try { // try from 002a67b8 to 002a67c7 has its CatchHandler @ 002a67d8 */
  uVar1 = (*(code *)(&PTR_LAB_025e54a0)[*(ushort *)(*(long *)(param_1 + 0x28) + 8) - 3])
                    (&local_50,*(long *)(param_1 + 0x28),param_2,param_1 + 4,0);
  return uVar1 & 1;
}


