/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00855fa0; name: FUN_00855fa0
 */


undefined8 FUN_00855fa0(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  char *pcVar11;
  int *piVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  puVar5 = PTR_DAT_027171e0;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_00856028:
  pbVar10 = (byte *)*param_2;
  if (pbVar10 < (byte *)param_2[1]) {
    bVar3 = *pbVar10;
    uVar13 = (uint)bVar3;
    if ((char)bVar3 < '\x01') {
      if (((byte *)param_2[1] <= pbVar10 + 1) ||
         (bVar2 = pbVar10[1], -1 < (char)((bVar2 ^ 0x80) & bVar3))) goto LAB_008563f8;
      uVar13 = (uVar13 + (uint)bVar2 * 0x80) - 0x80;
      uVar14 = (ulong)uVar13;
      *(uint *)(param_2 + 4) = uVar13;
      *param_2 = (ulong)(pbVar10 + 2);
    }
    else {
      uVar14 = (ulong)bVar3;
      *(uint *)(param_2 + 4) = uVar13;
      *param_2 = (ulong)(pbVar10 + 1);
    }
LAB_0085605c:
    uVar13 = (uint)(uVar14 >> 3) & 0x1fffffff;
    uVar15 = (uint)uVar14;
    switch(uVar13) {
    case 1:
      if (uVar15 == 8) {
        pbVar10 = (byte *)*param_2;
        if ((pbVar10 < (byte *)param_2[1]) && (-1 < (char)*pbVar10)) {
          uVar14 = (ulong)*pbVar10;
          *param_2 = (ulong)(pbVar10 + 1);
        }
        else {
          auVar17 = FUN_0080d3e0(param_2);
          uVar14 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x50) = uVar14 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        pbVar10 = (byte *)*param_2;
        if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x10)) {
          pbVar10 = pbVar10 + 1;
          *param_2 = (ulong)pbVar10;
          if (pbVar10 < (byte *)param_2[1]) {
LAB_00856110:
            if ((char)*pbVar10 < '\0') goto LAB_008561e0;
            uVar14 = (ulong)*pbVar10;
            *param_2 = (ulong)(pbVar10 + 1);
          }
          else {
LAB_008561e0:
            auVar17 = FUN_0080d3e0(param_2);
            uVar14 = auVar17._0_8_;
            if ((auVar17._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x51) = uVar14 != 0;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
          pbVar10 = (byte *)*param_2;
          if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x18)) {
            pbVar10 = pbVar10 + 1;
            *param_2 = (ulong)pbVar10;
            if (pbVar10 < (byte *)param_2[1]) {
LAB_0085613c:
              if ((char)*pbVar10 < '\0') goto LAB_0085622c;
              uVar14 = (ulong)*pbVar10;
              *param_2 = (ulong)(pbVar10 + 1);
            }
            else {
LAB_0085622c:
              auVar17 = FUN_0080d3e0(param_2);
              uVar14 = auVar17._0_8_;
              if ((auVar17._8_8_ & 1) == 0) {
                return 0;
              }
            }
            *(bool *)(param_1 + 0x52) = uVar14 != 0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
            pbVar10 = (byte *)*param_2;
            if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x38)) {
              pbVar10 = pbVar10 + 1;
              *param_2 = (ulong)pbVar10;
              if (pbVar10 < (byte *)param_2[1]) {
LAB_0085617c:
                if ((char)*pbVar10 < '\0') goto LAB_00856278;
                uVar14 = (ulong)*pbVar10;
                *param_2 = (ulong)(pbVar10 + 1);
              }
              else {
LAB_00856278:
                auVar17 = FUN_0080d3e0(param_2);
                uVar14 = auVar17._0_8_;
                if ((auVar17._8_8_ & 1) == 0) {
                  return 0;
                }
              }
              *(bool *)(param_1 + 0x53) = uVar14 != 0;
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
              pcVar11 = (char *)*param_2;
              if (((1 < (int)param_2[1] - (int)pcVar11) && (*pcVar11 == -0x46)) &&
                 (pcVar11[1] == '>')) {
                *param_2 = (ulong)(pcVar11 + 2);
LAB_008562d0:
                uVar14 = param_2[7];
                *(int *)(param_2 + 7) = (int)uVar14 + -1;
                if ((int)uVar14 < 1) {
                  return 0;
                }
                do {
                  piVar12 = *(int **)(param_1 + 0x48);
                  if (piVar12 == (int *)0x0) {
                    iVar8 = *(int *)(param_1 + 0x44);
LAB_0085632c:
                    FUN_00824290(param_1 + 0x38,iVar8 + 1);
                    piVar12 = *(int **)(param_1 + 0x48);
                    iVar8 = *piVar12;
LAB_00856340:
                    *piVar12 = iVar8 + 1;
                    uVar16 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x38));
                    iVar8 = *(int *)(param_1 + 0x40);
                    *(int *)(param_1 + 0x40) = iVar8 + 1;
                    *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 8 + 8) = uVar16;
                  }
                  else {
                    iVar4 = *(int *)(param_1 + 0x40);
                    iVar8 = *piVar12;
                    if (iVar8 <= iVar4) {
                      if (iVar8 == *(int *)(param_1 + 0x44)) goto LAB_0085632c;
                      goto LAB_00856340;
                    }
                    *(int *)(param_1 + 0x40) = iVar4 + 1;
                    uVar16 = *(undefined8 *)(piVar12 + (long)iVar4 * 2 + 2);
                  }
                  uVar7 = FUN_0080cab0(param_2);
                  uVar14 = FUN_0085b9d0(uVar16,param_2);
                  if ((uVar14 & 1) == 0) {
                    return 0;
                  }
                  uVar14 = FUN_0080cc00(param_2,uVar7);
                  if ((uVar14 & 1) == 0) {
                    return 0;
                  }
                  pcVar11 = (char *)*param_2;
                  if ((((int)(char *)param_2[1] - (int)pcVar11 < 2) || (*pcVar11 != -0x46)) ||
                     (pcVar11[1] != '>')) goto LAB_008563c4;
                  *param_2 = (ulong)(pcVar11 + 2);
                } while( true );
              }
            }
          }
        }
        goto LAB_00856028;
      }
      break;
    case 2:
      if (uVar15 == 0x10) {
        pbVar10 = (byte *)*param_2;
        if (pbVar10 < (byte *)param_2[1]) goto LAB_00856110;
        goto LAB_008561e0;
      }
      break;
    case 3:
      if (uVar15 == 0x18) {
        pbVar10 = (byte *)*param_2;
        if (pbVar10 < (byte *)param_2[1]) goto LAB_0085613c;
        goto LAB_0085622c;
      }
      break;
    case 4:
    case 5:
    case 6:
      goto switchD_00856074_caseD_4;
    case 7:
      if (uVar15 == 0x38) {
        pbVar10 = (byte *)*param_2;
        if (pbVar10 < (byte *)param_2[1]) goto LAB_0085617c;
        goto LAB_00856278;
      }
      break;
    default:
      if (uVar13 != 999) goto switchD_00856074_caseD_4;
      if (uVar15 == 0x1f3a) goto LAB_008562d0;
    }
    if ((uVar15 == 0) || ((uVar15 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar13 = 0;
LAB_008563f8:
    iVar8 = FUN_0080d8c0(param_2,uVar13);
    bVar6 = iVar8 - 1U < 0x3fff;
    uVar14 = (ulong)CONCAT14(bVar6,iVar8);
    *(int *)(param_2 + 4) = iVar8;
    if (bVar6) goto LAB_0085605c;
switchD_00856074_caseD_4:
    if ((uint)uVar14 == 0) {
      return 1;
    }
    if (((uint)uVar14 & 7) == 4) {
      return 1;
    }
  }
  if (((uint)(uVar14 >> 6) & 0x3ffffff) < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar9 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar9 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar14 = FUN_00810550(param_2,uVar14 & 0xffffffff,uVar9);
  }
  else {
    uVar16 = *(undefined8 *)puVar5;
    if ((*puVar1 & 1) == 0) {
      uVar9 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar9 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar14 = FUN_0083fc30(param_1 + 8,uVar14 & 0xffffffff,param_2,uVar16,uVar9);
  }
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  goto LAB_00856028;
LAB_008563c4:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar11 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00856028;
}


