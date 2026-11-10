/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f1960; name: FUN_005f1960
 */


undefined8 FUN_005f1960(long *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  switch(*param_2) {
  case 1:
                    /* WARNING: Could not recover jumptable at 0x005f1998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2[1],param_2[2],param_2[5]);
    return uVar1;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x005f19bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2[1],param_2[2],param_2[3],param_2[5]);
    return uVar1;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x005f19d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x70))
                      (param_1,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
    return uVar1;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x005f19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2[1],param_2[2],param_2[5]);
    return uVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x005f1a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x58))
                      (param_1,param_2[1],param_2[2],param_2[3],param_2[5],param_2[6]);
    return uVar1;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x005f1a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x68))
                      (param_1,param_2[1],param_2[2],param_2[5],(int)param_2[6] / 6);
    return uVar1;
  default:
    return 0;
  }
}


