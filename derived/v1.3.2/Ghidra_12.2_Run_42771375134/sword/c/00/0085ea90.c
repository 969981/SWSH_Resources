/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085ea90; name: FUN_0085ea90
 */


undefined8 FUN_0085ea90(long param_1,ulong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  byte *pbVar13;
  
  puVar3 = PTR_DAT_02716d10;
  piVar1 = (int *)(param_1 + 0x18);
LAB_0085ead4:
  while (pbVar13 = (byte *)*param_2, (byte *)param_2[1] <= pbVar13) {
    uVar9 = 0;
LAB_0085edd8:
    iVar6 = FUN_0080d8c0(param_2,uVar9);
    bVar4 = iVar6 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar6;
    uVar9 = (ulong)CONCAT14(bVar4,iVar6);
    if (bVar4) goto LAB_0085eb04;
switchD_0085eb1c_default:
    if ((uint)uVar9 == 0) {
      return 1;
    }
    if (((uint)uVar9 & 7) == 4) {
      return 1;
    }
LAB_0085ee10:
    uVar12 = *(ulong *)(param_1 + 8);
    if ((uVar12 & 1) == 0) {
      uVar7 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar7);
    }
    else {
      uVar9 = FUN_00810550(param_2,uVar9 & 0xffffffff,uVar12 & 0xfffffffffffffffe);
    }
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  bVar2 = *pbVar13;
  uVar9 = (ulong)(uint)bVar2;
  if ((char)bVar2 < '\x01') goto LAB_0085edd8;
  *(uint *)(param_2 + 4) = (uint)bVar2;
  *param_2 = (ulong)(pbVar13 + 1);
LAB_0085eb04:
  uVar8 = (uint)uVar9;
  switch((uint)(uVar9 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar8 == 8) {
      uVar9 = FUN_0085d0f0(1,10,param_2,piVar1);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      pcVar11 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar11) goto LAB_0085ead4;
    }
    else {
      if (uVar8 != 10) goto joined_r0x0085eb84;
      pbVar13 = (byte *)*param_2;
      if ((pbVar13 < (byte *)param_2[1]) && (-1 < (char)*pbVar13)) {
        uVar8 = (uint)*pbVar13;
        *param_2 = (ulong)(pbVar13 + 1);
      }
      else {
        uVar8 = FUN_0080d720(param_2);
        if ((int)uVar8 < 0) {
          return 0;
        }
      }
      uVar5 = FUN_0080c950(param_2,uVar8);
      iVar6 = FUN_0080cc60(param_2);
      while (0 < iVar6) {
        pbVar13 = (byte *)*param_2;
        if (pbVar13 < (byte *)param_2[1]) {
          uVar9 = (ulong)*pbVar13;
          if ((char)*pbVar13 < '\0') goto LAB_0085ed64;
          *param_2 = (ulong)(pbVar13 + 1);
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_0085ed84;
        }
        else {
          uVar9 = 0;
LAB_0085ed64:
          uVar9 = FUN_0080d5d0(param_2,uVar9);
          if ((long)uVar9 < 0) {
            return 0;
          }
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 == *(int *)(param_1 + 0x1c)) {
LAB_0085ed84:
            FUN_007f7a40(piVar1,iVar6 + 1);
            iVar6 = *piVar1;
          }
        }
        *(int *)(param_1 + 0x18) = iVar6 + 1;
        *(int *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 4 + 8) = (int)uVar9;
        iVar6 = FUN_0080cc60(param_2);
      }
      FUN_0080c9d0(param_2,uVar5);
      pcVar11 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar11) goto LAB_0085ead4;
    }
    if (*pcVar11 != '\x12') goto LAB_0085ead4;
    *param_2 = (ulong)(pcVar11 + 1);
LAB_0085ebe8:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    lVar10 = *(long *)(param_1 + 0x30);
    if (lVar10 == *(long *)puVar3) {
      FUN_009b58d0((long *)(param_1 + 0x30),*(long *)puVar3);
      lVar10 = *(long *)(param_1 + 0x30);
    }
    uVar9 = FUN_008160d0(param_2,lVar10);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    pbVar13 = (byte *)*param_2;
    if (((byte *)param_2[1] <= pbVar13) || (*pbVar13 != 0x18)) goto LAB_0085ead4;
    pbVar13 = pbVar13 + 1;
    *param_2 = (ulong)pbVar13;
    if ((byte *)param_2[1] <= pbVar13) goto LAB_0085ec48;
LAB_0085eb64:
    uVar9 = (ulong)*pbVar13;
    if ((char)*pbVar13 < '\0') goto LAB_0085ec4c;
    *param_2 = (ulong)(pbVar13 + 1);
    break;
  case 2:
    if (uVar8 == 0x12) goto LAB_0085ebe8;
joined_r0x0085eb84:
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      return 1;
    }
    goto LAB_0085ee10;
  case 3:
    if (uVar8 != 0x18) goto joined_r0x0085eb84;
    pbVar13 = (byte *)*param_2;
    if (pbVar13 < (byte *)param_2[1]) goto LAB_0085eb64;
LAB_0085ec48:
    uVar9 = 0;
LAB_0085ec4c:
    uVar9 = FUN_0080d5d0(param_2,uVar9);
    if ((long)uVar9 < 0) {
      return 0;
    }
    break;
  case 4:
    if (uVar8 != 0x20) goto joined_r0x0085eb84;
    pbVar13 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar13) goto LAB_0085ec94;
    goto LAB_0085eb98;
  default:
    goto switchD_0085eb1c_default;
  }
  *(int *)(param_1 + 0x38) = (int)uVar9;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  pbVar13 = (byte *)*param_2;
  if ((pbVar13 < (byte *)param_2[1]) && (*pbVar13 == 0x20)) {
    pbVar13 = pbVar13 + 1;
    *param_2 = (ulong)pbVar13;
    if (pbVar13 < (byte *)param_2[1]) {
LAB_0085eb98:
      uVar9 = (ulong)*pbVar13;
      if ((char)*pbVar13 < '\0') goto LAB_0085ec98;
      *param_2 = (ulong)(pbVar13 + 1);
    }
    else {
LAB_0085ec94:
      uVar9 = 0;
LAB_0085ec98:
      uVar9 = FUN_0080d5d0(param_2,uVar9);
      if ((long)uVar9 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar9;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
    if ((*param_2 == param_2[1]) &&
       ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  }
  goto LAB_0085ead4;
}


