/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069f490; name: FUN_0069f490
 */


void FUN_0069f490(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1[1];
  if ((param_1[1] & 1) != 0) {
    (**(code **)(*(long *)param_1[2] + 0x28))((long *)param_1[2],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 1 & 1) != 0) {
    (**(code **)(*(long *)param_1[6] + 0x28))((long *)param_1[6],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 2 & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x28))((long *)param_1[10],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 3 & 1) != 0) {
    (**(code **)(*(long *)param_1[0xe] + 0x28))((long *)param_1[0xe],*param_1,param_2);
    uVar1 = (uint)param_1[1];
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0069f564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x12] + 0x28))((long *)param_1[0x12],*param_1,param_2);
  return;
}


