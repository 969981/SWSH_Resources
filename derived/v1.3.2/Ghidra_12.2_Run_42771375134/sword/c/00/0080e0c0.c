/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e0c0; name: FUN_0080e0c0
 */


void FUN_0080e0c0(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  byte local_4c [12];
  void *local_38;
  
  iVar6 = *(int *)(param_1 + 2);
  if (iVar6 < 10) {
    if (param_2 < 0x80) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      uVar11 = param_2;
      do {
        param_2 = uVar11 >> 7;
        local_4c[uVar9] = (byte)uVar11 | 0x80;
        uVar9 = uVar9 + 1;
        uVar12 = uVar11 >> 0xe;
        uVar11 = param_2;
      } while (uVar12 != 0);
    }
    pbVar7 = local_4c;
    iVar13 = (int)uVar9 + 1;
    pbVar7[uVar9 & 0xffffffff] = (byte)param_2 & 0x7f;
    pvVar4 = (void *)param_1[1];
    if (iVar6 <= (int)uVar9) {
      pbVar7 = local_4c;
      do {
        memcpy(pvVar4,pbVar7,(long)iVar6);
        iVar1 = *(int *)(param_1 + 2);
        uVar9 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_38,param_1 + 2);
        if ((uVar9 & 1) == 0) {
          param_1[1] = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined1 *)(param_1 + 3) = 1;
          return;
        }
        iVar6 = *(int *)(param_1 + 2);
        iVar13 = iVar13 - iVar1;
        pbVar7 = pbVar7 + iVar1;
        param_1[1] = local_38;
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + iVar6;
        pvVar4 = local_38;
      } while (iVar6 < iVar13);
    }
    memcpy(pvVar4,pbVar7,(long)iVar13);
    param_1[1] = param_1[1] + (long)iVar13;
    iVar13 = *(int *)(param_1 + 2) - iVar13;
    goto LAB_0080e28c;
  }
  pbVar7 = (byte *)param_1[1];
  bVar2 = (byte)(param_2 >> 0x38);
  uVar5 = (uint)param_2;
  uVar10 = (uint)(param_2 >> 0x1c);
  uVar3 = (uint)(param_2 >> 0x20);
  if (bVar2 == 0) {
    if (uVar10 != 0) {
      if (uVar10 >> 0xe != 0) {
        if (0x1fffff < uVar10) {
          lVar8 = 8;
          goto LAB_0080e210;
        }
        lVar8 = 7;
        goto LAB_0080e21c;
      }
      if (0x7f < uVar10) {
        lVar8 = 6;
        goto LAB_0080e228;
      }
      lVar8 = 5;
      goto LAB_0080e234;
    }
    if (uVar5 >> 0xe != 0) {
      if (0x1fffff < uVar5) {
        lVar8 = 4;
        goto LAB_0080e23c;
      }
      lVar8 = 3;
      goto LAB_0080e248;
    }
    if (0x7f < uVar5) {
      lVar8 = 2;
      goto LAB_0080e254;
    }
    lVar8 = 1;
  }
  else {
    if (bVar2 < 0x80) {
      lVar8 = 9;
    }
    else {
      pbVar7[9] = bVar2 >> 7 | 0x80;
      lVar8 = 10;
    }
    pbVar7[8] = bVar2 | 0x80;
LAB_0080e210:
    pbVar7[7] = (byte)(uVar3 >> 0x11) | 0x80;
LAB_0080e21c:
    pbVar7[6] = (byte)(uVar3 >> 10) | 0x80;
LAB_0080e228:
    pbVar7[5] = (byte)(uVar3 >> 3) | 0x80;
LAB_0080e234:
    pbVar7[4] = (byte)(param_2 >> 0x1c) | 0x80;
LAB_0080e23c:
    pbVar7[3] = (byte)(uVar5 >> 0x15) | 0x80;
LAB_0080e248:
    pbVar7[2] = (byte)(uVar5 >> 0xe) | 0x80;
LAB_0080e254:
    pbVar7[1] = (byte)(uVar5 >> 7) | 0x80;
  }
  *pbVar7 = (byte)param_2 | 0x80;
  pbVar7[lVar8 + -1] = pbVar7[lVar8 + -1] & 0x7f;
  param_1[1] = param_1[1] + lVar8;
  iVar13 = *(int *)(param_1 + 2) - (int)lVar8;
LAB_0080e28c:
  *(int *)(param_1 + 2) = iVar13;
  return;
}


