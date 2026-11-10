/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00616c00; name: FUN_00616c00
 */


/* WARNING: Removing unreachable block (ram,0x00617658) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00616c00(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  byte *pbVar33;
  int *piVar34;
  undefined1 *puVar35;
  undefined1 local_c4;
  int local_bc;
  ulong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_6c;
  int local_68;
  int iStack_64;
  
  if (((param_1 == (long *)0x0) || (puVar11 = (uint *)param_1[7], puVar11 == (uint *)0x0)) ||
     (*param_1 == 0)) {
    return -2;
  }
  iVar5 = -5;
  iVar25 = -5;
  if (param_2 != 4) {
    iVar25 = 0;
  }
  uVar18 = *puVar11;
joined_r0x00616c70:
  if (0xd < uVar18) {
    return -2;
  }
LAB_00616c74:
  iVar8 = -3;
  switch((long)&switchD_00616c84::switchdataD_02133a7c +
         (long)(int)(&switchD_00616c84::switchdataD_02133a7c)[uVar18]) {
  case 0x616c88:
    if ((int)param_1[1] == 0) {
      return iVar5;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    pbVar16 = (byte *)*param_1;
    *param_1 = (long)(pbVar16 + 1);
    uVar18 = (uint)*pbVar16;
    puVar11[2] = uVar18;
    puVar17 = (undefined4 *)param_1[7];
    if ((uVar18 & 0xf) == 8) {
      if (((uint)puVar17[2] >> 4) + 8 <= (uint)puVar17[7]) {
        *puVar17 = 1;
        iVar5 = iVar25;
        goto switchD_00616c84_caseD_617edc;
      }
      *puVar17 = 0xd;
      pcVar15 = "invalid window size";
    }
    else {
      *puVar17 = 0xd;
      pcVar15 = "unknown compression method";
    }
LAB_00617f50:
    param_1[6] = (long)pcVar15;
    break;
  case 0x616cf4:
    piVar34 = *(int **)(puVar11 + 8);
    puVar35 = *(undefined1 **)(piVar34 + 0x16);
    pbVar16 = (byte *)*param_1;
    uVar18 = *(uint *)(param_1 + 1);
    uVar32 = *(ulong *)(piVar34 + 0xc);
    uVar31 = (ulong)(uint)piVar34[0xb];
    if (puVar35 < *(undefined1 **)(piVar34 + 0x14)) {
      puVar20 = *(undefined1 **)(piVar34 + 0x14) + ~(ulong)puVar35;
    }
    else {
      puVar20 = (undefined1 *)(*(long *)(piVar34 + 0x12) - (long)puVar35);
    }
    local_88 = (ulong *)(piVar34 + 0x12);
    puVar11 = (uint *)(piVar34 + 6);
LAB_00616d60:
    while( true ) {
      uVar19 = (uint)uVar31;
      uVar26 = (uint)puVar20;
      puVar12 = puVar35;
      if (*piVar34 != 2) break;
      if (uVar18 == 0) {
LAB_00617fa8:
        *(ulong *)(piVar34 + 0xc) = uVar32;
        piVar34[0xb] = uVar19;
        lVar9 = *param_1;
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (long)pbVar16;
        param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
LAB_00617fcc:
        *(undefined1 **)(piVar34 + 0x16) = puVar35;
        goto LAB_00618148;
      }
      if (uVar26 == 0) {
        if (puVar35 == (undefined1 *)*local_88) {
          puVar20 = *(undefined1 **)(piVar34 + 0x14);
          puVar12 = *(undefined1 **)(piVar34 + 0x10);
          if (puVar20 != puVar12) {
            uVar26 = ~(uint)puVar12 + (int)puVar20;
            if (puVar20 <= puVar12) {
              uVar26 = (int)puVar35 - (uint)puVar12;
            }
            puVar35 = puVar12;
            if (uVar26 != 0) goto LAB_00616e04;
          }
        }
        *(undefined1 **)(piVar34 + 0x16) = puVar35;
        iVar5 = FUN_006208b0(piVar34,param_1,iVar5);
        puVar35 = *(undefined1 **)(piVar34 + 0x14);
        puVar12 = *(undefined1 **)(piVar34 + 0x16);
        uVar30 = (uint)puVar12;
        if (puVar12 < puVar35) {
          uVar26 = (int)puVar35 + ~uVar30;
          puVar20 = (undefined1 *)*local_88;
        }
        else {
          puVar20 = (undefined1 *)*local_88;
          uVar26 = (int)puVar20 - uVar30;
        }
        if (puVar12 == puVar20) {
          puVar20 = *(undefined1 **)(piVar34 + 0x10);
          if (puVar35 != puVar20) {
            puVar12 = puVar20;
            uVar26 = ~(uint)puVar20 + (int)puVar35;
            if (puVar35 <= puVar20) {
              uVar26 = uVar30 - (uint)puVar20;
            }
          }
        }
        if (uVar26 == 0) goto LAB_00618038;
      }
LAB_00616e04:
      uVar19 = uVar18;
      if ((uint)piVar34[2] <= uVar18) {
        uVar19 = piVar34[2];
      }
      uVar30 = uVar26;
      if (uVar19 <= uVar26) {
        uVar30 = uVar19;
      }
      uVar23 = (ulong)uVar30;
      memcpy(puVar12,pbVar16,uVar23);
      iVar6 = piVar34[2];
      iVar5 = 0;
      pbVar16 = pbVar16 + uVar23;
      uVar18 = uVar18 - uVar30;
      puVar35 = puVar12 + uVar23;
      puVar20 = (undefined1 *)(ulong)(uVar26 - uVar30);
      piVar34[2] = iVar6 - uVar30;
      if (iVar6 - uVar30 == 0) {
        iVar5 = 0;
LAB_00616d4c:
        iVar6 = 0;
        if (piVar34[10] != 0) {
          iVar6 = 7;
        }
        *piVar34 = iVar6;
      }
    }
    iVar6 = iVar5;
    switch(*piVar34) {
    case 0:
      if (uVar19 < 3) {
        if (uVar18 == 0) goto LAB_00617fa8;
        uVar19 = uVar19 + 8;
        iVar5 = 0;
        uVar18 = uVar18 - 1;
        uVar32 = (ulong)*pbVar16 << (uVar31 & 0x3f) | uVar32;
        pbVar16 = pbVar16 + 1;
      }
      piVar34[10] = (uint)uVar32 & 1;
      uVar26 = (uint)uVar32 >> 1 & 3;
      if (uVar26 == 1) {
        puVar17 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x30);
        if (puVar17 == (undefined4 *)0x0) {
          piVar34[2] = 0;
          piVar34[3] = 0;
          goto LAB_0061845c;
        }
        *(undefined2 *)(puVar17 + 6) = 0x509;
        *(undefined **)(puVar17 + 8) = &DAT_021340c0;
        *(undefined **)(puVar17 + 10) = &DAT_021350c0;
        *puVar17 = 0;
        uVar32 = uVar32 >> 3;
        uVar31 = (ulong)(uVar19 - 3);
        *(undefined4 **)(piVar34 + 2) = puVar17;
        *piVar34 = 6;
      }
      else if (uVar26 == 2) {
        uVar32 = uVar32 >> 3;
        uVar31 = (ulong)(uVar19 - 3);
        *piVar34 = 3;
      }
      else {
        if (uVar26 == 3) {
          *piVar34 = 9;
          param_1[6] = (long)"invalid block type";
          *(ulong *)(piVar34 + 0xc) = uVar32 >> 3;
          piVar34[0xb] = uVar19 - 3;
          goto LAB_0061811c;
        }
        uVar26 = uVar19 - 3 & 7;
        uVar32 = (uVar32 >> 3) >> uVar26;
        uVar31 = (ulong)((uVar19 - 3) - uVar26);
        *piVar34 = 1;
      }
      goto LAB_00616d60;
    case 1:
      if (uVar19 < 0x20) {
        if (uVar18 == 0) {
LAB_00618430:
          *(ulong *)(piVar34 + 0xc) = uVar32;
          piVar34[0xb] = uVar19;
          lVar9 = *param_1;
          *(undefined4 *)(param_1 + 1) = 0;
          *param_1 = (long)pbVar16;
          param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
          goto LAB_00617fcc;
        }
        pbVar33 = pbVar16 + 1;
        uVar23 = uVar31 + 8;
        uVar32 = (ulong)*pbVar16 << (uVar31 & 0x3f) | uVar32;
        uVar19 = uVar18 - 1;
        if (uVar23 < 0x20) {
          if (uVar18 - 1 == 0) {
LAB_0061842c:
            uVar19 = (uint)uVar23;
            iVar5 = 0;
            pbVar16 = pbVar33;
            goto LAB_00618430;
          }
          uVar4 = uVar23 & 0x3f;
          uVar23 = uVar31 + 0x10;
          pbVar33 = pbVar16 + 2;
          uVar32 = (ulong)pbVar16[1] << uVar4 | uVar32;
          uVar19 = uVar18 - 2;
          if (uVar23 < 0x20) {
            if (uVar18 - 2 == 0) goto LAB_0061842c;
            uVar4 = uVar23 & 0x3f;
            uVar23 = uVar31 + 0x18;
            pbVar33 = pbVar16 + 3;
            uVar32 = (ulong)pbVar16[2] << uVar4 | uVar32;
            uVar19 = uVar18 - 3;
            if (uVar23 < 0x20) {
              if (uVar18 - 3 == 0) goto LAB_0061842c;
              pbVar33 = pbVar16 + 4;
              uVar32 = (ulong)pbVar16[3] << (uVar23 & 0x3f) | uVar32;
              uVar23 = uVar31 + 0x20;
              uVar19 = uVar18 - 4;
            }
          }
        }
        uVar18 = uVar19;
        uVar19 = (uint)uVar23;
        iVar5 = 0;
        pbVar16 = pbVar33;
      }
      uVar26 = (uint)uVar32;
      if (((ulong)(uVar26 >> 0x10 ^ 0xffffffff) & 0xffff) == (uVar32 & 0xffff)) {
        uVar23 = uVar32 & 0xffff;
        uVar32 = 0;
        uVar31 = 0;
        piVar34[2] = uVar26 & 0xffff;
        if (uVar23 == 0) goto LAB_00616d4c;
        *piVar34 = 2;
        goto LAB_00616d60;
      }
      *piVar34 = 9;
      pcVar15 = "invalid stored block lengths";
LAB_00618110:
      param_1[6] = (long)pcVar15;
switchD_00616ea0_caseD_9:
      *(ulong *)(piVar34 + 0xc) = uVar32;
      piVar34[0xb] = uVar19;
LAB_0061811c:
      pbVar33 = pbVar16 + (param_1[2] - *param_1);
      *(uint *)(param_1 + 1) = uVar18;
      *param_1 = (long)pbVar16;
      iVar5 = -3;
      goto LAB_00618138;
    default:
      *(ulong *)(piVar34 + 0xc) = uVar32;
      piVar34[0xb] = uVar19;
      lVar9 = *param_1;
      *(uint *)(param_1 + 1) = uVar18;
      *param_1 = (long)pbVar16;
      param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
      *(undefined1 **)(piVar34 + 0x16) = puVar35;
      iVar5 = -2;
      goto LAB_00618148;
    case 3:
      if (uVar19 < 0xe) {
        if (uVar18 == 0) goto LAB_00618430;
        pbVar33 = pbVar16 + 1;
        uVar23 = uVar31 + 8;
        uVar32 = (ulong)*pbVar16 << (uVar31 & 0x3f) | uVar32;
        uVar19 = uVar18 - 1;
        if (uVar23 < 0xe) {
          if (uVar18 - 1 == 0) goto LAB_0061842c;
          pbVar33 = pbVar16 + 2;
          uVar32 = (ulong)pbVar16[1] << (uVar23 & 0x3f) | uVar32;
          uVar23 = uVar31 + 0x10;
          uVar19 = uVar18 - 2;
        }
        uVar18 = uVar19;
        uVar19 = (uint)uVar23;
        iVar5 = 0;
        pbVar16 = pbVar33;
      }
      uVar26 = (uint)uVar32;
      piVar34[2] = uVar26 & 0x3fff;
      if ((0x1d < (uVar26 & 0x1f)) || (uVar30 = uVar26 >> 5 & 0x1f, 0x1d < uVar30)) {
        *piVar34 = 9;
        pcVar15 = "too many length or distance symbols";
        goto LAB_00618110;
      }
      lVar9 = (*(code *)param_1[8])(param_1[10],(uVar26 & 0x1f) + uVar30 + 0x102,4);
      *(long *)(piVar34 + 4) = lVar9;
      if (lVar9 != 0) {
        uVar26 = 0;
        uVar32 = uVar32 >> 0xe;
        uVar31 = (ulong)(uVar19 - 0xe);
        piVar34[3] = 0;
        *piVar34 = 4;
        goto LAB_006170dc;
      }
LAB_0061845c:
      *(ulong *)(piVar34 + 0xc) = uVar32;
      piVar34[0xb] = uVar19;
      lVar9 = *param_1;
      *(uint *)(param_1 + 1) = uVar18;
      *param_1 = (long)pbVar16;
      param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
      *(undefined1 **)(piVar34 + 0x16) = puVar35;
      iVar5 = -4;
      goto LAB_00618148;
    case 4:
      uVar26 = piVar34[3];
      if (uVar26 < ((uint)piVar34[2] >> 10) + 4) {
LAB_006170dc:
        do {
          uVar19 = (uint)uVar31;
          pbVar33 = pbVar16;
          if (uVar19 < 3) {
            if (uVar18 == 0) goto LAB_00617fa8;
            pbVar33 = pbVar16 + 1;
            uVar19 = uVar19 + 8;
            iVar5 = 0;
            uVar18 = uVar18 - 1;
            uVar32 = (ulong)*pbVar16 << (uVar31 & 0x3f) | uVar32;
          }
          piVar34[3] = uVar26 + 1;
          uVar30 = (uint)uVar32;
          uVar32 = uVar32 >> 3;
          *(uint *)(*(long *)(piVar34 + 4) + (ulong)(uint)(&DAT_02134030)[uVar26] * 4) = uVar30 & 7;
          uVar26 = piVar34[3];
          uVar31 = (ulong)(uVar19 - 3);
          pbVar16 = pbVar33;
          iVar6 = iVar5;
        } while (uVar26 < ((uint)piVar34[2] >> 10) + 4);
      }
      while (uVar26 < 0x13) {
        uVar19 = (&DAT_02134030)[uVar26];
        piVar34[3] = uVar26 + 1;
        *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)uVar19 * 4) = 0;
        uVar26 = piVar34[3];
      }
      piVar34[6] = 7;
      uVar14 = *(undefined8 *)(piVar34 + 0xe);
      uVar24 = *(undefined8 *)(piVar34 + 4);
      local_78 = 0;
      lVar9 = (*(code *)param_1[8])(param_1[10],0x13,4);
      if (lVar9 == 0) {
        iVar5 = -4;
      }
      else {
        iVar5 = FUN_00620a00(uVar24,0x13,0x13,0,0,piVar34 + 8,puVar11,uVar14,&local_78,lVar9);
        if (iVar5 == -5) {
          pcVar15 = "incomplete dynamic bit lengths tree";
LAB_006183d0:
          param_1[6] = (long)pcVar15;
          (*(code *)param_1[9])(param_1[10],lVar9);
        }
        else {
          if (iVar5 == -3) {
            pcVar15 = "oversubscribed dynamic bit lengths tree";
            goto LAB_006183d0;
          }
          if (*puVar11 == 0) {
            pcVar15 = "incomplete dynamic bit lengths tree";
            goto LAB_006183d0;
          }
          (*(code *)param_1[9])(param_1[10]);
          if (iVar5 == 0) {
            uVar26 = 0;
            piVar34[3] = 0;
            *piVar34 = 5;
            goto LAB_006171fc;
          }
          if (iVar5 != -3) goto LAB_006183f4;
        }
        (*(code *)param_1[9])(param_1[10],*(undefined8 *)(piVar34 + 4));
        iVar5 = -3;
        *piVar34 = 9;
      }
LAB_006183f4:
      *(ulong *)(piVar34 + 0xc) = uVar32;
      piVar34[0xb] = (int)uVar31;
      lVar9 = *param_1;
      *(uint *)(param_1 + 1) = uVar18;
      *param_1 = (long)pbVar16;
      param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
      *(undefined1 **)(piVar34 + 0x16) = puVar35;
      goto LAB_00618148;
    case 5:
      uVar26 = piVar34[3];
LAB_006171fc:
      uVar19 = (uint)uVar31;
      uVar27 = piVar34[2] & 0x1f;
      uVar22 = (uint)piVar34[2] >> 5 & 0x1f;
      uVar30 = uVar27 + uVar22 + 0x102;
      iVar5 = iVar6;
      if (uVar26 < uVar30) {
        do {
          uVar27 = *puVar11;
          uVar19 = (uint)uVar31;
          if (uVar19 < uVar27) {
            iVar5 = iVar6;
            if (uVar18 == 0) goto LAB_00617fa8;
            lVar9 = 0;
            uVar23 = uVar31;
            while( true ) {
              uVar19 = (int)uVar23 + 8;
              uVar31 = (ulong)uVar19;
              uVar32 = (ulong)pbVar16[lVar9] << (uVar23 & 0x3f) | uVar32;
              if (uVar27 <= uVar19) break;
              lVar9 = lVar9 + 1;
              uVar23 = uVar31;
              if (uVar18 == (uint)lVar9) {
                pbVar16 = pbVar16 + lVar9;
                iVar5 = 0;
                goto LAB_00617fa8;
              }
            }
            pbVar16 = pbVar16 + lVar9 + 1;
            iVar6 = 0;
            uVar18 = (uVar18 - 1) - (int)lVar9;
          }
          lVar9 = *(long *)(piVar34 + 8) +
                  (*(uint *)(&DAT_0213407c + (ulong)uVar27 * 4) & uVar32) * 8;
          bVar3 = *(byte *)(lVar9 + 1);
          uVar27 = *(uint *)(lVar9 + 4);
          uVar19 = (uint)uVar31;
          if (uVar27 < 0x10) {
            uVar32 = uVar32 >> ((ulong)bVar3 & 0x3f);
            uVar19 = uVar19 - bVar3;
            piVar34[3] = uVar26 + 1;
            *(uint *)(*(long *)(piVar34 + 4) + (ulong)uVar26 * 4) = uVar27;
            uVar26 = piVar34[3];
          }
          else {
            uVar22 = 7;
            if (uVar27 != 0x12) {
              uVar22 = uVar27 - 0xe;
            }
            uVar21 = uVar22 + bVar3;
            iVar10 = 0xb;
            if (uVar27 != 0x12) {
              iVar10 = 3;
            }
            if (uVar19 < uVar21) {
              iVar5 = iVar6;
              if (uVar18 == 0) goto LAB_00617fa8;
              lVar9 = 0;
              while( true ) {
                uVar19 = (int)uVar31 + 8;
                uVar32 = (ulong)pbVar16[lVar9] << (uVar31 & 0x3f) | uVar32;
                if (uVar21 <= uVar19) break;
                lVar9 = lVar9 + 1;
                uVar31 = (ulong)uVar19;
                if (uVar18 == (uint)lVar9) {
                  iVar5 = 0;
                  pbVar16 = pbVar16 + lVar9;
                  goto LAB_00617fa8;
                }
              }
              pbVar16 = pbVar16 + lVar9 + 1;
              iVar6 = 0;
              uVar18 = (uVar18 - 1) - (int)lVar9;
            }
            uVar32 = uVar32 >> ((ulong)bVar3 & 0x3f);
            uVar1 = *(uint *)(&DAT_0213407c + (ulong)uVar22 * 4) & (uint)uVar32;
            uVar19 = (uVar19 - bVar3) - uVar22;
            uVar21 = uVar1 + iVar10;
            uVar32 = uVar32 >> ((ulong)uVar22 & 0x3f);
            uVar22 = uVar21 + uVar26;
            if ((uVar30 < uVar22) || ((uVar26 == 0 && (uVar27 == 0x10)))) {
              (*(code *)param_1[9])(param_1[10],*(undefined8 *)(piVar34 + 4));
              *piVar34 = 9;
              pcVar15 = "invalid bit length repeat";
              goto LAB_00618110;
            }
            if (uVar27 == 0x10) {
              uVar7 = *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)(uVar26 - 1) * 4);
            }
            else {
              uVar7 = 0;
            }
            if ((uVar21 & 3) != 0) {
              iVar5 = -(uVar21 & 3);
              uVar30 = uVar26;
              do {
                uVar26 = uVar30 + 1;
                uVar21 = uVar21 - 1;
                *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)uVar30 * 4) = uVar7;
                iVar5 = iVar5 + 1;
                uVar30 = uVar26;
              } while (iVar5 != 0);
            }
            if (2 < (iVar10 + uVar1) - 1) {
              do {
                *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)uVar26 * 4) = uVar7;
                *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)(uVar26 + 1) * 4) = uVar7;
                *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)(uVar26 + 2) * 4) = uVar7;
                uVar30 = uVar26 + 3;
                uVar26 = uVar26 + 4;
                uVar21 = uVar21 - 4;
                *(undefined4 *)(*(long *)(piVar34 + 4) + (ulong)uVar30 * 4) = uVar7;
              } while (uVar21 != 0);
            }
            piVar34[3] = uVar22;
            uVar26 = uVar22;
          }
          uVar31 = (ulong)uVar19;
          uVar27 = piVar34[2] & 0x1f;
          uVar22 = (uint)piVar34[2] >> 5 & 0x1f;
          uVar30 = uVar27 + uVar22 + 0x102;
          iVar5 = iVar6;
        } while (uVar26 < uVar30);
      }
      piVar34[8] = 0;
      piVar34[9] = 0;
      local_68 = 9;
      iStack_64 = 0;
      local_6c = 6;
      lVar13 = *(long *)(piVar34 + 4);
      uVar14 = *(undefined8 *)(piVar34 + 0xe);
      lVar9 = (*(code *)param_1[8])(param_1[10],0x120,4);
      if (lVar9 == 0) {
LAB_0061765c:
        uVar14 = 0xfffffffc;
      }
      else {
        iVar6 = FUN_00620a00(lVar13,uVar27 + 0x101,0x101,&DAT_021351c0,&DAT_0213523c,&local_78,
                             &local_68,uVar14,&iStack_64,lVar9);
        if (iVar6 == -4) {
switchD_00617538_caseD_fffffffc:
        }
        else {
          if (iVar6 != -3) {
            if ((iVar6 != 0) || (local_68 == 0)) {
              pcVar15 = "incomplete literal/length tree";
              goto LAB_006175c4;
            }
            local_c4 = (undefined1)local_68;
            iVar6 = FUN_00620a00(lVar13 + (ulong)(uVar27 + 0x101) * 4,uVar22 + 1,0,&DAT_021352b8,
                                 &DAT_02135330,&local_80,&local_6c,uVar14,&iStack_64,lVar9);
            iVar10 = local_6c;
            pcVar15 = "oversubscribed distance tree";
            switch(iVar6) {
            case 0:
              if ((uVar27 != 0) && (local_6c == 0)) goto switchD_00617538_caseD_fffffffe;
              (*(code *)param_1[9])(param_1[10],lVar9);
              goto LAB_00617618;
            case -5:
              pcVar15 = "incomplete distance tree";
              break;
            case -4:
              goto switchD_00617538_caseD_fffffffc;
            case -3:
              break;
            default:
switchD_00617538_caseD_fffffffe:
              pcVar15 = "empty distance tree with lengths";
            }
            iVar6 = -3;
            param_1[6] = (long)pcVar15;
            goto switchD_00617538_caseD_fffffffc;
          }
          pcVar15 = "oversubscribed literal/length tree";
LAB_006175c4:
          iVar6 = -3;
          param_1[6] = (long)pcVar15;
        }
        (*(code *)param_1[9])(param_1[10],lVar9);
        if (iVar6 != -3) {
          if (iVar6 != 0) goto LAB_0061765c;
          local_c4 = (undefined1)local_68;
          iVar10 = local_6c;
LAB_00617618:
          uVar24 = local_80;
          uVar14 = CONCAT44(uStack_74,local_78);
          puVar17 = (undefined4 *)(*(code *)param_1[8])(param_1[10],1,0x30);
          if (puVar17 != (undefined4 *)0x0) {
            *(undefined1 *)(puVar17 + 6) = local_c4;
            *puVar17 = 0;
            *(char *)((long)puVar17 + 0x19) = (char)iVar10;
            *(undefined8 *)(puVar17 + 8) = uVar14;
            *(undefined8 *)(puVar17 + 10) = uVar24;
            *(undefined4 **)(piVar34 + 2) = puVar17;
            (*(code *)param_1[9])(param_1[10],*(undefined8 *)(piVar34 + 4));
            *piVar34 = 6;
switchD_00616ea0_caseD_6:
            *(ulong *)(piVar34 + 0xc) = uVar32;
            piVar34[0xb] = uVar19;
            lVar9 = *param_1;
            *(uint *)(param_1 + 1) = uVar18;
            *param_1 = (long)pbVar16;
            param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
            *(undefined1 **)(piVar34 + 0x16) = puVar35;
            puVar17 = *(undefined4 **)(piVar34 + 2);
            lVar9 = *param_1;
            iVar6 = (int)param_1[1];
            uVar31 = *(ulong *)(piVar34 + 0xc);
            uVar18 = piVar34[0xb];
            if (puVar35 < *(undefined1 **)(piVar34 + 0x14)) {
              puVar20 = *(undefined1 **)(piVar34 + 0x14) + ~(ulong)puVar35;
            }
            else {
              puVar20 = (undefined1 *)(*local_88 - (long)puVar35);
            }
            uVar7 = *puVar17;
LAB_00617744:
            iVar10 = (int)puVar20;
            puVar12 = puVar35;
            switch(uVar7) {
            case 0:
              bVar3 = *(byte *)(puVar17 + 6);
              uVar19 = (uint)bVar3;
              *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar17 + 8);
              puVar17[4] = (uint)bVar3;
              *puVar17 = 1;
              if (bVar3 <= uVar18) goto LAB_006178e4;
LAB_00617794:
              if (iVar6 != 0) {
                lVar13 = 0;
                while( true ) {
                  uVar32 = (ulong)uVar18;
                  uVar18 = uVar18 + 8;
                  uVar31 = (ulong)*(byte *)(lVar9 + lVar13) << (uVar32 & 0x3f) | uVar31;
                  if (uVar19 <= uVar18) break;
                  lVar13 = lVar13 + 1;
                  if (iVar6 == (int)lVar13) goto LAB_00617c7c;
                }
                lVar9 = lVar9 + lVar13 + 1;
                iVar5 = 0;
                iVar6 = (iVar6 + -1) - (int)lVar13;
                goto LAB_006178e4;
              }
              goto LAB_00617c84;
            case 1:
              uVar19 = puVar17[4];
              if (uVar18 < uVar19) goto LAB_00617794;
LAB_006178e4:
              lVar13 = *(long *)(puVar17 + 2);
              uVar32 = (ulong)(*(uint *)(&DAT_0213407c + (ulong)uVar19 * 4) & (uint)uVar31);
              pbVar16 = (byte *)(lVar13 + uVar32 * 8);
              uVar31 = uVar31 >> ((ulong)pbVar16[1] & 0x3f);
              uVar18 = uVar18 - pbVar16[1];
              bVar3 = *pbVar16;
              if (bVar3 == 0) {
                puVar17[2] = *(undefined4 *)(lVar13 + uVar32 * 8 + 4);
                uVar7 = 6;
                *puVar17 = 6;
              }
              else if ((bVar3 >> 4 & 1) == 0) {
                if ((bVar3 >> 6 & 1) == 0) {
                  puVar17[4] = (uint)bVar3;
                  *(byte **)(puVar17 + 2) = pbVar16 + (ulong)*(uint *)(lVar13 + uVar32 * 8 + 4) * 8;
                  uVar7 = 1;
                }
                else {
                  if ((bVar3 >> 5 & 1) == 0) {
                    *puVar17 = 9;
                    pcVar15 = "invalid literal/length code";
                    goto LAB_00617e8c;
                  }
                  uVar7 = 7;
                  *puVar17 = 7;
                }
              }
              else {
                puVar17[2] = bVar3 & 0xf;
                uVar2 = *(undefined4 *)(lVar13 + uVar32 * 8 + 4);
                uVar7 = 2;
                *puVar17 = 2;
                puVar17[1] = uVar2;
              }
              goto LAB_00617744;
            case 2:
              uVar26 = puVar17[2];
              if (uVar18 < uVar26) {
                if (iVar6 == 0) goto LAB_00617c84;
                lVar13 = 0;
                while( true ) {
                  uVar32 = (ulong)uVar18;
                  uVar18 = uVar18 + 8;
                  uVar31 = (ulong)*(byte *)(lVar9 + lVar13) << (uVar32 & 0x3f) | uVar31;
                  if (uVar26 <= uVar18) break;
                  lVar13 = lVar13 + 1;
                  if (iVar6 == (int)lVar13) {
                    iVar5 = 0;
                    lVar9 = lVar9 + lVar13;
                    goto LAB_00617c84;
                  }
                }
                lVar9 = lVar9 + lVar13 + 1;
                iVar5 = 0;
                iVar6 = (iVar6 + -1) - (int)lVar13;
              }
              uVar19 = (uint)*(byte *)((long)puVar17 + 0x19);
              uVar30 = (uint)uVar31;
              uVar18 = uVar18 - uVar26;
              uVar31 = uVar31 >> ((ulong)uVar26 & 0x3f);
              puVar17[1] = puVar17[1] + (*(uint *)(&DAT_0213407c + (ulong)uVar26 * 4) & uVar30);
              *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar17 + 10);
              puVar17[4] = uVar19;
              *puVar17 = 3;
              if (uVar18 < uVar19) {
LAB_006179c0:
                if (iVar6 == 0) goto LAB_00617c84;
                lVar13 = 0;
                while( true ) {
                  uVar32 = (ulong)uVar18;
                  uVar18 = uVar18 + 8;
                  uVar31 = (ulong)*(byte *)(lVar9 + lVar13) << (uVar32 & 0x3f) | uVar31;
                  if (uVar19 <= uVar18) break;
                  lVar13 = lVar13 + 1;
                  if (iVar6 == (int)lVar13) goto LAB_00617c7c;
                }
                lVar9 = lVar9 + lVar13 + 1;
                iVar5 = 0;
                iVar6 = (iVar6 + -1) - (int)lVar13;
              }
              break;
            case 3:
              uVar19 = puVar17[4];
              if (uVar18 < uVar19) goto LAB_006179c0;
              break;
            case 4:
              uVar19 = puVar17[2];
              if (uVar18 < uVar19) {
                if (iVar6 == 0) goto LAB_00617c84;
                lVar13 = 0;
                while( true ) {
                  uVar32 = (ulong)uVar18;
                  uVar18 = uVar18 + 8;
                  uVar31 = (ulong)*(byte *)(lVar9 + lVar13) << (uVar32 & 0x3f) | uVar31;
                  if (uVar19 <= uVar18) break;
                  lVar13 = lVar13 + 1;
                  if (iVar6 == (int)lVar13) goto LAB_00617c7c;
                }
                lVar9 = lVar9 + lVar13 + 1;
                iVar5 = 0;
                iVar6 = (iVar6 + -1) - (int)lVar13;
              }
              uVar26 = (uint)uVar31;
              uVar31 = uVar31 >> ((ulong)uVar19 & 0x3f);
              uVar26 = puVar17[3] + (*(uint *)(&DAT_0213407c + (ulong)uVar19 * 4) & uVar26);
              uVar18 = uVar18 - uVar19;
              *puVar17 = 5;
              puVar17[3] = uVar26;
              puVar12 = *(undefined1 **)(piVar34 + 0x10);
              puVar28 = puVar35 + -(ulong)uVar26;
              if (puVar28 < puVar12) {
LAB_00617ac8:
                do {
                  puVar28 = puVar28 + (*local_88 - (long)puVar12);
                } while (puVar28 < puVar12);
              }
              goto LAB_00617ae0;
            case 5:
              puVar12 = *(undefined1 **)(piVar34 + 0x10);
              puVar28 = puVar35 + -(ulong)(uint)puVar17[3];
              if (puVar28 < puVar12) goto LAB_00617ac8;
LAB_00617ae0:
              iVar10 = puVar17[1];
              while (iVar10 != 0) {
                iVar10 = (int)puVar20;
                puVar12 = puVar35;
                if (iVar10 == 0) {
                  if (puVar35 == (undefined1 *)*local_88) {
                    puVar20 = *(undefined1 **)(piVar34 + 0x14);
                    puVar12 = *(undefined1 **)(piVar34 + 0x10);
                    if (puVar20 != puVar12) {
                      iVar10 = ~(uint)puVar12 + (int)puVar20;
                      if (puVar20 <= puVar12) {
                        iVar10 = (int)puVar35 - (uint)puVar12;
                      }
                      puVar35 = puVar12;
                      if (iVar10 != 0) goto LAB_00617bac;
                    }
                  }
                  *(undefined1 **)(piVar34 + 0x16) = puVar35;
                  uVar7 = FUN_006208b0(piVar34,param_1,iVar5);
                  puVar35 = *(undefined1 **)(piVar34 + 0x14);
                  puVar12 = *(undefined1 **)(piVar34 + 0x16);
                  uVar19 = (uint)puVar12;
                  if (puVar12 < puVar35) {
                    puVar20 = (undefined1 *)*local_88;
                    iVar10 = (int)puVar35 + ~uVar19;
                  }
                  else {
                    puVar20 = (undefined1 *)*local_88;
                    iVar10 = (int)puVar20 - uVar19;
                  }
                  if (puVar12 == puVar20) {
                    puVar20 = *(undefined1 **)(piVar34 + 0x10);
                    if (puVar35 != puVar20) {
                      iVar10 = ~(uint)puVar20 + (int)puVar35;
                      if (puVar35 <= puVar20) {
                        iVar10 = uVar19 - (uint)puVar20;
                      }
                      puVar12 = puVar20;
                    }
                  }
                  if (iVar10 == 0) goto LAB_00617d80;
                }
LAB_00617bac:
                puVar29 = puVar28 + 1;
                puVar20 = (undefined1 *)(ulong)(iVar10 - 1);
                puVar35 = puVar12 + 1;
                *puVar12 = *puVar28;
                if (puVar29 == (undefined1 *)*local_88) {
                  puVar29 = *(undefined1 **)(piVar34 + 0x10);
                }
                iVar5 = 0;
                iVar10 = puVar17[1] + -1;
                puVar17[1] = iVar10;
                puVar28 = puVar29;
              }
              uVar7 = 0;
              *puVar17 = 0;
              goto LAB_00617744;
            case 6:
              if (iVar10 != 0) goto LAB_00617c30;
              if (puVar35 == (undefined1 *)*local_88) {
                puVar20 = *(undefined1 **)(piVar34 + 0x14);
                puVar12 = *(undefined1 **)(piVar34 + 0x10);
                if (puVar20 != puVar12) {
                  iVar10 = ~(uint)puVar12 + (int)puVar20;
                  if (puVar20 <= puVar12) {
                    iVar10 = (int)puVar35 - (uint)puVar12;
                  }
                  puVar35 = puVar12;
                  if (iVar10 != 0) goto LAB_00617c30;
                }
              }
              *(undefined1 **)(piVar34 + 0x16) = puVar35;
              uVar7 = FUN_006208b0(piVar34,param_1,iVar5);
              puVar35 = *(undefined1 **)(piVar34 + 0x14);
              puVar12 = *(undefined1 **)(piVar34 + 0x16);
              uVar19 = (uint)puVar12;
              if (puVar12 < puVar35) {
                puVar20 = (undefined1 *)*local_88;
                iVar10 = (int)puVar35 + ~uVar19;
              }
              else {
                puVar20 = (undefined1 *)*local_88;
                iVar10 = (int)puVar20 - uVar19;
              }
              if (puVar12 == puVar20) {
                puVar20 = *(undefined1 **)(piVar34 + 0x10);
                if (puVar35 != puVar20) {
                  iVar10 = ~(uint)puVar20 + (int)puVar35;
                  if (puVar35 <= puVar20) {
                    iVar10 = uVar19 - (uint)puVar20;
                  }
                  puVar12 = puVar20;
                }
              }
              if (iVar10 == 0) goto LAB_00617d80;
LAB_00617c30:
              uVar7 = 0;
              iVar5 = 0;
              puVar35 = puVar12 + 1;
              *puVar12 = (char)puVar17[2];
              puVar20 = (undefined1 *)(ulong)(iVar10 - 1);
              *puVar17 = 0;
              goto LAB_00617744;
            case 7:
              goto switchD_00617760_caseD_7;
            case 8:
              goto switchD_00617760_caseD_8;
            case 9:
              goto switchD_00617760_caseD_9;
            default:
              *(ulong *)(piVar34 + 0xc) = uVar31;
              piVar34[0xb] = uVar18;
              lVar13 = (lVar9 - *param_1) + param_1[2];
              uVar7 = 0xfffffffe;
              goto LAB_00617d98;
            }
            lVar13 = *(long *)(puVar17 + 2);
            uVar32 = (ulong)(*(uint *)(&DAT_0213407c + (ulong)uVar19 * 4) & (uint)uVar31);
            pbVar16 = (byte *)(lVar13 + uVar32 * 8);
            uVar31 = uVar31 >> ((ulong)pbVar16[1] & 0x3f);
            uVar18 = uVar18 - pbVar16[1];
            bVar3 = *pbVar16;
            if ((bVar3 >> 4 & 1) == 0) {
              if ((bVar3 >> 6 & 1) != 0) {
                *puVar17 = 9;
                pcVar15 = "invalid distance code";
LAB_00617e8c:
                param_1[6] = (long)pcVar15;
switchD_00617760_caseD_9:
                *(ulong *)(piVar34 + 0xc) = uVar31;
                piVar34[0xb] = uVar18;
                lVar13 = *param_1;
                *(int *)(param_1 + 1) = iVar6;
                *param_1 = lVar9;
                param_1[2] = (lVar9 - lVar13) + param_1[2];
                *(undefined1 **)(piVar34 + 0x16) = puVar35;
                uVar7 = 0xfffffffd;
                goto LAB_00617da8;
              }
              puVar17[4] = (uint)bVar3;
              *(byte **)(puVar17 + 2) = pbVar16 + (ulong)*(uint *)(lVar13 + uVar32 * 8 + 4) * 8;
              uVar7 = 3;
            }
            else {
              puVar17[2] = bVar3 & 0xf;
              puVar17[3] = *(undefined4 *)(lVar13 + uVar32 * 8 + 4);
              uVar7 = 4;
              *puVar17 = 4;
            }
            goto LAB_00617744;
          }
          *(ulong *)(piVar34 + 0xc) = uVar32;
          piVar34[0xb] = uVar19;
          *(uint *)(param_1 + 1) = uVar18;
          param_1[2] = (long)(pbVar16 + (param_1[2] - *param_1));
          *param_1 = (long)pbVar16;
          *(undefined1 **)(piVar34 + 0x16) = puVar35;
          iVar8 = FUN_006208b0(piVar34,param_1,0xfffffffc);
          goto LAB_00618154;
        }
        (*(code *)param_1[9])(param_1[10],*(undefined8 *)(piVar34 + 4));
        uVar14 = 0xfffffffd;
        *piVar34 = 9;
      }
      *(ulong *)(piVar34 + 0xc) = uVar32;
      piVar34[0xb] = uVar19;
      lVar9 = *param_1;
      *(uint *)(param_1 + 1) = uVar18;
      *param_1 = (long)pbVar16;
      param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
      *(undefined1 **)(piVar34 + 0x16) = puVar35;
      iVar8 = FUN_006208b0(piVar34,param_1,uVar14);
      goto LAB_00618154;
    case 6:
      goto switchD_00616ea0_caseD_6;
    case 7:
      goto switchD_00616ea0_caseD_7;
    case 8:
      goto switchD_00616ea0_caseD_8;
    case 9:
      goto switchD_00616ea0_caseD_9;
    }
  case 0x617edc:
switchD_00616c84_caseD_617edc:
    if ((int)param_1[1] == 0) {
      return iVar5;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    pbVar16 = (byte *)*param_1;
    *param_1 = (long)(pbVar16 + 1);
    bVar3 = *pbVar16;
    puVar17 = (undefined4 *)param_1[7];
    if (((uint)bVar3 | puVar17[2] << 8) % 0x1f != 0) {
      *puVar17 = 0xd;
      pcVar15 = "incorrect header check";
      goto LAB_00617f50;
    }
    if ((bVar3 >> 5 & 1) != 0) {
      *puVar17 = 2;
      iVar5 = iVar25;
      goto switchD_00616c84_caseD_61850c;
    }
    uVar7 = 7;
    goto LAB_0061820c;
  case 0x61825c:
    goto switchD_00616c84_caseD_61825c;
  case 0x6182a8:
    goto switchD_00616c84_caseD_6182a8;
  case 0x6182f4:
    goto switchD_00616c84_caseD_6182f4;
  case 0x618340:
    goto switchD_00616c84_caseD_618340;
  case 0x6184a8:
    goto switchD_00616c84_caseD_6184a8;
  case 0x6184b0:
    iVar6 = (int)param_1[1];
    iVar25 = iVar5;
    goto joined_r0x006184bc;
  case 0x6184c4:
    *puVar11 = 0xd;
    param_1[6] = (long)"need dictionary";
    *(undefined4 *)(param_1[7] + 8) = 0;
    return -2;
  case 0x6184e0:
    return 1;
  case 0x61850c:
switchD_00616c84_caseD_61850c:
    if ((int)param_1[1] == 0) {
      return iVar5;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    pbVar16 = (byte *)*param_1;
    *param_1 = (long)(pbVar16 + 1);
    *(ulong *)(param_1[7] + 0x10) = (ulong)*pbVar16 << 0x18;
    *(undefined4 *)param_1[7] = 3;
    iVar5 = iVar25;
  case 0x618558:
    if ((int)param_1[1] == 0) {
      return iVar5;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    pbVar16 = (byte *)*param_1;
    *param_1 = (long)(pbVar16 + 1);
    *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16 * 0x10000;
    *(undefined4 *)param_1[7] = 4;
    iVar5 = iVar25;
  case 0x6185a8:
    goto switchD_00616c84_caseD_6185a8;
  }
  goto LAB_00618398;
switchD_00617760_caseD_7:
  *(undefined1 **)(piVar34 + 0x16) = puVar35;
  if (uVar18 < 8) {
  }
  else {
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + -1;
    uVar18 = uVar18 - 8;
  }
  uVar7 = FUN_006208b0(piVar34,param_1,iVar5);
  puVar12 = *(undefined1 **)(piVar34 + 0x16);
  if (*(undefined1 **)(piVar34 + 0x14) == puVar12) {
    *puVar17 = 8;
switchD_00617760_caseD_8:
    *(ulong *)(piVar34 + 0xc) = uVar31;
    piVar34[0xb] = uVar18;
    lVar13 = *param_1;
    *(int *)(param_1 + 1) = iVar6;
    *param_1 = lVar9;
    param_1[2] = (lVar9 - lVar13) + param_1[2];
    *(undefined1 **)(piVar34 + 0x16) = puVar12;
    uVar7 = 1;
  }
  else {
LAB_00617d80:
    *(ulong *)(piVar34 + 0xc) = uVar31;
    piVar34[0xb] = uVar18;
    lVar13 = (lVar9 - *param_1) + param_1[2];
LAB_00617d98:
    *(int *)(param_1 + 1) = iVar6;
    *param_1 = lVar9;
    param_1[2] = lVar13;
    *(undefined1 **)(piVar34 + 0x16) = puVar12;
  }
LAB_00617da8:
  iVar5 = FUN_006208b0(piVar34,param_1,uVar7);
joined_r0x00617dbc:
  if (iVar5 != 1) goto LAB_00618148;
  (*(code *)param_1[9])(param_1[10],*(undefined8 *)(piVar34 + 2),1);
  puVar35 = *(undefined1 **)(piVar34 + 0x16);
  pbVar16 = (byte *)*param_1;
  uVar18 = *(uint *)(param_1 + 1);
  uVar32 = *(ulong *)(piVar34 + 0xc);
  uVar19 = piVar34[0xb];
  uVar31 = (ulong)uVar19;
  if (puVar35 < *(undefined1 **)(piVar34 + 0x14)) {
    puVar20 = *(undefined1 **)(piVar34 + 0x14) + ~(ulong)puVar35;
    iVar5 = piVar34[10];
  }
  else {
    puVar20 = (undefined1 *)(*local_88 - (long)puVar35);
    iVar5 = piVar34[10];
  }
  if (iVar5 != 0) goto LAB_00618008;
  iVar5 = 0;
  *piVar34 = 0;
  goto LAB_00616d60;
LAB_00617c7c:
  iVar5 = 0;
  lVar9 = lVar9 + lVar13;
LAB_00617c84:
  *(ulong *)(piVar34 + 0xc) = uVar31;
  piVar34[0xb] = uVar18;
  lVar13 = *param_1;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = lVar9;
  param_1[2] = (lVar9 - lVar13) + param_1[2];
  *(undefined1 **)(piVar34 + 0x16) = puVar35;
  iVar5 = FUN_006208b0(piVar34,param_1,iVar5);
  goto joined_r0x00617dbc;
LAB_00618008:
  iVar5 = 0;
  *piVar34 = 7;
switchD_00616ea0_caseD_7:
  *(undefined1 **)(piVar34 + 0x16) = puVar35;
  iVar5 = FUN_006208b0(piVar34,param_1,iVar5);
  puVar12 = *(undefined1 **)(piVar34 + 0x16);
  if (*(undefined1 **)(piVar34 + 0x14) == puVar12) {
    *piVar34 = 8;
switchD_00616ea0_caseD_8:
    *(ulong *)(piVar34 + 0xc) = uVar32;
    piVar34[0xb] = uVar19;
    lVar9 = *param_1;
    *(uint *)(param_1 + 1) = uVar18;
    *param_1 = (long)pbVar16;
    param_1[2] = (long)(pbVar16 + (param_1[2] - lVar9));
    *(undefined1 **)(piVar34 + 0x16) = puVar12;
    iVar5 = 1;
  }
  else {
LAB_00618038:
    *(ulong *)(piVar34 + 0xc) = uVar32;
    piVar34[0xb] = uVar19;
    pbVar33 = pbVar16 + (param_1[2] - *param_1);
    *(uint *)(param_1 + 1) = uVar18;
    *param_1 = (long)pbVar16;
    puVar35 = puVar12;
LAB_00618138:
    param_1[2] = (long)pbVar33;
    *(undefined1 **)(piVar34 + 0x16) = puVar35;
  }
LAB_00618148:
  iVar8 = FUN_006208b0(piVar34,param_1,iVar5);
LAB_00618154:
  if (iVar8 == -3) goto LAB_00618228;
  if (iVar8 != 1) {
    if (iVar8 == 0) {
      return iVar25;
    }
switchD_00616c84_caseD_6184a8:
    return iVar8;
  }
  puVar11 = *(uint **)(param_1[7] + 0x20);
  *(undefined8 *)(param_1[7] + 8) = *(undefined8 *)(puVar11 + 0x1a);
  uVar18 = *puVar11;
  if ((uVar18 & 0xfffffffe) == 4) {
    (*(code *)param_1[9])(param_1[10],*(undefined8 *)(puVar11 + 4));
    uVar18 = *puVar11;
  }
  if (uVar18 == 6) {
    (*(code *)param_1[9])(param_1[10],*(undefined8 *)(puVar11 + 2));
  }
  *(undefined8 *)(puVar11 + 0x14) = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(puVar11 + 0x16) = *(undefined8 *)(puVar11 + 0x10);
  *puVar11 = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  if (*(code **)(puVar11 + 0x18) != (code *)0x0) {
    lVar9 = (**(code **)(puVar11 + 0x18))(0,0,0);
    *(long *)(puVar11 + 0x1a) = lVar9;
    param_1[0xc] = lVar9;
  }
  puVar17 = (undefined4 *)param_1[7];
  if (puVar17[6] == 0) {
    *puVar17 = 8;
    iVar5 = iVar25;
switchD_00616c84_caseD_61825c:
    if ((int)param_1[1] == 0) {
      return iVar5;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    param_1[2] = param_1[2] + 1;
    pbVar16 = (byte *)*param_1;
    *param_1 = (long)(pbVar16 + 1);
    *(ulong *)(param_1[7] + 0x10) = (ulong)*pbVar16 << 0x18;
    *(undefined4 *)param_1[7] = 9;
    iVar5 = iVar25;
    goto switchD_00616c84_caseD_6182a8;
  }
  uVar7 = 0xc;
LAB_0061820c:
  *puVar17 = uVar7;
  puVar11 = (uint *)param_1[7];
  uVar18 = *puVar11;
joined_r0x00618220:
  iVar5 = iVar25;
  if (0xd < uVar18) {
    return -2;
  }
  goto LAB_00616c74;
LAB_00618228:
  *(undefined4 *)param_1[7] = 0xd;
  *(undefined4 *)(param_1[7] + 8) = 0;
  puVar11 = (uint *)param_1[7];
  iVar5 = -3;
  uVar18 = *puVar11;
  goto joined_r0x00616c70;
switchD_00616c84_caseD_6182a8:
  if ((int)param_1[1] == 0) {
    return iVar5;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  pbVar16 = (byte *)*param_1;
  *param_1 = (long)(pbVar16 + 1);
  *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16 * 0x10000;
  *(undefined4 *)param_1[7] = 10;
  iVar5 = iVar25;
switchD_00616c84_caseD_6182f4:
  if ((int)param_1[1] == 0) {
    return iVar5;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  pbVar16 = (byte *)*param_1;
  *param_1 = (long)(pbVar16 + 1);
  *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16 * 0x100;
  *(undefined4 *)param_1[7] = 0xb;
  iVar5 = iVar25;
switchD_00616c84_caseD_618340:
  if ((int)param_1[1] == 0) {
    return iVar5;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  pbVar16 = (byte *)*param_1;
  *param_1 = (long)(pbVar16 + 1);
  *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16;
  puVar17 = (undefined4 *)param_1[7];
  if (*(long *)(puVar17 + 2) == *(long *)(puVar17 + 4)) {
    *puVar17 = 0xc;
    return 1;
  }
  *puVar17 = 0xd;
  param_1[6] = (long)"incorrect data check";
LAB_00618398:
  *(undefined4 *)(param_1[7] + 8) = 5;
  puVar11 = (uint *)param_1[7];
  uVar18 = *puVar11;
  goto joined_r0x00618220;
switchD_00616c84_caseD_6185a8:
  if ((int)param_1[1] == 0) {
    return iVar5;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  param_1[2] = param_1[2] + 1;
  pbVar16 = (byte *)*param_1;
  *param_1 = (long)(pbVar16 + 1);
  *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16 * 0x100;
  *(undefined4 *)param_1[7] = 5;
  iVar6 = (int)param_1[1];
joined_r0x006184bc:
  if (iVar6 == 0) {
    return iVar25;
  }
  pbVar16 = (byte *)*param_1;
  *(int *)(param_1 + 1) = iVar6 + -1;
  param_1[2] = param_1[2] + 1;
  *param_1 = (long)(pbVar16 + 1);
  *(ulong *)(param_1[7] + 0x10) = *(long *)(param_1[7] + 0x10) + (ulong)*pbVar16;
  param_1[0xc] = *(long *)((undefined4 *)param_1[7] + 4);
  *(undefined4 *)param_1[7] = 6;
  return 2;
}


