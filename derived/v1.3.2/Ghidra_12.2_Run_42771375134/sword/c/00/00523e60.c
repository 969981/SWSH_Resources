/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523e60; name: FUN_00523e60
 */


undefined8
FUN_00523e60(float param_1,float param_2,float param_3,long param_4,uint param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_4 + 0xcf0) = param_1;
  uVar2 = param_5;
  if (7 < (int)param_5) {
    uVar2 = 8;
  }
  uVar1 = 3;
  if (2 < (int)param_5) {
    uVar1 = uVar2;
  }
  if ((param_5 & 0x80000000) == 0) {
    param_5 = uVar1;
  }
  *(float *)(param_4 + 0xcf4) = param_2;
  if (param_3 <= 1.0) {
    param_3 = 1.0;
  }
  *(uint *)(param_4 + 0xcf8) = param_5;
  *(undefined4 *)(param_4 + 0xcfc) = param_6;
  *(float *)(param_4 + 0xd00) = param_3;
  return 0;
}


