/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b660; name: FUN_0121b660
 */


void FUN_0121b660(undefined1 *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  char local_80 [3];
  undefined5 uStack_7d;
  undefined3 local_78;
  undefined5 uStack_75;
  undefined3 local_70;
  undefined5 uStack_6d;
  undefined3 uStack_68;
  undefined4 local_65;
  undefined1 local_60 [24];
  undefined4 local_48;
  
  uVar2 = 0;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    if ((param_2[1] & 0x1fffffffffffffffU) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined1 *)*param_2;
    }
  }
  *param_1 = uVar2;
  param_1[4] = 0;
  puVar10 = (uint *)(param_1 + 0x40);
  puVar10[0] = 0;
  puVar10[1] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x48] = 0;
  local_80[0] = '\0';
  if (*param_2 != 0) {
    if ((ulong)param_2[1] < 9) {
      local_80[0] = '\0';
    }
    else {
      lVar6 = *param_2 + 1;
      local_78 = (undefined3)lVar6;
      uStack_75 = (undefined5)((ulong)lVar6 >> 0x18);
      local_70 = 8;
      uStack_6d = 0;
      local_80[0] = '\x01';
    }
  }
  FUN_01222770(local_60,&local_78);
  if (local_80[0] != '\0') {
    local_80[0] = '\0';
  }
  local_65 = local_48;
  uStack_6d = local_60._16_5_;
  uStack_68 = local_60._21_3_;
  uStack_75 = local_60._8_5_;
  local_70 = local_60._13_3_;
  uStack_7d = local_60._0_5_;
  local_78 = local_60._5_3_;
  puVar5 = (undefined8 *)((ulong)local_80 | 3);
  if (param_1[4] == '\0') {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(puVar5 + 3);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar7;
    param_1[4] = 1;
    uVar1 = FUN_012229b0(param_1 + 8);
    if ((uVar1 & 1) == 0) goto LAB_0121b76c;
LAB_0121b7b0:
    lVar6 = *param_2;
    uVar4 = 0;
    if (lVar6 == 0) goto LAB_0121b7fc;
LAB_0121b7b8:
    if (0x107 < (ulong)(param_2[1] << 3)) {
      uVar8 = *(undefined8 *)(lVar6 + 9);
      uVar7 = *(undefined8 *)(lVar6 + 0x19);
      *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(lVar6 + 0x11);
      *(undefined8 *)(param_1 + 0x34) = uVar7;
      *(undefined8 *)(param_1 + 0x24) = uVar8;
      lVar6 = *param_2;
      uVar4 = 0;
      if (lVar6 == 0) goto LAB_0121b7fc;
    }
    if (0x121 < (ulong)(param_2[1] << 3)) {
      uVar4 = *(byte *)(lVar6 + 0x24) >> 1 & 1;
      goto LAB_0121b7fc;
    }
    *puVar10 = 0;
    lVar6 = *param_2;
    if (lVar6 != 0) goto LAB_0121b808;
LAB_0121b85c:
    param_1[0x44] = 0;
    lVar6 = *param_2;
    uVar2 = 0;
    if (lVar6 == 0) goto LAB_0121b87c;
LAB_0121b868:
    if (0x10f < (ulong)(param_2[1] << 3)) {
      uVar2 = *(undefined1 *)(lVar6 + 0x21);
      goto LAB_0121b87c;
    }
    param_1[0x45] = 0;
    lVar6 = *param_2;
    if (lVar6 != 0) goto LAB_0121b888;
LAB_0121b8c4:
    *(undefined2 *)(param_1 + 0x46) = 0;
    lVar6 = *param_2;
    bVar3 = 0;
    if (lVar6 == 0) goto LAB_0121b8f0;
  }
  else {
    uVar7 = *puVar5;
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    param_1[0x20] = *(undefined1 *)(puVar5 + 3);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    uVar1 = FUN_012229b0(param_1 + 8);
    if ((uVar1 & 1) != 0) goto LAB_0121b7b0;
LAB_0121b76c:
    if (param_1[4] == '\0') goto LAB_0121b7b0;
    param_1[4] = 0;
    lVar6 = *param_2;
    if (lVar6 != 0) goto LAB_0121b7b8;
    uVar4 = 0;
LAB_0121b7fc:
    *puVar10 = uVar4;
    lVar6 = *param_2;
    if (lVar6 == 0) goto LAB_0121b85c;
LAB_0121b808:
    if (0x125 < (ulong)(param_2[1] << 3)) {
      bVar3 = *(byte *)(lVar6 + 0x24) >> 2 & 0xf;
      if (10 < bVar3) {
        bVar3 = 0;
      }
      param_1[0x44] = bVar3;
      lVar6 = *param_2;
      if (lVar6 == 0) {
        uVar2 = 0;
        goto LAB_0121b87c;
      }
      goto LAB_0121b868;
    }
    param_1[0x44] = 0;
    lVar6 = *param_2;
    if (lVar6 != 0) goto LAB_0121b868;
    uVar2 = 0;
LAB_0121b87c:
    param_1[0x45] = uVar2;
    lVar6 = *param_2;
    if (lVar6 == 0) goto LAB_0121b8c4;
LAB_0121b888:
    if ((ulong)(param_2[1] << 3) < 0x120) goto LAB_0121b8c4;
    *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(lVar6 + 0x22);
    lVar6 = *param_2;
    if (lVar6 == 0) {
      bVar3 = 0;
      goto LAB_0121b8f0;
    }
  }
  if ((ulong)(param_2[1] << 3) < 0x121) {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar6 + 0x24) & 1;
  }
LAB_0121b8f0:
  param_1[0x48] = bVar3;
  return;
}


