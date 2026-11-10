/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a380; name: FUN_0029a380
 */


void FUN_0029a380(int *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_3;
  if (iVar2 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x0029a3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_PTR_02711f50 + (long)iVar1 * 8 + (long)iVar2 * 0x38))
              (param_3,param_4,param_1,param_2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0029a3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_02711f50 + (long)iVar2 * 8 + (long)iVar1 * 0x38))
            (param_1,param_2,param_3,param_4,0);
  return;
}


