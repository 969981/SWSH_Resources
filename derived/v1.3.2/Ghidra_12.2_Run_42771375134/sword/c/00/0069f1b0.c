/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069f1b0; name: FUN_0069f1b0
 */


void FUN_0069f1b0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1[1];
  if ((param_1[1] & 1) != 0) {
    (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 1 & 1) != 0) {
    (**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x10))((long *)param_1[10],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 3 & 1) != 0) {
    (**(code **)(*(long *)param_1[0xe] + 0x10))((long *)param_1[0xe],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    return;
  }
  (**(code **)(*(long *)param_1[0x12] + 0x10))((long *)param_1[0x12],*param_1,param_2);
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}


