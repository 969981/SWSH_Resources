/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030b4c0; name: FUN_0030b4c0
 */


void FUN_0030b4c0(float *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  
  if (param_3 == (long *)0x0) {
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 1.0;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    return;
  }
  iVar1 = (**(code **)(*param_3 + 0x30))(param_3);
  if ((iVar1 == 1) || (iVar1 = (**(code **)(*param_3 + 0x30))(param_3), iVar1 == 4)) {
                    /* WARNING: Could not recover jumptable at 0x0030b528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0xf8))(param_1,param_3);
    return;
  }
  (**(code **)(*param_3 + 0xa8))(&local_40,param_3);
  fStack_2c = fStack_2c * -2.0;
  local_30 = local_30 * -2.0;
  local_28 = local_28 * -2.0;
  fVar2 = fStack_34 * fStack_34 + -0.5;
  fVar3 = local_30 * local_40 + fStack_2c * fStack_3c + local_28 * local_38;
  param_1[2] = -local_38;
  param_1[3] = fStack_34;
  *param_1 = -local_40;
  param_1[1] = -fStack_3c;
  param_1[4] = local_40 * fVar3 +
               (local_30 * fVar2 - fStack_34 * (local_28 * fStack_3c - fStack_2c * local_38));
  param_1[5] = fStack_3c * fVar3 +
               (fStack_2c * fVar2 - fStack_34 * (local_30 * local_38 - local_28 * local_40));
  param_1[6] = (local_28 * fVar2 - fStack_34 * (fStack_2c * local_40 - local_30 * fStack_3c)) +
               local_38 * fVar3;
  return;
}


