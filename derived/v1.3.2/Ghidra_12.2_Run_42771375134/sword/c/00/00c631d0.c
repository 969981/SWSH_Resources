/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c631d0; name: FUN_00c631d0
 */


void FUN_00c631d0(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_0271c048 + 0x10);
  if (param_1[8] != 0) {
    (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
    param_1[8] = 0;
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
    param_1[7] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
    param_1[5] = 0;
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_00c63400(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00c63280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar1,param_1[3],param_1[4]);
  return;
}


