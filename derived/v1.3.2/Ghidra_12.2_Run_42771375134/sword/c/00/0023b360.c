/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023b360; name: FUN_0023b360
 */


void FUN_0023b360(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_50;
  long lStack_48;
  
  local_50 = *(undefined8 *)(param_1 + 8);
  lStack_48 = param_1;
  fabsf(*(float *)(param_1 + 0x14));
  fabsf(*(float *)(param_1 + 0x18));
  local_5c = 1.0 / *(float *)(param_1 + 0x10);
  local_60 = 1.0 / *(float *)(param_1 + 0x14);
  local_58 = 1.0 / *(float *)(param_1 + 0x18);
  FUN_002523d0(&local_60,param_2,param_4,param_5,param_6,param_3,1,1);
  return;
}


