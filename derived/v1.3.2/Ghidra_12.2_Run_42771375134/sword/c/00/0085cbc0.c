/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085cbc0; name: FUN_0085cbc0
 */


undefined8 FUN_0085cbc0(long param_1,ulong *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  byte *pbVar16;
  
  puVar4 = PTR_DAT_02716d10;
  piVar1 = (int *)(param_1 + 0x30);
  piVar2 = (int *)(param_1 + 0x18);
LAB_0085cc18:
  while (pbVar16 = (byte *)*param_2, (byte *)param_2[1] <= pbVar16) {
    uVar10 = 0;
LAB_0085cfe4:
    iVar7 = FUN_0080d8c0(param_2,uVar10);
    bVar5 = iVar7 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar7;
    uVar10 = (ulong)CONCAT14(bVar5,iVar7);
    if (bVar5) goto LAB_0085cc48;
switchD_0085cc60_caseD_5:
    if ((uint)uVar10 == 0) {
      return 1;
    }
    if (((uint)uVar10 & 7) == 4) {
      return 1;
    }
LAB_0085d01c:
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & 1) == 0) {
      uVar8 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,uVar8);
    }
    else {
      uVar10 = FUN_00810550(param_2,uVar10 & 0xffffffff,uVar14 & 0xfffffffffffffffe);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *pbVar16;
  uVar10 = (ulong)(uint)bVar3;
  if ((char)bVar3 < '\x01') goto LAB_0085cfe4;
  *(uint *)(param_2 + 4) = (uint)bVar3;
  *param_2 = (ulong)(pbVar16 + 1);
LAB_0085cc48:
  uVar9 = (uint)uVar10;
  switch((uint)(uVar10 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar9 == 8) {
      uVar10 = FUN_0085d0f0(1,10,param_2,piVar2);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      pbVar16 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
      if (pbVar12 <= pbVar16) goto LAB_0085cc18;
    }
    else {
      if (uVar9 != 10) goto LAB_0085ccf0;
      pbVar16 = (byte *)*param_2;
      if ((pbVar16 < (byte *)param_2[1]) && (-1 < (char)*pbVar16)) {
        uVar9 = (uint)*pbVar16;
        *param_2 = (ulong)(pbVar16 + 1);
      }
      else {
        uVar9 = FUN_0080d720(param_2);
        if ((int)uVar9 < 0) {
          return 0;
        }
      }
      uVar6 = FUN_0080c950(param_2,uVar9);
      iVar7 = FUN_0080cc60(param_2);
      while (0 < iVar7) {
        pbVar16 = (byte *)*param_2;
        if (pbVar16 < (byte *)param_2[1]) {
          uVar10 = (ulong)*pbVar16;
          if ((char)*pbVar16 < '\0') goto LAB_0085cf6c;
          *param_2 = (ulong)(pbVar16 + 1);
          iVar7 = *(int *)(param_1 + 0x18);
          if (iVar7 == *(int *)(param_1 + 0x1c)) goto LAB_0085cf8c;
        }
        else {
          uVar10 = 0;
LAB_0085cf6c:
          uVar10 = FUN_0080d5d0(param_2,uVar10);
          if ((long)uVar10 < 0) {
            return 0;
          }
          iVar7 = *(int *)(param_1 + 0x18);
          if (iVar7 == *(int *)(param_1 + 0x1c)) {
LAB_0085cf8c:
            FUN_007f7a40(piVar2,iVar7 + 1);
            iVar7 = *piVar2;
          }
        }
        *(int *)(param_1 + 0x18) = iVar7 + 1;
        *(int *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 4 + 8) = (int)uVar10;
        iVar7 = FUN_0080cc60(param_2);
      }
      FUN_0080c9d0(param_2,uVar6);
      pbVar16 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
      if (pbVar12 <= pbVar16) goto LAB_0085cc18;
    }
    if (*pbVar16 != 0x12) goto LAB_0085cc18;
    pbVar16 = pbVar16 + 1;
    *param_2 = (ulong)pbVar16;
    if (pbVar16 < pbVar12) {
LAB_0085ccb8:
      if ((char)*pbVar16 < '\0') goto LAB_0085cd44;
      uVar9 = (uint)*pbVar16;
      *param_2 = (ulong)(pbVar16 + 1);
    }
    else {
LAB_0085cd44:
      uVar9 = FUN_0080d720(param_2);
      if ((int)uVar9 < 0) {
        return 0;
      }
    }
    uVar6 = FUN_0080c950(param_2,uVar9);
    iVar7 = FUN_0080cc60(param_2);
    while (0 < iVar7) {
      pbVar16 = (byte *)*param_2;
      if (pbVar16 < (byte *)param_2[1]) {
        uVar10 = (ulong)*pbVar16;
        if ((char)*pbVar16 < '\0') goto LAB_0085cda8;
        *param_2 = (ulong)(pbVar16 + 1);
        iVar7 = *(int *)(param_1 + 0x30);
        if (iVar7 == *(int *)(param_1 + 0x34)) goto LAB_0085cdc8;
      }
      else {
        uVar10 = 0;
LAB_0085cda8:
        uVar10 = FUN_0080d5d0(param_2,uVar10);
        if ((long)uVar10 < 0) {
          return 0;
        }
        iVar7 = *(int *)(param_1 + 0x30);
        if (iVar7 == *(int *)(param_1 + 0x34)) {
LAB_0085cdc8:
          FUN_007f7a40(piVar1,iVar7 + 1);
          iVar7 = *piVar1;
        }
      }
      *(int *)(param_1 + 0x30) = iVar7 + 1;
      *(int *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 4 + 8) = (int)uVar10;
      iVar7 = FUN_0080cc60(param_2);
    }
    FUN_0080c9d0(param_2,uVar6);
    pcVar15 = (char *)*param_2;
    if ((char *)param_2[1] <= pcVar15) goto LAB_0085cc18;
    break;
  case 2:
    if (uVar9 != 0x10) {
      if (uVar9 != 0x12) goto LAB_0085ccf0;
      pbVar16 = (byte *)*param_2;
      if (pbVar16 < (byte *)param_2[1]) goto LAB_0085ccb8;
      goto LAB_0085cd44;
    }
    uVar10 = FUN_0085d0f0(1,0x12,param_2,piVar1);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pcVar15 = (char *)*param_2;
    if ((char *)param_2[1] <= pcVar15) goto LAB_0085cc18;
    break;
  case 3:
    if (uVar9 != 0x1a) goto LAB_0085ccf0;
    goto LAB_0085ce54;
  case 4:
    if (uVar9 != 0x22) goto LAB_0085ccf0;
    goto LAB_0085ceb0;
  default:
    goto switchD_0085cc60_caseD_5;
  case 6:
    if (uVar9 == 0x32) goto LAB_0085d064;
LAB_0085ccf0:
    if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
      return 1;
    }
    goto LAB_0085d01c;
  }
  if (*pcVar15 == '\x1a') {
    *param_2 = (ulong)(pcVar15 + 1);
LAB_0085ce54:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    lVar13 = *(long *)puVar4;
    lVar11 = *(long *)(param_1 + 0x48);
    if (lVar11 == lVar13) {
      FUN_009b58d0((long *)(param_1 + 0x48),lVar13);
      lVar11 = *(long *)(param_1 + 0x48);
    }
    uVar10 = FUN_008160d0(param_2,lVar11);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    pcVar15 = (char *)*param_2;
    if ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == '\"')) {
      *param_2 = (ulong)(pcVar15 + 1);
LAB_0085ceb0:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      lVar13 = *(long *)puVar4;
      lVar11 = *(long *)(param_1 + 0x50);
      if (lVar11 == lVar13) {
        FUN_009b58d0((long *)(param_1 + 0x50),lVar13);
        lVar11 = *(long *)(param_1 + 0x50);
      }
      uVar10 = FUN_008160d0(param_2,lVar11);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      pcVar15 = (char *)*param_2;
      if ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == '2')) {
        do {
          *param_2 = (ulong)(pcVar15 + 1);
LAB_0085d064:
          uVar8 = FUN_007f7930(param_1 + 0x58);
          uVar10 = FUN_008160d0(param_2,uVar8);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pcVar15 = (char *)*param_2;
        } while ((pcVar15 < (char *)param_2[1]) && (*pcVar15 == '2'));
        if ((pcVar15 == (char *)param_2[1]) &&
           ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined1 *)((long)param_2 + 0x24) = 1;
          return 1;
        }
      }
    }
  }
  goto LAB_0085cc18;
}


