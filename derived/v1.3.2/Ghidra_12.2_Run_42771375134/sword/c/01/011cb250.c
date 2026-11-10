/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cb250; name: FUN_011cb250
 */


void FUN_011cb250(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725808 + 0x58;
  *param_2 = (long)(PTR_DAT_02725808 + 0x10);
  param_2[1] = (long)puVar1;
  if (param_2[8] != 0) {
    (**(code **)(*(long *)(param_2[8] + 0x48) + 0x18))();
    param_2[8] = 0;
  }
  if (param_2[7] != 0) {
    (**(code **)(*(long *)(param_2[7] + 0x48) + 0x18))();
    param_2[7] = 0;
  }
  if (param_2[6] != 0) {
    (**(code **)(*(long *)(param_2[6] + 0x48) + 0x18))();
    param_2[6] = 0;
  }
  if (param_2[5] != 0) {
    (**(code **)(*(long *)(param_2[5] + 0x48) + 0x18))();
    param_2[5] = 0;
  }
  if (param_2[4] != 0) {
    (**(code **)(*(long *)(param_2[4] + 0x48) + 0x18))();
    param_2[4] = 0;
  }
  if (param_2[3] != 0) {
    (**(code **)(*(long *)(param_2[3] + 0x48) + 0x18))();
    param_2[3] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x011cb324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


