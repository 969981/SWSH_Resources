/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008598f0; name: FUN_008598f0
 */


undefined8 FUN_008598f0(long param_1,ulong *param_2)

{
  ulong *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  char *pcVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  puVar6 = PTR_DAT_02717208;
  puVar1 = (ulong *)(param_1 + 0x28);
LAB_00859b50:
  pbVar2 = (byte *)*param_2;
  if (pbVar2 < (byte *)param_2[1]) {
    bVar4 = *pbVar2;
    uVar14 = (uint)bVar4;
    if ((char)bVar4 < '\x01') {
      if (((byte *)param_2[1] <= pbVar2 + 1) ||
         (bVar3 = pbVar2[1], -1 < (char)((bVar3 ^ 0x80) & bVar4))) goto LAB_00859b08;
      uVar14 = (uVar14 + (uint)bVar3 * 0x80) - 0x80;
      uVar13 = (ulong)uVar14;
      *(uint *)(param_2 + 4) = uVar14;
      *param_2 = (ulong)(pbVar2 + 2);
    }
    else {
      uVar13 = (ulong)bVar4;
      *(uint *)(param_2 + 4) = uVar14;
      *param_2 = (ulong)(pbVar2 + 1);
    }
LAB_00859b84:
    uVar14 = (uint)uVar13;
    if (uVar14 >> 3 == 999) {
      if (uVar14 == 0x1f3a) {
LAB_008599e0:
        uVar13 = param_2[7];
        *(int *)(param_2 + 7) = (int)uVar13 + -1;
        if ((int)uVar13 < 1) {
          return 0;
        }
        do {
          piVar12 = *(int **)(param_1 + 0x48);
          if (piVar12 == (int *)0x0) {
            iVar9 = *(int *)(param_1 + 0x44);
LAB_00859a3c:
            FUN_00824290(param_1 + 0x38,iVar9 + 1);
            piVar12 = *(int **)(param_1 + 0x48);
            iVar9 = *piVar12;
LAB_00859a50:
            *piVar12 = iVar9 + 1;
            uVar15 = FUN_00860770(0,*(undefined8 *)(param_1 + 0x38));
            iVar9 = *(int *)(param_1 + 0x40);
            *(int *)(param_1 + 0x40) = iVar9 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar9 * 8 + 8) = uVar15;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x40);
            iVar9 = *piVar12;
            if (iVar9 <= iVar5) {
              if (iVar9 == *(int *)(param_1 + 0x44)) goto LAB_00859a3c;
              goto LAB_00859a50;
            }
            *(int *)(param_1 + 0x40) = iVar5 + 1;
            uVar15 = *(undefined8 *)(piVar12 + (long)iVar5 * 2 + 2);
          }
          uVar8 = FUN_0080cab0(param_2);
          uVar13 = FUN_0085b9d0(uVar15,param_2);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          uVar13 = FUN_0080cc00(param_2,uVar8);
          if ((uVar13 & 1) == 0) {
            return 0;
          }
          pcVar11 = (char *)*param_2;
          if ((((int)(char *)param_2[1] - (int)pcVar11 < 2) || (*pcVar11 != -0x46)) ||
             (pcVar11[1] != '>')) goto LAB_00859ad4;
          *param_2 = (ulong)(pcVar11 + 2);
        } while( true );
      }
    }
    else {
      if (uVar14 >> 3 != 0x21) goto LAB_00859bf0;
      if (uVar14 == 0x108) {
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 < (byte *)param_2[1]) && (-1 < (char)*pbVar2)) {
          uVar13 = (ulong)*pbVar2;
          *param_2 = (ulong)(pbVar2 + 1);
        }
        else {
          auVar16 = FUN_0080d3e0(param_2);
          uVar13 = auVar16._0_8_;
          if ((auVar16._8_8_ & 1) == 0) {
            return 0;
          }
        }
        *(bool *)(param_1 + 0x50) = uVar13 != 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        pcVar11 = (char *)*param_2;
        if (((1 < (int)param_2[1] - (int)pcVar11) && (*pcVar11 == -0x46)) && (pcVar11[1] == '>')) {
          *param_2 = (ulong)(pcVar11 + 2);
          goto LAB_008599e0;
        }
        goto LAB_00859b50;
      }
    }
    if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
      return 1;
    }
  }
  else {
    uVar14 = 0;
LAB_00859b08:
    iVar9 = FUN_0080d8c0(param_2,uVar14);
    bVar7 = iVar9 - 1U < 0x3fff;
    uVar13 = (ulong)CONCAT14(bVar7,iVar9);
    *(int *)(param_2 + 4) = iVar9;
    if (bVar7) goto LAB_00859b84;
LAB_00859bf0:
    if ((uint)uVar13 == 0) {
      return 1;
    }
    if (((uint)uVar13 & 7) == 4) {
      return 1;
    }
  }
  if (((uint)(uVar13 >> 6) & 0x3ffffff) < 0x7d) {
    if ((*puVar1 & 1) == 0) {
      uVar10 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar10 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar13 = FUN_00810550(param_2,uVar13 & 0xffffffff,uVar10);
  }
  else {
    uVar15 = *(undefined8 *)puVar6;
    if ((*puVar1 & 1) == 0) {
      uVar10 = FUN_009bb7d0(puVar1);
    }
    else {
      uVar10 = *puVar1 & 0xfffffffffffffffe;
    }
    uVar13 = FUN_0083fc30(param_1 + 8,uVar13 & 0xffffffff,param_2,uVar15,uVar10);
  }
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  goto LAB_00859b50;
LAB_00859ad4:
  *(int *)(param_2 + 7) = (int)param_2[7] + 1;
  if ((pcVar11 == (char *)param_2[1]) &&
     ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)((long)param_2 + 0x24) = 1;
    return 1;
  }
  goto LAB_00859b50;
}


