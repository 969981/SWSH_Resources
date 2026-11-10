/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053cb90; name: FUN_0053cb90
 */


float FUN_0053cb90(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  
  fVar4 = *param_1;
  fVar6 = param_1[1];
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = param_1[2];
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_90[0] = fVar4;
  local_90[1] = fVar6;
  local_90[2] = fVar5;
  if (*param_2 <= 0.0) {
    if (*param_2 < 0.0) {
      if (((*PTR_DAT_02713b30 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_02713b30), iVar3 != 0)) {
        *(undefined4 *)PTR_DAT_02713b38 = 0xff7fffff;
        __cxa_guard_release(PTR_DAT_02713b30);
      }
      fVar6 = *(float *)PTR_DAT_02713b38;
      fVar4 = local_90[0];
      if (local_90[0] <= fVar6) {
        fVar4 = fVar6;
      }
      uVar2 = -(uint)(local_90[0] <= fVar6);
      if (fVar4 < local_90[1]) {
        uVar2 = 1;
        fVar4 = local_90[1];
      }
      fVar6 = local_90[2];
      if (local_90[2] <= fVar4) {
        fVar6 = fVar4;
      }
      uVar1 = 2;
      if (local_90[2] <= fVar4) {
        uVar1 = uVar2;
      }
      if (fVar6 != 0.0) {
        fVar4 = -(*param_2 / fVar6);
        local_90[0] = local_90[0] * fVar4;
        local_90[1] = local_90[1] * fVar4;
        local_90[2] = local_90[2] * fVar4;
        if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i >= 0 && i < ELMS","../include\\PPFX/ppfxTypes.h",0x41aa,"v");
        }
        local_90[(int)uVar1] = -*param_2;
      }
    }
  }
  else {
    FUN_00511040(&local_80,0);
    if (((((*param_3 == local_80) && (param_3[1] == local_7c)) && (param_3[2] == local_78)) &&
        ((param_3[3] == local_74 && (param_3[4] == local_70)))) &&
       ((param_3[5] == local_6c && ((param_3[6] == local_68 && (param_3[7] == local_64)))))) {
      local_5c = DAT_01d4c3f8;
      local_6c = DAT_01d4be80;
      local_7c = DAT_01d4be14;
    }
    else {
      FUN_00511bb0(&local_80,param_3,param_3 + 2,param_3 + 4,param_3 + 6);
    }
    fVar6 = fVar4 * local_7c + fVar6 * local_6c + fVar5 * local_5c;
    local_90[0] = fVar4;
    if (fVar6 != 0.0) {
      local_90[0] = fVar4 * (*param_2 / fVar6);
    }
  }
  return local_90[0];
}


