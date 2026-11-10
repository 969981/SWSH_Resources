/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040a2c0; name: FUN_0040a2c0
 */


void FUN_0040a2c0(long *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))();
  iVar1 = *param_2;
  if (iVar1 == 2) {
    FUN_00406560(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 *(undefined1 *)((long)param_2 + 0x22),param_2[4]);
  }
  else if (iVar1 == 1) {
    FUN_004063f0(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 param_2[4]);
  }
  else if (iVar1 == 0) {
    FUN_00406230(*(undefined8 *)PTR_DAT_02712a60,param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                 param_2[4]);
  }
  FUN_0044b870(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0040a384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


