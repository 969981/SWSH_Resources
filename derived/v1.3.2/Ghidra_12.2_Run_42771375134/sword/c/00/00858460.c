/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00858460; name: FUN_00858460
 */


undefined8 FUN_00858460(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  char *pcVar12;
  int *piVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  puVar5 = PTR_DAT_027171f8;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_0085873c:
  pbVar11 = (byte *)*param_2;
  if (pbVar11 < (byte *)param_2[1]) {
    bVar3 = *pbVar11;
    uVar9 = (uint)bVar3;
    if ((char)bVar3 < '\x01') {
      if (((byte *)param_2[1] <= pbVar11 + 1) ||
         (bVar2 = pbVar11[1], -1 < (char)((bVar2 ^ 0x80) & bVar3))) goto LAB_008586f4;
      uVar9 = (uVar9 + (uint)bVar2 * 0x80) - 0x80;
      uVar14 = (ulong)uVar9;
      *(uint *)(param_2 + 4) = uVar9;
      *param_2 = (ulong)(pbVar11 + 2);
    }
    else {
      uVar14 = (ulong)bVar3;
      *(uint *)(param_2 + 4) = uVar9;
      *param_2 = (ulong)(pbVar11 + 1);
    }
LAB_00858770:
    uVar15 = (uint)uVar14;
    uVar9 = uVar15 >> 3;
    if (uVar9 == 999) {
      if (uVar15 == 0x1f3a) goto LAB_008585cc;
    }
    else if (uVar9 == 3) {
      if (uVar15 == 0x18) {
        pbVar11 = (byte *)*param_2;
        if (pbVar11 < (byte *)param_2[1]) {
LAB_00858510:
          if ((char)*pbVar11 < '\0') goto LAB_00858574;
          uVar14 = (ulong)*pbVar11;
          *param_2 = (ulong)(pbVar11 + 1);
        }
        else {
LAB_00858574:
          auVar17 = FUN_0080d3e0(param_2);
          uVar14 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x51) = uVar14 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
        pcVar12 = (char *)*param_2;
        if (((1 < (int)param_2[1] - (int)pcVar12) && (*pcVar12 == -0x46)) && (pcVar12[1] == '>')) {
          *param_2 = (ulong)(pcVar12 + 2);
LAB_008585cc:
          uVar14 = param_2[7];
          *(int *)(param_2 + 7) = (int)uVar14 + -1;
          if ((int)uVar14 < 1) {
            return 0;
          }
          do {
            piVar13 = *(int **)(param_1 + 0x48);
            if (piVar13 == (int *)0x0) {
              iVar8 = *(int *)(param_1 + 0x44);
LAB_00858628:
              FUN_00824290(param_1 + 0x38,iVar8 + 1);
              piVar13 = *(int **)(param_1 + 0x48);
              iVar8 = *piVar13;
LAB_0085863c:
              *piVar13 = iVar8 + 1;
              uVar16 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x38));
              iVar8 = *(int *)(param_1 + 0x40);
              *(int *)(param_1 + 0x40) = iVar8 + 1;
              *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar8 * 8 + 8) = uVar16;
            }
            else {
              iVar4 = *(int *)(param_1 + 0x40);
              iVar8 = *piVar13;
              if (iVar8 <= iVar4) {
                if (iVar8 == *(int *)(param_1 + 0x44)) goto LAB_00858628;
                goto LAB_0085863c;
              }
              *(int *)(param_1 + 0x40) = iVar4 + 1;
              uVar16 = *(undefined8 *)(piVar13 + (long)iVar4 * 2 + 2);
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
            pcVar12 = (char *)*param_2;
            if ((((int)(char *)param_2[1] - (int)pcVar12 < 2) || (*pcVar12 != -0x46)) ||
               (pcVar12[1] != '>')) goto LAB_008586c0;
            *param_2 = (ulong)(pcVar12 + 2);
          } while( true );
        }
        goto LAB_0085873c;
      }
    }
    else {
      if (uVar9 != 2) goto LAB_008587e4;
      if (uVar15 == 0x10) {
        pbVar11 = (byte *)*param_2;
        if ((pbVar11 < (byte *)param_2[1]) && (-1 < (char)*pbVar11)) {
          uVar14 = (ulong)*pbVar11;
          *param_2 = (ulong)(pbVar11 + 1);
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
        pbVar11 = (byte *)*param_2;
        if ((pbVar11 < (byte *)param_2[1]) && (*pbVar11 == 0x18)) {
          pbVar11 = pbVar11 + 1;
          *param_2 = (ulong)pbVar11;
          if (pbVar11 < (byte *)param_2[1]) goto LAB_00858510;
          goto LAB_00858574;
        }
        goto LAB_0085873c;
      }
    }
    if ((uVar15 == 0) || ((uVar15 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar9 = 0;
LAB_008586f4:
    iVar8 = FUN_0080d8c0(param_2,uVar9);
    bVar6 = iVar8 - 1U < 0x3fff;
    uVar14 = (ulong)CONCAT14(bVar6,iVar8);
    *(int *)(param_2 + 4) = iVar8;
    if (bVar6) goto LAB_00858770;
LAB_008587e4:
    if ((uint)uVar14 == 0) {
      return 1;
    }
    if (((uint)uVar14 & 7) == 4) {
      return 1;
    }
  }
  if (((uint)(uVar14 >> 6) & 0x3ffffff) < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar10 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar10 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar14 = FUN_00810550(param_2,uVar14 & 0xffffffff,uVar10);
  }
  else {
    uVar16 = *(undefined8 *)puVar5;
    if ((*puVar1 & 1) == 0) {
      uVar10 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar10 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar14 = FUN_0083fc30(param_1 + 8,uVar14 & 0xffffffff,param_2,uVar16,uVar10);
  }
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  goto LAB_0085873c;
LAB_008586c0:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar12 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_0085873c;
}


