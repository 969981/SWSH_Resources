/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00233a00; name: FUN_00233a00
 */


/* WARNING: Type propagation algorithm not settling */

undefined1  [16]
FUN_00233a00(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  float fVar5;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 uVar7;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  
  fVar12 = *param_2 - *param_1;
  fVar13 = param_2[1] - param_1[1];
  fVar9 = *param_1 - *param_3;
  fVar10 = param_1[1] - param_3[1];
  fVar11 = param_2[2] - param_1[2];
  fVar5 = param_1[2] - param_3[2];
  local_80 = fVar9 * *param_5 + fVar10 * param_5[1] + fVar5 * param_5[2];
  local_7c = fVar9 * param_5[3] + fVar10 * param_5[4] + fVar5 * param_5[5];
  local_78 = fVar9 * param_5[6] + fVar10 * param_5[7] + fVar5 * param_5[8];
  local_8c = fVar12 * param_5[3] + fVar13 * param_5[4] + fVar11 * param_5[5];
  local_90 = fVar12 * *param_5 + fVar13 * param_5[1] + fVar11 * param_5[2];
  local_88 = fVar12 * param_5[6] + fVar13 * param_5[7] + fVar11 * param_5[8];
  if (0.0 <= local_90) {
    uVar1 = false;
    if (0.0 <= local_8c) goto LAB_00233b2c;
LAB_00233b90:
    local_7c = -local_7c;
    local_8c = -local_8c;
    uVar2 = true;
    if (0.0 <= local_88) goto LAB_00233b38;
LAB_00233bac:
    local_78 = -local_78;
    local_88 = -local_88;
    uVar3 = true;
    if (local_90 <= 0.0) goto LAB_00233b48;
LAB_00233bcc:
    local_94 = 0.0;
    if (local_8c <= 0.0) {
      if (0.0 < local_88) {
        uVar8 = 2;
        uVar4 = 1;
        goto LAB_00233cd0;
      }
      fVar9 = *param_4;
      local_98 = (fVar9 - local_80) / local_90;
      fVar5 = param_4[1];
      local_80 = fVar9;
      if (-fVar5 <= local_7c) {
        if (fVar5 < local_7c) {
          fVar9 = (local_7c - fVar5) * (local_7c - fVar5);
          goto LAB_00233e80;
        }
LAB_00233ebc:
        local_94 = 0.0;
        fVar9 = 0.0;
        fVar10 = param_4[2];
        fVar11 = -fVar10;
        if (fVar11 <= local_78) goto LAB_00233e08;
      }
      else {
        fVar9 = (local_7c + fVar5) * (local_7c + fVar5);
        fVar5 = -fVar5;
LAB_00233e80:
        fVar9 = fVar9 + 0.0;
        fVar10 = param_4[2];
        fVar11 = -fVar10;
        local_94 = fVar9;
        local_7c = fVar5;
        if (fVar11 <= local_78) goto LAB_00233e08;
      }
LAB_00233ea0:
      local_94 = fVar9 + (local_78 + fVar10) * (local_78 + fVar10);
      local_78 = fVar11;
      goto joined_r0x00233d7c;
    }
    if (local_88 <= 0.0) {
      uVar8 = 1;
      uVar4 = 2;
LAB_00233cd0:
      FUN_00234090(0,uVar8,uVar4,&local_80,&local_90,param_4,&local_98,&local_94);
      goto joined_r0x00233d7c;
    }
    fStack_6c = local_7c - param_4[1];
    local_70 = local_80 - *param_4;
    local_68 = local_78 - param_4[2];
    if (local_90 * fStack_6c <= local_8c * local_70) {
      if (local_90 * local_68 <= local_88 * local_70) {
        FUN_00234270(0,1,2,&local_80,&local_90,param_4,&local_70,&local_98,&local_94);
        goto joined_r0x00233d7c;
      }
LAB_00233d50:
      FUN_00234270(2,0,1,&local_80,&local_90,param_4,&local_70,&local_98,&local_94);
      goto joined_r0x00233d7c;
    }
    if (local_88 * fStack_6c < local_8c * local_68) goto LAB_00233d50;
    FUN_00234270(1,2,0,&local_80,&local_90,param_4,&local_70,&local_98,&local_94);
    if ((bool)uVar1) goto LAB_00233fb8;
  }
  else {
    local_80 = -local_80;
    local_90 = -local_90;
    uVar1 = true;
    if (local_8c < 0.0) goto LAB_00233b90;
LAB_00233b2c:
    uVar2 = false;
    if (local_88 < 0.0) goto LAB_00233bac;
LAB_00233b38:
    uVar3 = false;
    if (0.0 < local_90) goto LAB_00233bcc;
LAB_00233b48:
    local_94 = 0.0;
    if (local_8c <= 0.0) {
      if (0.0 < local_88) {
        fVar9 = param_4[2];
        local_98 = (fVar9 - local_78) / local_88;
        fVar5 = *param_4;
        if (-fVar5 <= local_80) {
          if (fVar5 < local_80) {
            local_94 = (local_80 - fVar5) * (local_80 - fVar5);
            goto LAB_00233d98;
          }
          local_94 = 0.0;
          fVar10 = param_4[1];
          fVar5 = local_80;
        }
        else {
          local_94 = (local_80 + fVar5) * (local_80 + fVar5);
          fVar5 = -fVar5;
LAB_00233d98:
          local_94 = local_94 + 0.0;
          fVar10 = param_4[1];
        }
        fVar11 = -fVar10;
        local_80 = fVar5;
        local_78 = fVar9;
        if (local_7c < fVar11) {
          fVar5 = (local_7c + fVar10) * (local_7c + fVar10);
        }
        else {
          if (local_7c <= fVar10) goto joined_r0x00233d7c;
          fVar5 = (local_7c - fVar10) * (local_7c - fVar10);
          fVar11 = fVar10;
        }
        local_94 = local_94 + fVar5;
        local_7c = fVar11;
        goto joined_r0x00233d7c;
      }
      fVar5 = *param_4;
      if (-fVar5 <= local_80) {
        if (fVar5 < local_80) {
          local_94 = (local_80 - fVar5) * (local_80 - fVar5);
          goto LAB_00233e40;
        }
        fVar9 = param_4[1];
        fVar11 = -fVar9;
        fVar10 = 0.0;
        if (local_7c < fVar11) goto LAB_00233e60;
LAB_00233f54:
        if (fVar9 < local_7c) {
          fVar5 = (local_7c - fVar9) * (local_7c - fVar9);
          goto LAB_00233f68;
        }
      }
      else {
        local_94 = (local_80 + fVar5) * (local_80 + fVar5);
        fVar5 = -fVar5;
LAB_00233e40:
        local_94 = local_94 + 0.0;
        fVar9 = param_4[1];
        fVar11 = -fVar9;
        fVar10 = local_94;
        local_80 = fVar5;
        if (fVar11 <= local_7c) goto LAB_00233f54;
LAB_00233e60:
        local_94 = fVar10;
        fVar5 = (local_7c + fVar9) * (local_7c + fVar9);
        fVar9 = fVar11;
LAB_00233f68:
        local_94 = local_94 + fVar5;
        local_7c = fVar9;
      }
      fVar5 = param_4[2];
      if (-fVar5 <= local_78) {
        if (fVar5 < local_78) {
          fVar9 = (local_78 - fVar5) * (local_78 - fVar5);
          goto LAB_00233fa4;
        }
      }
      else {
        fVar9 = (local_78 + fVar5) * (local_78 + fVar5);
        fVar5 = -fVar5;
LAB_00233fa4:
        local_94 = local_94 + fVar9;
        local_78 = fVar5;
      }
      local_98 = 0.0;
      goto joined_r0x00233d7c;
    }
    if (0.0 < local_88) {
      FUN_00234090(1,2,0,&local_80,&local_90,param_4,&local_98,&local_94);
      goto joined_r0x00233d7c;
    }
    fVar9 = param_4[1];
    local_98 = (fVar9 - local_7c) / local_8c;
    fVar5 = *param_4;
    local_7c = fVar9;
    if (-fVar5 <= local_80) {
      if (fVar5 < local_80) {
        fVar9 = (local_80 - fVar5) * (local_80 - fVar5);
        goto LAB_00233de8;
      }
      goto LAB_00233ebc;
    }
    fVar9 = (local_80 + fVar5) * (local_80 + fVar5);
    fVar5 = -fVar5;
LAB_00233de8:
    fVar9 = fVar9 + 0.0;
    fVar10 = param_4[2];
    fVar11 = -fVar10;
    local_94 = fVar9;
    local_80 = fVar5;
    if (local_78 < fVar11) goto LAB_00233ea0;
LAB_00233e08:
    if (fVar10 < local_78) {
      local_94 = local_94 + (local_78 - fVar10) * (local_78 - fVar10);
      local_78 = fVar10;
    }
joined_r0x00233d7c:
    if ((bool)uVar1) {
LAB_00233fb8:
      local_80 = -local_80;
    }
  }
  if ((bool)uVar2) {
    local_7c = -local_7c;
  }
  if ((bool)uVar3) {
    local_78 = -local_78;
    if (0.0 <= local_98) goto LAB_00234014;
LAB_00233ff4:
    if (param_6 != (float *)0x0) {
      *param_6 = 0.0;
    }
    param_2 = param_1;
  }
  else {
    if (local_98 < 0.0) goto LAB_00233ff4;
LAB_00234014:
    if (local_98 <= 1.0) {
      uVar7 = 0;
      uVar8 = 0;
      if (param_6 != (float *)0x0) {
        *param_6 = local_98;
      }
      if (param_7 != (float *)0x0) {
        *param_7 = local_80;
        param_7[1] = local_7c;
        param_7[2] = local_78;
      }
      goto LAB_00234044;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = 1.0;
    }
  }
  FUN_00234720(param_2,param_3,param_4,param_5,param_7);
  local_94 = extraout_s0;
  uVar7 = extraout_var;
  uVar8 = extraout_var_00;
LAB_00234044:
  auVar6._4_4_ = uVar7;
  auVar6._0_4_ = local_94;
  auVar6._8_8_ = uVar8;
  return auVar6;
}


