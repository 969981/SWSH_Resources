/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048c2d0; name: FUN_0048c2d0
 */


void FUN_0048c2d0(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(int *)((long)param_1 + 0x284) + -1,
     *(int *)((long)param_1 + 0x284) != 0 && iVar1 != 0)) {
    *(int *)((long)param_1 + 0x284) = iVar1;
    return;
  }
  *(undefined4 *)((long)param_1 + 0x284) = 0;
  (**(code **)(*param_1 + 0xa0))(param_1);
  if (*param_2 != 0) {
    FUN_0048c4c0(param_1,0,0x8000000,*(undefined8 *)param_2,param_2[2]);
    return;
  }
  if (param_1[0x3d] == 0) {
    *(undefined4 *)((long)param_1 + 0x21c) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x0048c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1);
    return;
  }
  FUN_004be340(0x3f800000,*(undefined8 *)PTR_DAT_02712b18,param_1[0x3d],0x8000000,0,4,0);
  return;
}


