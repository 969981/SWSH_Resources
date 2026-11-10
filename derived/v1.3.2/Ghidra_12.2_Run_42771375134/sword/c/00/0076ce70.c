/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076ce70; name: FUN_0076ce70
 */


undefined8 FUN_0076ce70(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)((long)param_1 + 0xe4) == 0) {
    return 0xfffffffd;
  }
  if ((int)param_1[0x4f] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0076cea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))();
    return uVar1;
  }
  *(int *)(param_1 + 0x4f) = (int)param_1[0x4f] + -1;
  return 0xffffffff;
}


