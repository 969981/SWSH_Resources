/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00644bb0; name: FUN_00644bb0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00644bb0(float param_1,long param_2,long param_3,float *param_4,uint param_5,undefined4 *param_6
            ,uint *param_7,uint param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  float *pfVar16;
  undefined8 *puVar17;
  int iVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_1160 [2];
  undefined8 local_1158;
  undefined8 local_1150;
  undefined8 local_1148;
  undefined8 local_1140;
  int local_1138 [1024];
  float *local_138 [5];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x28) < 1) {
    return 0;
  }
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_110 = 0;
  local_108 = 0;
  iVar3 = *(int *)(param_2 + 0x80);
  lVar20 = (long)iVar3;
  iVar15 = iVar3;
  if ((param_8 >> 0x10 & 1) == 0) {
    uVar22 = 0;
  }
  else {
    local_f8 = CONCAT44(param_4[1] + 1.0,*param_4 + 1.0);
    local_f0 = CONCAT44(param_4[3] + 1.0,param_4[2] + 1.0);
    local_110 = (ulong)*param_7;
    if (iVar3 < *(int *)(param_2 + 0x98)) {
      local_138[0] = (float *)(*(long *)(param_2 + 0xb0) + lVar20 * 0x14);
      local_138[0][4] = 0.0;
      local_138[0][0] = 0.0;
      local_138[0][1] = 0.0;
      local_138[0][2] = 0.0;
      local_138[0][3] = 0.0;
      iVar15 = *(int *)(param_2 + 0x80) + 1;
      *(int *)(param_2 + 0x80) = iVar15;
      uVar22 = 1;
    }
    else {
      uVar22 = 1;
      local_138[0] = (float *)0x0;
    }
  }
  if ((param_8 >> 0x11 & 1) != 0) {
    fVar24 = param_4[1];
    fVar30 = param_4[2];
    fVar25 = param_4[3];
    *(float *)(&local_f8 + uVar22 * 2) = *param_4 + 1.0;
    *(float *)((long)&local_f8 + uVar22 * 0x10 + 4) = fVar24 + 1.0;
    *(float *)(&local_f0 + uVar22 * 2) = fVar30 + -1.0;
    *(float *)((long)&local_f0 + uVar22 * 0x10 + 4) = fVar25 + -1.0;
    *(uint *)((ulong)&local_110 | uVar22 << 2) = *param_7;
    if (iVar15 < *(int *)(param_2 + 0x98)) {
      pfVar16 = (float *)(*(long *)(param_2 + 0xb0) + (long)iVar15 * 0x14);
      pfVar16[4] = 0.0;
      pfVar16[0] = 0.0;
      pfVar16[1] = 0.0;
      pfVar16[2] = 0.0;
      pfVar16[3] = 0.0;
      iVar15 = *(int *)(param_2 + 0x80) + 1;
      *(int *)(param_2 + 0x80) = iVar15;
    }
    else {
      pfVar16 = (float *)0x0;
    }
    local_138[uVar22] = pfVar16;
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  if ((param_8 >> 0xf & 1) != 0) {
    fVar24 = param_4[1];
    fVar30 = param_4[2];
    fVar25 = param_4[3];
    *(float *)(&local_f8 + uVar22 * 2) = *param_4 + -1.0;
    *(float *)((long)&local_f8 + uVar22 * 0x10 + 4) = fVar24 + -1.0;
    *(float *)(&local_f0 + uVar22 * 2) = fVar30 + -1.0;
    *(float *)((long)&local_f0 + uVar22 * 0x10 + 4) = fVar25 + -1.0;
    *(uint *)((long)local_138 + uVar22 * 4 + 0x28) = *param_7;
    if (iVar15 < *(int *)(param_2 + 0x98)) {
      pfVar16 = (float *)(*(long *)(param_2 + 0xb0) + (long)iVar15 * 0x14);
      pfVar16[4] = 0.0;
      pfVar16[0] = 0.0;
      pfVar16[1] = 0.0;
      pfVar16[2] = 0.0;
      pfVar16[3] = 0.0;
      iVar15 = *(int *)(param_2 + 0x80) + 1;
      *(int *)(param_2 + 0x80) = iVar15;
    }
    else {
      pfVar16 = (float *)0x0;
    }
    local_138[uVar22] = pfVar16;
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  if ((param_8 >> 0xe & 1) != 0) {
    fVar24 = param_4[1];
    fVar30 = param_4[2];
    fVar25 = param_4[3];
    *(float *)(&local_f8 + uVar22 * 2) = *param_4 + -1.0;
    *(float *)((long)&local_f8 + uVar22 * 0x10 + 4) = fVar24 + -1.0;
    *(float *)(&local_f0 + uVar22 * 2) = fVar30 + 1.0;
    *(float *)((long)&local_f0 + uVar22 * 0x10 + 4) = fVar25 + 1.0;
    *(uint *)((long)local_138 + uVar22 * 4 + 0x28) = *param_7;
    if (iVar15 < *(int *)(param_2 + 0x98)) {
      pfVar16 = (float *)(*(long *)(param_2 + 0xb0) + (long)iVar15 * 0x14);
      pfVar16[4] = 0.0;
      pfVar16[0] = 0.0;
      pfVar16[1] = 0.0;
      pfVar16[2] = 0.0;
      pfVar16[3] = 0.0;
      iVar15 = *(int *)(param_2 + 0x80) + 1;
      *(int *)(param_2 + 0x80) = iVar15;
    }
    else {
      pfVar16 = (float *)0x0;
    }
    local_138[uVar22] = pfVar16;
    uVar22 = (ulong)((int)uVar22 + 1);
  }
  uVar2 = *(undefined8 *)(param_4 + 2);
  (&local_f8)[uVar22 * 2] = *(undefined8 *)param_4;
  (&local_f0)[uVar22 * 2] = uVar2;
  *(undefined4 *)((long)local_138 + uVar22 * 4 + 0x28) = *param_6;
  if (iVar15 < *(int *)(param_2 + 0x98)) {
    pfVar16 = (float *)(*(long *)(param_2 + 0xb0) + (long)iVar15 * 0x14);
    pfVar16[4] = 0.0;
    pfVar16[0] = 0.0;
    pfVar16[1] = 0.0;
    pfVar16[2] = 0.0;
    pfVar16[3] = 0.0;
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
  }
  else {
    pfVar16 = (float *)0x0;
  }
  local_138[uVar22] = pfVar16;
  if ((local_138[0] == (float *)0x0) ||
     ((uVar21 = (uint)uVar22, uVar21 != 0 &&
      ((local_138[1] == (float *)0x0 ||
       ((1 < uVar21 &&
        ((local_138[2] == (float *)0x0 ||
         ((2 < uVar21 &&
          ((local_138[3] == (float *)0x0 || ((3 < uVar21 && (local_138[4] == (float *)0x0)))))))))))
       ))))) {
    return 0;
  }
  if ((param_5 >> 0xd & 1) == 0) {
    FUN_005c4dc0();
  }
  else {
    FUN_005c4e40(param_3,local_1138,0x400);
  }
  iVar15 = uVar21 + 1;
  lVar12 = (**(code **)(**(long **)(param_2 + 0x20) + 0xa0))();
  uVar9 = local_100;
  fVar24 = (float)*(int *)(lVar12 + 8);
  local_1158 = 0;
  local_1150 = 0;
  local_1148 = 0;
  local_1140 = 0;
  local_1160[0] = (float)local_f8;
  local_1160[1] = (float)local_f0 + fVar24;
  if (uVar21 != 0) {
    local_1158 = CONCAT44((float)local_e0 + fVar24,(int)local_e8);
    if (iVar15 != 2) {
      local_1150 = CONCAT44((float)local_d0 + fVar24,(int)local_d8);
      if (iVar15 != 3) {
        local_1148 = CONCAT44((float)local_c0 + fVar24,(int)local_c8);
        if (iVar15 != 4) {
          local_1140 = CONCAT44((float)local_b0 + fVar24,(int)local_b8);
        }
      }
    }
  }
  uVar5 = (undefined4)local_110;
  uVar6 = local_110._4_4_;
  uVar7 = (undefined4)local_108;
  uVar8 = local_108._4_4_;
  fVar25 = param_4[1] - *param_4;
  fVar26 = param_4[3] - param_4[2];
  fVar27 = (float)(int)((fVar24 - (float)*(int *)(lVar12 + 0xc)) * param_1);
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar28 = 0.0;
  lVar12 = 0;
  bVar4 = false;
  iVar18 = local_1138[0];
  fVar24 = 0.0;
  do {
    while (iVar23 = (int)lVar12, iVar18 == 10) {
      if ((param_5 >> 5 & 1) == 0) {
        if (0.0 < fVar30) {
          *local_138[0] = fVar30;
          local_138[0][1] = fVar27;
          local_138[0][2] = local_1160[0];
          local_138[0][3] = fVar29 + local_1160[1];
          if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
            return 0;
          }
          local_138[0] = (float *)(*(long *)(param_2 + 0xb0) + (long)*(int *)(param_2 + 0x80) * 0x14
                                  );
          local_138[0][4] = 0.0;
          local_138[0][0] = 0.0;
          local_138[0][1] = 0.0;
          local_138[0][2] = 0.0;
          local_138[0][3] = 0.0;
          *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
          if (local_138[0] == (float *)0x0) {
            return 0;
          }
          if (uVar21 != 0) {
            *local_138[1] = fVar30;
            local_138[1][1] = fVar27;
            local_138[1][2] = (float)local_1158;
            local_138[1][3] = fVar29 + local_1158._4_4_;
            if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
              return 0;
            }
            local_138[1] = (float *)(*(long *)(param_2 + 0xb0) +
                                    (long)*(int *)(param_2 + 0x80) * 0x14);
            local_138[1][4] = 0.0;
            local_138[1][0] = 0.0;
            local_138[1][1] = 0.0;
            local_138[1][2] = 0.0;
            local_138[1][3] = 0.0;
            *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
            if (local_138[1] == (float *)0x0) {
              return 0;
            }
            if (1 < uVar21) {
              *local_138[2] = fVar30;
              local_138[2][1] = fVar27;
              local_138[2][2] = (float)local_1150;
              local_138[2][3] = fVar29 + local_1150._4_4_;
              if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
                return 0;
              }
              local_138[2] = (float *)(*(long *)(param_2 + 0xb0) +
                                      (long)*(int *)(param_2 + 0x80) * 0x14);
              local_138[2][4] = 0.0;
              local_138[2][0] = 0.0;
              local_138[2][1] = 0.0;
              local_138[2][2] = 0.0;
              local_138[2][3] = 0.0;
              *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
              if (local_138[2] == (float *)0x0) {
                return 0;
              }
              if (2 < uVar21) {
                *local_138[3] = fVar30;
                local_138[3][1] = fVar27;
                local_138[3][2] = (float)local_1148;
                local_138[3][3] = fVar29 + local_1148._4_4_;
                if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
                  return 0;
                }
                local_138[3] = (float *)(*(long *)(param_2 + 0xb0) +
                                        (long)*(int *)(param_2 + 0x80) * 0x14);
                local_138[3][4] = 0.0;
                local_138[3][0] = 0.0;
                local_138[3][1] = 0.0;
                local_138[3][2] = 0.0;
                local_138[3][3] = 0.0;
                *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
                if (local_138[3] == (float *)0x0) {
                  return 0;
                }
                if (3 < uVar21) {
                  *local_138[4] = fVar30;
                  local_138[4][1] = fVar27;
                  local_138[4][2] = (float)local_1140;
                  local_138[4][3] = fVar29 + local_1140._4_4_;
                  if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
                    return 0;
                  }
                  local_138[4] = (float *)(*(long *)(param_2 + 0xb0) +
                                          (long)*(int *)(param_2 + 0x80) * 0x14);
                  local_138[4][4] = 0.0;
                  local_138[4][0] = 0.0;
                  local_138[4][1] = 0.0;
                  local_138[4][2] = 0.0;
                  local_138[4][3] = 0.0;
                  *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
                  if (local_138[4] == (float *)0x0) {
                    return 0;
                  }
                  bVar4 = false;
                  goto LAB_00645440;
                }
              }
            }
          }
          bVar4 = false;
        }
        else {
          bVar4 = (bool)(fVar30 <= 0.0 & bVar4);
        }
LAB_00645440:
        fVar29 = fVar27 + fVar29;
        fVar28 = fVar27 + fVar28;
        fVar30 = 0.0;
        fVar24 = 0.0;
        fVar10 = 0.0;
        if (fVar26 <= fVar27 + fVar29) goto LAB_006457d8;
      }
      lVar12 = (long)iVar23 + 1;
      iVar18 = local_1138[lVar12];
    }
    fVar10 = fVar24;
    if (iVar18 == 0) {
LAB_006457d8:
      fVar30 = fVar10;
      if (!bVar4) goto LAB_006458cc;
      goto LAB_0064580c;
    }
    plVar19 = *(long **)(param_2 + 0x20);
    if (plVar19 == (long *)0x0) {
      return 0;
    }
    plVar13 = (long *)(**(code **)(*plVar19 + 0x28))(plVar19);
    iVar11 = (**(code **)(*plVar13 + 0x70))();
    if (iVar11 != 8) {
      return 0;
    }
    lVar14 = FUN_005ffc90(plVar19,iVar18);
    if (lVar14 == 0) {
      return 0;
    }
    if (((param_5 >> 5 & 1) == 0) && (fVar25 < fVar30 + (float)*(int *)(lVar14 + 0x58))) {
      if (0.0 < fVar30) {
        *local_138[0] = fVar30;
        local_138[0][1] = fVar27;
        local_138[0][2] = local_1160[0];
        local_138[0][3] = fVar29 + local_1160[1];
        if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
          return 0;
        }
        local_138[0] = (float *)(*(long *)(param_2 + 0xb0) + (long)*(int *)(param_2 + 0x80) * 0x14);
        local_138[0][4] = 0.0;
        local_138[0][0] = 0.0;
        local_138[0][1] = 0.0;
        local_138[0][2] = 0.0;
        local_138[0][3] = 0.0;
        *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        if (local_138[0] == (float *)0x0) {
          return 0;
        }
        if (uVar21 != 0) {
          *local_138[1] = fVar30;
          local_138[1][1] = fVar27;
          local_138[1][2] = (float)local_1158;
          local_138[1][3] = fVar29 + local_1158._4_4_;
          if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
            return 0;
          }
          local_138[1] = (float *)(*(long *)(param_2 + 0xb0) + (long)*(int *)(param_2 + 0x80) * 0x14
                                  );
          local_138[1][4] = 0.0;
          local_138[1][0] = 0.0;
          local_138[1][1] = 0.0;
          local_138[1][2] = 0.0;
          local_138[1][3] = 0.0;
          *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
          if (local_138[1] == (float *)0x0) {
            return 0;
          }
          if (1 < uVar21) {
            *local_138[2] = fVar30;
            local_138[2][1] = fVar27;
            local_138[2][2] = (float)local_1150;
            local_138[2][3] = fVar29 + local_1150._4_4_;
            if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
              return 0;
            }
            local_138[2] = (float *)(*(long *)(param_2 + 0xb0) +
                                    (long)*(int *)(param_2 + 0x80) * 0x14);
            local_138[2][4] = 0.0;
            local_138[2][0] = 0.0;
            local_138[2][1] = 0.0;
            local_138[2][2] = 0.0;
            local_138[2][3] = 0.0;
            *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
            if (local_138[2] == (float *)0x0) {
              return 0;
            }
            if (2 < uVar21) {
              *local_138[3] = fVar30;
              local_138[3][1] = fVar27;
              local_138[3][2] = (float)local_1148;
              local_138[3][3] = fVar29 + local_1148._4_4_;
              if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
                return 0;
              }
              local_138[3] = (float *)(*(long *)(param_2 + 0xb0) +
                                      (long)*(int *)(param_2 + 0x80) * 0x14);
              local_138[3][4] = 0.0;
              local_138[3][0] = 0.0;
              local_138[3][1] = 0.0;
              local_138[3][2] = 0.0;
              local_138[3][3] = 0.0;
              *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
              if (local_138[3] == (float *)0x0) {
                return 0;
              }
              if (3 < uVar21) {
                *local_138[4] = fVar30;
                local_138[4][1] = fVar27;
                local_138[4][2] = (float)local_1140;
                local_138[4][3] = fVar29 + local_1140._4_4_;
                if (*(int *)(param_2 + 0x98) <= *(int *)(param_2 + 0x80)) {
                  return 0;
                }
                local_138[4] = (float *)(*(long *)(param_2 + 0xb0) +
                                        (long)*(int *)(param_2 + 0x80) * 0x14);
                local_138[4][4] = 0.0;
                local_138[4][0] = 0.0;
                local_138[4][1] = 0.0;
                local_138[4][2] = 0.0;
                local_138[4][3] = 0.0;
                *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
                if (local_138[4] == (float *)0x0) {
                  return 0;
                }
                bVar4 = false;
                goto LAB_00645468;
              }
            }
          }
        }
        bVar4 = false;
      }
      else {
        bVar4 = (bool)(fVar30 <= 0.0 & bVar4);
      }
LAB_00645468:
      fVar29 = fVar27 + fVar29;
      fVar28 = fVar27 + fVar28;
      fVar30 = 0.0;
      fVar24 = 0.0;
      fVar10 = 0.0;
      if (fVar27 + fVar29 < fVar26) goto LAB_00645488;
LAB_00645800:
      fVar30 = fVar10;
      if (bVar4) goto LAB_0064580c;
      goto LAB_006458cc;
    }
LAB_00645488:
    if ((*(int *)(lVar14 + 0x68) < 1) && (*(int *)(lVar14 + 0x6c) < 1)) {
      lVar12 = (long)iVar23 + 1;
      iVar18 = local_1138[lVar12];
      fVar10 = fVar24;
      if (iVar18 == 0) goto LAB_00645800;
      fVar30 = fVar30 + (float)*(int *)(lVar14 + 0x58);
      fVar24 = fVar30;
    }
    else {
      if (*(int *)(param_2 + 0x2c) < *(int *)(param_2 + 0x40)) {
        puVar17 = (undefined8 *)(*(long *)(param_2 + 0x58) + (long)*(int *)(param_2 + 0x2c) * 0x38);
        puVar17[1] = lVar14;
        *puVar17 = local_138[0];
        *(undefined4 *)(puVar17 + 2) = uVar5;
        *(float *)((long)puVar17 + 0x14) = fVar30 + (float)*(int *)(lVar14 + 0x60);
        puVar1 = (undefined8 *)(lVar14 + 0x80);
        *(float *)(puVar17 + 3) = (float)-*(int *)(lVar14 + 100);
        *(float *)((long)puVar17 + 0x1c) = (float)*(int *)(lVar14 + 0x90);
        *(float *)(puVar17 + 4) = (float)*(int *)(lVar14 + 0x94);
        uVar2 = *puVar1;
        *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(lVar14 + 0x88);
        *(undefined8 *)((long)puVar17 + 0x24) = uVar2;
        lVar12 = (long)*(int *)(param_2 + 0x2c) + 1;
        iVar11 = (int)lVar12;
        *(int *)(param_2 + 0x2c) = iVar11;
        if ((uVar21 != 0) && (iVar11 < *(int *)(param_2 + 0x40))) {
          puVar17 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar12 * 0x38);
          puVar17[1] = lVar14;
          *puVar17 = local_138[1];
          *(undefined4 *)(puVar17 + 2) = uVar6;
          *(float *)((long)puVar17 + 0x14) = fVar30 + (float)*(int *)(lVar14 + 0x60);
          *(float *)(puVar17 + 3) = (float)-*(int *)(lVar14 + 100);
          *(float *)((long)puVar17 + 0x1c) = (float)*(int *)(lVar14 + 0x90);
          *(float *)(puVar17 + 4) = (float)*(int *)(lVar14 + 0x94);
          uVar2 = *puVar1;
          *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(lVar14 + 0x88);
          *(undefined8 *)((long)puVar17 + 0x24) = uVar2;
          lVar12 = (long)*(int *)(param_2 + 0x2c) + 1;
          iVar11 = (int)lVar12;
          *(int *)(param_2 + 0x2c) = iVar11;
          if ((1 < uVar21) && (iVar11 < *(int *)(param_2 + 0x40))) {
            puVar17 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar12 * 0x38);
            puVar17[1] = lVar14;
            *puVar17 = local_138[2];
            *(undefined4 *)(puVar17 + 2) = uVar7;
            *(float *)((long)puVar17 + 0x14) = fVar30 + (float)*(int *)(lVar14 + 0x60);
            *(float *)(puVar17 + 3) = (float)-*(int *)(lVar14 + 100);
            *(float *)((long)puVar17 + 0x1c) = (float)*(int *)(lVar14 + 0x90);
            *(float *)(puVar17 + 4) = (float)*(int *)(lVar14 + 0x94);
            uVar2 = *puVar1;
            *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(lVar14 + 0x88);
            *(undefined8 *)((long)puVar17 + 0x24) = uVar2;
            lVar12 = (long)*(int *)(param_2 + 0x2c) + 1;
            iVar11 = (int)lVar12;
            *(int *)(param_2 + 0x2c) = iVar11;
            if ((2 < uVar21) && (iVar11 < *(int *)(param_2 + 0x40))) {
              puVar17 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar12 * 0x38);
              puVar17[1] = lVar14;
              *puVar17 = local_138[3];
              *(undefined4 *)(puVar17 + 2) = uVar8;
              *(float *)((long)puVar17 + 0x14) = fVar30 + (float)*(int *)(lVar14 + 0x60);
              *(float *)(puVar17 + 3) = (float)-*(int *)(lVar14 + 100);
              *(float *)((long)puVar17 + 0x1c) = (float)*(int *)(lVar14 + 0x90);
              *(float *)(puVar17 + 4) = (float)*(int *)(lVar14 + 0x94);
              uVar2 = *puVar1;
              *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(lVar14 + 0x88);
              *(undefined8 *)((long)puVar17 + 0x24) = uVar2;
              lVar12 = (long)*(int *)(param_2 + 0x2c) + 1;
              iVar11 = (int)lVar12;
              *(int *)(param_2 + 0x2c) = iVar11;
              if ((3 < uVar21) && (iVar11 < *(int *)(param_2 + 0x40))) {
                puVar17 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar12 * 0x38);
                puVar17[1] = lVar14;
                *puVar17 = local_138[4];
                *(undefined4 *)(puVar17 + 2) = uVar9;
                *(float *)((long)puVar17 + 0x14) = fVar30 + (float)*(int *)(lVar14 + 0x60);
                *(float *)(puVar17 + 3) = (float)-*(int *)(lVar14 + 100);
                *(float *)((long)puVar17 + 0x1c) = (float)*(int *)(lVar14 + 0x90);
                *(float *)(puVar17 + 4) = (float)*(int *)(lVar14 + 0x94);
                uVar2 = *puVar1;
                *(undefined8 *)((long)puVar17 + 0x2c) = *(undefined8 *)(lVar14 + 0x88);
                *(undefined8 *)((long)puVar17 + 0x24) = uVar2;
                *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
              }
            }
          }
        }
      }
      fVar30 = fVar30 + (float)*(int *)(lVar14 + 0x58);
      lVar12 = (long)iVar23 + 1;
      iVar23 = local_1138[lVar12];
      if (iVar23 != 0) {
        iVar18 = iVar23;
      }
      iVar11 = 9;
      if (iVar23 != 0) {
        iVar11 = 0;
      }
      bVar4 = true;
      fVar24 = fVar30;
      if ((iVar11 != 0) && (iVar11 != 8)) {
        if (iVar11 != 9) {
          return 0;
        }
LAB_0064580c:
        *local_138[0] = fVar30;
        local_138[0][1] = fVar27;
        local_138[0][2] = local_1160[0];
        local_138[0][3] = fVar29 + local_1160[1];
        if (uVar21 != 0) {
          *local_138[1] = fVar30;
          local_138[1][1] = fVar27;
          local_138[1][2] = (float)local_1158;
          local_138[1][3] = fVar29 + local_1158._4_4_;
          if (iVar15 != 2) {
            *local_138[2] = fVar30;
            local_138[2][1] = fVar27;
            local_138[2][2] = (float)local_1150;
            local_138[2][3] = fVar29 + local_1150._4_4_;
            if (iVar15 != 3) {
              *local_138[3] = fVar30;
              local_138[3][1] = fVar27;
              local_138[3][2] = (float)local_1148;
              local_138[3][3] = fVar29 + local_1148._4_4_;
              if (iVar15 != 4) {
                *local_138[4] = fVar30;
                local_138[4][1] = fVar27;
                local_138[4][2] = (float)local_1140;
                local_138[4][3] = fVar29 + local_1140._4_4_;
              }
            }
          }
        }
        fVar28 = fVar27 + fVar28;
LAB_006458cc:
        fVar24 = 0.0;
        if ((param_5 & 8) != 0) {
          fVar24 = fVar26 - fVar28;
        }
        if ((param_5 & 4) != 0) {
          fVar24 = fVar26 * 0.5 - fVar28 * 0.5;
        }
        if (iVar3 < *(int *)(param_2 + 0x80)) {
          uVar22 = 0;
          lVar12 = lVar20 * 0x14;
          if ((param_5 & 1) == 0) {
            do {
              fVar30 = *(float *)((long)local_1160 +
                                 (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3));
              if ((param_5 >> 1 & 1) != 0) {
                fVar30 = fVar30 + (fVar25 - *(float *)(*(long *)(param_2 + 0xb0) + lVar12));
              }
              lVar14 = *(long *)(param_2 + 0xb0) + lVar12;
              lVar12 = lVar12 + 0x14;
              *(float *)(lVar14 + 8) = fVar30;
              iVar3 = (int)uVar22 + 1;
              *(float *)(lVar14 + 0xc) = fVar24 + *(float *)(lVar14 + 0xc);
              iVar18 = 0;
              if (iVar15 != 0) {
                iVar18 = iVar3 / iVar15;
              }
              lVar20 = lVar20 + 1;
              uVar22 = (ulong)(uint)(iVar3 - iVar18 * iVar15);
            } while (lVar20 < *(int *)(param_2 + 0x80));
          }
          else {
            do {
              pfVar16 = (float *)(*(long *)(param_2 + 0xb0) + lVar12);
              lVar12 = lVar12 + 0x14;
              iVar3 = (int)uVar22 + 1;
              pfVar16[2] = *(float *)((long)local_1160 +
                                     (-(uVar22 >> 0x1f) & 0xfffffff800000000 | uVar22 << 3)) +
                           (fVar25 - *pfVar16) * 0.5;
              pfVar16[3] = fVar24 + pfVar16[3];
              iVar18 = 0;
              if (iVar15 != 0) {
                iVar18 = iVar3 / iVar15;
              }
              uVar22 = (ulong)(uint)(iVar3 - iVar18 * iVar15);
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(int *)(param_2 + 0x80));
          }
        }
        return 1;
      }
    }
  } while( true );
}


