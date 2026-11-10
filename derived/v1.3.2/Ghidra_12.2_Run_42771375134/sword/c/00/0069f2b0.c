/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069f2b0; name: FUN_0069f2b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0069f2b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)param_2[1];
  if ((param_2[1] & 1) != 0) {
    (**(code **)(*(long *)param_2[2] + 0x18))(param_1,(long *)param_2[2],*param_2,param_3);
    uVar1 = (uint)param_2[1];
  }
  if ((uVar1 >> 1 & 1) != 0) {
    (**(code **)(*(long *)param_2[6] + 0x18))(param_1,(long *)param_2[6],*param_2,param_3);
    uVar1 = (uint)param_2[1];
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*(long *)param_2[10] + 0x18))(param_1,(long *)param_2[10],*param_2,param_3);
    uVar1 = (uint)param_2[1];
  }
  if ((uVar1 >> 3 & 1) != 0) {
    (**(code **)(*(long *)param_2[0xe] + 0x18))(param_1,(long *)param_2[0xe],*param_2,param_3);
    uVar1 = (uint)param_2[1];
  }
  if ((uVar1 >> 4 & 1) != 0) {
    (**(code **)(*(long *)param_2[0x12] + 0x18))(param_1,(long *)param_2[0x12],*param_2,param_3);
  }
  *(float *)(param_2 + 0x16) = *(float *)(param_2 + 0x16) + (float)param_1;
  return;
}


