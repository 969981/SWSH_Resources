/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00250940; name: FUN_00250940
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00250940(long param_1,int param_2,int param_3,undefined8 param_4,undefined4 *param_5,
                  int *param_6,ulong param_7,uint param_8,byte param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  float *pfVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  short sVar21;
  float fVar22;
  uint local_104;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e0 [32];
  
  lVar14 = *(long *)(param_1 + 0x10);
  iVar12 = *(int *)(lVar14 + 0x3c);
  uVar5 = param_3 + iVar12 * param_2;
  local_104 = iVar12 + -2 == param_3 & param_8;
  uVar2 = uVar5 * 3;
  uVar17 = (uint)(*(int *)(lVar14 + 0x38) + -2 == param_2);
  uVar3 = uVar17 & param_8;
  uVar17 = uVar17 & local_104;
  uVar9 = uVar3;
  if ((param_7 & 1) == 0) {
    uVar13 = 0;
    if ((param_8 & 1) != 0) {
      uVar7 = true;
      uVar19 = 1;
      goto LAB_00250b24;
    }
    local_104 = 0;
    uVar9 = 0;
    uVar7 = false;
    uVar19 = 0;
    uVar18 = 0;
LAB_00250bc4:
    if ((uVar19 & 1) == 0) goto joined_r0x0025110c;
  }
  else {
    bVar4 = *(byte *)(*(long *)(lVar14 + 0x50) + (ulong)(uVar5 & 0x7fffffff) * 4 + 3);
    uVar10 = param_8 & 1;
    if (((~*(byte *)(*(long *)(lVar14 + 0x50) + (ulong)(uVar5 & 0x7fffffff) * 4 + 2) & 0x7f) == 0)
       || (uVar13 = FUN_002513c0(param_1,uVar5 * 2,param_2,param_3,param_4,local_e0),
          (uVar13 & 1) == 0)) {
      uVar13 = 0;
      uVar19 = param_8;
    }
    else {
      *param_5 = local_e0[0];
      param_5[1] = local_e0[1];
      param_5[2] = local_e0[2];
      if (param_6 == (int *)0x0) {
        uVar10 = 0;
        uVar13 = 1;
        uVar19 = 0;
        uVar9 = 0;
      }
      else {
        uVar10 = 0;
        uVar19 = 0;
        *param_6 = uVar5 * 2;
        uVar13 = 1;
        uVar9 = 0;
      }
    }
    if ((bVar4 & 0x7f) != 0x7f) {
      uVar1 = uVar5 * 2 | 1;
      uVar18 = FUN_002513c0(param_1,uVar1,param_2,param_3,param_4,local_e0);
      if ((uVar18 & 1) != 0) {
        puVar15 = param_5 + uVar13 * 3;
        *puVar15 = local_e0[0];
        puVar15[1] = local_e0[1];
        puVar15[2] = local_e0[2];
        if (param_6 != (int *)0x0) {
          param_6[uVar13] = uVar1;
        }
        uVar17 = 0;
        uVar10 = 0;
        uVar13 = (ulong)((int)uVar13 + 1);
        local_104 = 0;
      }
    }
    uVar7 = uVar10 != 0;
    if ((param_8 & 1) == 0) {
      return uVar13;
    }
    if (((int)uVar13 != 0) && ((param_9 & 1) != 0)) {
      return uVar13;
    }
    iVar12 = *(int *)(*(long *)(param_1 + 0x10) + 0x3c);
LAB_00250b24:
    fVar20 = (float)FUN_002515b0(param_1,uVar2,uVar5,param_2,param_3,param_4,&local_f0);
    if (0.0 < fVar20) {
      if (1.0 <= fVar20) {
        if (local_104 != 0) {
          uVar10 = FUN_0024fdc0(*(undefined8 *)(param_1 + 0x10),uVar5 + 1,param_2,param_3 + 1,
                                local_e0);
          if (uVar10 != 0) {
            uVar18 = 0;
            do {
              iVar8 = FUN_002519e0(param_1,local_e0[uVar18 * 4],local_e0[uVar18 * 4 + 1],
                                   local_e0[uVar18 * 4 + 2],local_e0[uVar18 * 4 + 3]);
              if (iVar8 != -1) {
                puVar15 = param_5 + uVar13 * 3;
                *puVar15 = local_f0;
                puVar15[1] = uStack_ec;
                puVar15[2] = local_e8;
                if (param_6 != (int *)0x0) {
                  param_6[uVar13] = param_3 + 1 + iVar12 * param_2 | 0x80000000;
                }
                goto LAB_00250fb4;
              }
              uVar1 = (int)uVar18 + 2;
              uVar18 = (ulong)uVar1;
            } while (uVar1 < uVar10);
          }
        }
      }
      else {
        iVar8 = FUN_00251810(param_1,uVar2);
        if (iVar8 != -1) {
          puVar15 = param_5 + uVar13 * 3;
          *puVar15 = local_f0;
          puVar15[1] = uStack_ec;
          puVar15[2] = local_e8;
          if (param_6 != (int *)0x0) {
            param_6[uVar13] = uVar2 | 0x40000000;
          }
LAB_00250fb4:
          uVar13 = (ulong)((int)uVar13 + 1);
        }
      }
      uVar6 = (ulong)uVar19;
      uVar18 = uVar13;
    }
    else {
      if (((uVar19 & 1) != 0) &&
         (uVar10 = FUN_0024fdc0(*(undefined8 *)(param_1 + 0x10),uVar5,param_2,param_3,local_e0),
         uVar10 != 0)) {
        uVar18 = 0;
        do {
          iVar8 = FUN_002519e0(param_1,local_e0[uVar18 * 4],local_e0[uVar18 * 4 + 1],
                               local_e0[uVar18 * 4 + 2],local_e0[uVar18 * 4 + 3]);
          if (iVar8 != -1) {
            puVar15 = param_5 + uVar13 * 3;
            *puVar15 = local_f0;
            puVar15[1] = uStack_ec;
            puVar15[2] = local_e8;
            if (param_6 != (int *)0x0) {
              param_6[uVar13] = param_3 + iVar12 * param_2 | 0x80000000;
            }
            uVar13 = (ulong)((int)uVar13 + 1);
            break;
          }
          uVar1 = (int)uVar18 + 2;
          uVar18 = (ulong)uVar1;
        } while (uVar1 < uVar10);
      }
      uVar6 = 0;
      uVar18 = uVar13;
    }
    uVar13 = uVar6;
    if (uVar9 == 0) goto LAB_00250bc4;
  }
  uVar10 = uVar2 + 2;
  fVar20 = (float)FUN_002515b0(param_1,uVar10,uVar5,param_2,param_3,param_4,&local_f0);
  if (fVar20 <= 0.0) {
    if (((uVar13 & 1) != 0) &&
       (uVar9 = FUN_0024fdc0(*(undefined8 *)(param_1 + 0x10),uVar5,param_2,param_3,local_e0),
       uVar9 != 0)) {
      uVar13 = 0;
      do {
        iVar8 = FUN_002519e0(param_1,local_e0[uVar13 * 4],local_e0[uVar13 * 4 + 1],
                             local_e0[uVar13 * 4 + 2],local_e0[uVar13 * 4 + 3]);
        if (iVar8 != -1) {
          puVar15 = param_5 + uVar18 * 3;
          *puVar15 = local_f0;
          puVar15[1] = uStack_ec;
          puVar15[2] = local_e8;
          iVar8 = param_2;
          goto joined_r0x00251338;
        }
        uVar19 = (int)uVar13 + 2;
        uVar13 = (ulong)uVar19;
      } while (uVar19 < uVar9);
    }
  }
  else if (1.0 <= fVar20) {
    if (uVar9 != 0) {
      iVar8 = param_2 + 1;
      uVar9 = FUN_0024fdc0(*(undefined8 *)(param_1 + 0x10),iVar12 + uVar5,iVar8,param_3,local_e0);
      if (uVar9 != 0) {
        uVar13 = 0;
LAB_00251158:
        iVar11 = FUN_002519e0(param_1,local_e0[uVar13 * 4],local_e0[uVar13 * 4 + 1],
                              local_e0[uVar13 * 4 + 2],local_e0[uVar13 * 4 + 3]);
        if (iVar11 == -1) goto code_r0x00251174;
        puVar15 = param_5 + uVar18 * 3;
        *puVar15 = local_f0;
        puVar15[1] = uStack_ec;
        puVar15[2] = local_e8;
joined_r0x00251338:
        if (param_6 != (int *)0x0) {
          param_6[uVar18] = param_3 + iVar12 * iVar8 | 0x80000000;
        }
        uVar18 = (ulong)((int)uVar18 + 1);
      }
    }
  }
  else if (((uVar19 & 1) != 0) && (iVar8 = FUN_00251810(param_1,uVar10), iVar8 != -1)) {
    puVar15 = param_5 + uVar18 * 3;
    *puVar15 = local_f0;
    puVar15[1] = uStack_ec;
    puVar15[2] = local_e8;
    if (param_6 != (int *)0x0) {
      param_6[uVar18] = uVar10 | 0x40000000;
    }
    uVar18 = (ulong)((int)uVar18 + 1);
  }
joined_r0x0025110c:
  if (uVar3 != 0) {
    uVar3 = iVar12 * 3 + uVar2;
    fVar20 = (float)FUN_002515b0(param_1,uVar3,iVar12 + uVar5,param_2 + 1,param_3,param_4,local_e0);
    if (((0.0 < fVar20) && (fVar20 < 1.0)) && (iVar8 = FUN_00251810(param_1,uVar3), iVar8 != -1)) {
      puVar15 = param_5 + uVar18 * 3;
      *puVar15 = local_e0[0];
      puVar15[1] = local_e0[1];
      puVar15[2] = local_e0[2];
      if (param_6 != (int *)0x0) {
        param_6[uVar18] = uVar3 | 0x40000000;
      }
      uVar18 = (ulong)((int)uVar18 + 1);
    }
  }
  if (local_104 != 0) {
    uVar3 = uVar2 + 5;
    fVar20 = (float)FUN_002515b0(param_1,uVar3,uVar5 + 1,param_2,param_3 + 1,param_4,local_e0);
    if (((0.0 < fVar20) && (fVar20 < 1.0)) && (iVar8 = FUN_00251810(param_1,uVar3), iVar8 != -1)) {
      puVar15 = param_5 + uVar18 * 3;
      *puVar15 = local_e0[0];
      puVar15[1] = local_e0[1];
      puVar15[2] = local_e0[2];
      if (param_6 != (int *)0x0) {
        param_6[uVar18] = uVar3 | 0x40000000;
      }
      uVar18 = (ulong)((int)uVar18 + 1);
    }
  }
  if (uVar17 != 0) {
    uVar3 = param_2 + 1;
    uVar17 = param_3 + 1;
    uVar9 = FUN_0024fdc0(*(undefined8 *)(param_1 + 0x10),uVar5 + 1 + iVar12,uVar3,uVar17,local_e0);
    if (uVar9 != 0) {
      uVar13 = 0;
      do {
        iVar8 = FUN_002519e0(param_1,local_e0[uVar13 * 4],local_e0[uVar13 * 4 + 1],
                             local_e0[uVar13 * 4 + 2],local_e0[uVar13 * 4 + 3]);
        if (iVar8 != -1) {
          lVar14 = *(long *)(param_1 + 0x18);
          fVar20 = *(float *)(lVar14 + 0x10);
          sVar21 = *(short *)(*(long *)(*(long *)(param_1 + 0x10) + 0x50) +
                             (ulong)(uVar5 + 1 + *(int *)(*(long *)(param_1 + 0x10) + 0x3c)) * 4);
          pfVar16 = (float *)(param_5 + uVar18 * 3);
          fVar22 = *(float *)(lVar14 + 0x18);
          *pfVar16 = *(float *)(lVar14 + 0x14) * (float)uVar3;
          pfVar16[1] = fVar20 * (float)(int)sVar21;
          pfVar16[2] = fVar22 * (float)uVar17;
          if (param_6 != (int *)0x0) {
            param_6[uVar18] = uVar17 + iVar12 * uVar3 | 0x80000000;
          }
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        uVar19 = (int)uVar13 + 2;
        uVar13 = (ulong)uVar19;
      } while (uVar19 < uVar9);
    }
  }
  if ((bool)uVar7) {
    uVar2 = uVar2 + 1;
    iVar12 = FUN_00251810(param_1,uVar2);
    if (((iVar12 != -1) &&
        (fVar20 = (float)FUN_002515b0(param_1,uVar2,uVar5,param_2,param_3,param_4,local_e0),
        0.0 < fVar20)) && (fVar20 < 1.0)) {
      param_5 = param_5 + uVar18 * 3;
      *param_5 = local_e0[0];
      param_5[1] = local_e0[1];
      param_5[2] = local_e0[2];
      if (param_6 != (int *)0x0) {
        param_6[uVar18] = uVar2 | 0x40000000;
      }
      uVar18 = (ulong)((int)uVar18 + 1);
    }
  }
  return uVar18;
code_r0x00251174:
  uVar19 = (int)uVar13 + 2;
  uVar13 = (ulong)uVar19;
  if (uVar9 <= uVar19) goto joined_r0x0025110c;
  goto LAB_00251158;
}


