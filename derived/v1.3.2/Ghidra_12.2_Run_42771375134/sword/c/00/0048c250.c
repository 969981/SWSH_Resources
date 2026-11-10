/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c250; name: FUN_0048c250
 */


void FUN_0048c250(long *param_1,int *param_2)

{
  *(int *)((long)param_1 + 0x284) = *(int *)((long)param_1 + 0x284) + 1;
  if (*param_2 != 0) {
    FUN_0048c4c0(param_1,0,0x4000000,*(undefined8 *)param_2,param_2[2]);
    return;
  }
  if ((*(byte *)((long)param_1 + 0x26a) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048c2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,0);
    return;
  }
  if (param_1[0x3d] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048c2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x98))(param_1,1);
    return;
  }
  FUN_004be340(0,*(undefined8 *)PTR_DAT_02712b18,param_1[0x3d],0x4000000,0,4,0);
  return;
}


