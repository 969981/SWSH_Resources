/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00856bf0; name: FUN_00856bf0
 */


undefined8 FUN_00856bf0(long param_1,ulong *param_2)

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
  byte *pbVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  puVar5 = PTR_DAT_027171e8;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_00856c34:
  pbVar10 = (byte *)*param_2;
  if ((byte *)param_2[1] <= pbVar10) {
    uVar13 = 0;
LAB_00857128:
    iVar8 = FUN_0080d8c0(param_2,uVar13);
    bVar6 = iVar8 - 1U < 0x3fff;
    uVar14 = (ulong)CONCAT14(bVar6,iVar8);
    *(int *)(param_2 + 4) = iVar8;
    if (bVar6) goto LAB_00856c68;
    goto switchD_00856c80_caseD_4;
  }
  bVar3 = *pbVar10;
  uVar13 = (uint)bVar3;
  if ((char)bVar3 < '\x01') {
    if (((byte *)param_2[1] <= pbVar10 + 1) ||
       (bVar2 = pbVar10[1], -1 < (char)((bVar2 ^ 0x80) & bVar3))) goto LAB_00857128;
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
LAB_00856c68:
  uVar13 = (uint)(uVar14 >> 3) & 0x1fffffff;
  uVar16 = (uint)uVar14;
  switch(uVar13) {
  case 1:
    break;
  case 2:
    if (uVar16 != 0x10) goto joined_r0x00856d5c;
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < (byte *)param_2[1]) goto LAB_00856cf4;
    goto LAB_00856d78;
  case 3:
    if (uVar16 != 0x18) goto joined_r0x00856d5c;
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < (byte *)param_2[1]) goto LAB_00856dc4;
    goto LAB_00856df0;
  case 5:
    if (uVar16 != 0x28) goto joined_r0x00856d5c;
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < (byte *)param_2[1]) goto LAB_00856e3c;
    goto LAB_00856e68;
  case 6:
    if (uVar16 != 0x30) goto joined_r0x00856d5c;
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < (byte *)param_2[1]) goto LAB_00856ed0;
LAB_00856eb4:
    uVar14 = 0;
LAB_008570e8:
    uVar14 = FUN_0080d5d0(param_2,uVar14);
    uVar13 = (uint)uVar14;
    if ((long)uVar14 < 0) {
      return 0;
    }
joined_r0x00857100:
    if (uVar13 < 3) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
      *(int *)(param_1 + 0x3c) = (int)uVar14;
      pbVar10 = (byte *)*param_2;
      pbVar15 = (byte *)param_2[1];
      if (pbVar15 <= pbVar10) goto LAB_00856c34;
    }
    else {
      if ((*puVar1 & 1) == 0) {
        uVar14 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar14 = *puVar1 & 0xfffffffffffffffe;
      }
      FUN_0080fc40(uVar14,6,(long)(int)uVar13);
      pbVar10 = (byte *)*param_2;
      pbVar15 = (byte *)param_2[1];
      if (pbVar15 <= pbVar10) goto LAB_00856c34;
    }
    if (*pbVar10 == 0x50) {
      pbVar10 = pbVar10 + 1;
      *param_2 = (ulong)pbVar10;
      if (pbVar15 <= pbVar10) goto LAB_00856f6c;
LAB_00856f2c:
      if ((char)*pbVar10 < '\0') goto LAB_00856f6c;
      uVar14 = (ulong)*pbVar10;
      *param_2 = (ulong)(pbVar10 + 1);
      goto LAB_00856f78;
    }
    goto LAB_00856c34;
  case 10:
    if (uVar16 != 0x50) goto joined_r0x00856d5c;
    pbVar10 = (byte *)*param_2;
    if (pbVar10 < (byte *)param_2[1]) goto LAB_00856f2c;
LAB_00856f6c:
    auVar18 = FUN_0080d3e0(param_2);
    uVar14 = auVar18._0_8_;
    if ((auVar18._8_8_ & 1) == 0) {
      return 0;
    }
LAB_00856f78:
    *(bool *)(param_1 + 0x5b) = uVar14 != 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
    pcVar11 = (char *)*param_2;
    if (((1 < (int)param_2[1] - (int)pcVar11) && (*pcVar11 == -0x46)) && (pcVar11[1] == '>')) {
      *param_2 = (ulong)(pcVar11 + 2);
LAB_00856fc4:
      uVar14 = param_2[7];
      *(int *)(param_2 + 7) = (int)uVar14 + -1;
      if ((int)uVar14 < 1) {
        return 0;
      }
      do {
        piVar12 = *(int **)(param_1 + 0x50);
        if (piVar12 == (int *)0x0) {
          iVar8 = *(int *)(param_1 + 0x4c);
LAB_00857020:
          FUN_00824290(param_1 + 0x40,iVar8 + 1);
          piVar12 = *(int **)(param_1 + 0x50);
          iVar8 = *piVar12;
LAB_00857034:
          *piVar12 = iVar8 + 1;
          uVar17 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x40));
          iVar8 = *(int *)(param_1 + 0x48);
          *(int *)(param_1 + 0x48) = iVar8 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar8 * 8 + 8) = uVar17;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x48);
          iVar8 = *piVar12;
          if (iVar8 <= iVar4) {
            if (iVar8 == *(int *)(param_1 + 0x4c)) goto LAB_00857020;
            goto LAB_00857034;
          }
          *(int *)(param_1 + 0x48) = iVar4 + 1;
          uVar17 = *(undefined8 *)(piVar12 + (long)iVar4 * 2 + 2);
        }
        uVar7 = FUN_0080cab0(param_2);
        uVar14 = FUN_0085b9d0(uVar17,param_2);
        if ((uVar14 & 1) == 0) {
          return 0;
        }
        uVar14 = FUN_0080cc00(param_2,uVar7);
        if ((uVar14 & 1) == 0) {
          return 0;
        }
        pcVar11 = (char *)*param_2;
        if ((((int)(char *)param_2[1] - (int)pcVar11 < 2) || (*pcVar11 != -0x46)) ||
           (pcVar11[1] != '>')) goto LAB_008570b8;
        *param_2 = (ulong)(pcVar11 + 2);
      } while( true );
    }
    goto LAB_00856c34;
  default:
    if (uVar13 == 999) {
      if (uVar16 == 0x1f3a) goto LAB_00856fc4;
      goto joined_r0x00856d5c;
    }
  case 4:
  case 7:
  case 8:
  case 9:
switchD_00856c80_caseD_4:
    if ((uint)uVar14 == 0) {
      return 1;
    }
    if (((uint)uVar14 & 7) == 4) {
      return 1;
    }
LAB_00857164:
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
      uVar17 = *(undefined8 *)puVar5;
      if ((*puVar1 & 1) == 0) {
        uVar9 = FUN_009bb7d0(puVar1);
      }
      else {
        uVar9 = *puVar1 & 0xfffffffffffffffe;
      }
      uVar14 = FUN_0083fc30(param_1 + 8,uVar14 & 0xffffffff,param_2,uVar17,uVar9);
    }
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    goto LAB_00856c34;
  }
  if (uVar16 != 8) {
joined_r0x00856d5c:
    if ((uVar16 == 0) || ((uVar16 & 7) == 4)) {
      return 1;
    }
    goto LAB_00857164;
  }
  pbVar10 = (byte *)*param_2;
  if (pbVar10 < (byte *)param_2[1]) {
    uVar13 = (uint)*pbVar10;
    uVar14 = (ulong)uVar13;
    if ((char)*pbVar10 < '\0') goto LAB_008571e0;
    *param_2 = (ulong)(pbVar10 + 1);
    if (2 < uVar13) goto LAB_00856cb4;
LAB_008571fc:
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(int *)(param_1 + 0x38) = (int)uVar14;
    pbVar10 = (byte *)*param_2;
    pbVar15 = (byte *)param_2[1];
    if (pbVar15 <= pbVar10) goto LAB_00856c34;
  }
  else {
    uVar14 = 0;
LAB_008571e0:
    uVar14 = FUN_0080d5d0(param_2,uVar14);
    uVar13 = (uint)uVar14;
    if ((long)uVar14 < 0) {
      return 0;
    }
    if (uVar13 < 3) goto LAB_008571fc;
LAB_00856cb4:
    if ((*puVar1 & 1) == 0) {
      uVar14 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar14 = *puVar1 & 0xfffffffffffffffe;
    }
    FUN_0080fc40(uVar14,1,(long)(int)uVar13);
    pbVar10 = (byte *)*param_2;
    pbVar15 = (byte *)param_2[1];
    if (pbVar15 <= pbVar10) goto LAB_00856c34;
  }
  if (*pbVar10 == 0x10) {
    pbVar10 = pbVar10 + 1;
    *param_2 = (ulong)pbVar10;
    if (pbVar10 < pbVar15) {
LAB_00856cf4:
      if ((char)*pbVar10 < '\0') goto LAB_00856d78;
      uVar14 = (ulong)*pbVar10;
      *param_2 = (ulong)(pbVar10 + 1);
    }
    else {
LAB_00856d78:
      auVar18 = FUN_0080d3e0(param_2);
      uVar14 = auVar18._0_8_;
      if ((auVar18._8_8_ & 1) == 0) {
        return 0;
      }
    }
    *(bool *)(param_1 + 0x58) = uVar14 != 0;
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    pbVar10 = (byte *)*param_2;
    if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x18)) {
      pbVar10 = pbVar10 + 1;
      *param_2 = (ulong)pbVar10;
      if (pbVar10 < (byte *)param_2[1]) {
LAB_00856dc4:
        if ((char)*pbVar10 < '\0') goto LAB_00856df0;
        uVar14 = (ulong)*pbVar10;
        *param_2 = (ulong)(pbVar10 + 1);
      }
      else {
LAB_00856df0:
        auVar18 = FUN_0080d3e0(param_2);
        uVar14 = auVar18._0_8_;
        if ((auVar18._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(bool *)(param_1 + 0x5a) = uVar14 != 0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
      pbVar10 = (byte *)*param_2;
      if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x28)) {
        pbVar10 = pbVar10 + 1;
        *param_2 = (ulong)pbVar10;
        if (pbVar10 < (byte *)param_2[1]) {
LAB_00856e3c:
          if ((char)*pbVar10 < '\0') goto LAB_00856e68;
          uVar14 = (ulong)*pbVar10;
          *param_2 = (ulong)(pbVar10 + 1);
        }
        else {
LAB_00856e68:
          auVar18 = FUN_0080d3e0(param_2);
          uVar14 = auVar18._0_8_;
          if ((auVar18._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x59) = uVar14 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
        pbVar10 = (byte *)*param_2;
        if ((pbVar10 < (byte *)param_2[1]) && (*pbVar10 == 0x30)) {
          pbVar10 = pbVar10 + 1;
          *param_2 = (ulong)pbVar10;
          if ((byte *)param_2[1] <= pbVar10) goto LAB_00856eb4;
LAB_00856ed0:
          uVar13 = (uint)*pbVar10;
          uVar14 = (ulong)uVar13;
          if ((char)*pbVar10 < '\0') goto LAB_008570e8;
          *param_2 = (ulong)(pbVar10 + 1);
          goto joined_r0x00857100;
        }
      }
    }
  }
  goto LAB_00856c34;
LAB_008570b8:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar11 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00856c34;
}


