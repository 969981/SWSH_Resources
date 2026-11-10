/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d1f0; name: FUN_0049d1f0
 */


undefined1  [16] FUN_0049d1f0(long *param_1,long param_2,int param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auStack_98 [48];
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_DAT_02712dc0;
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    uVar1 = (int)param_2 + param_3;
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar1 / uVar2;
    }
    for (plVar9 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar4 * uVar2) * 8); plVar9 != (long *)0x0
        ; plVar9 = (long *)plVar9[2]) {
      if ((*plVar9 == param_2) && ((int)plVar9[1] == param_3)) {
        if (*(int *)((long)plVar9 + 0x4c) != 3) {
          auVar13 = FUN_0049d430();
          return auVar13;
        }
        if ((int)plVar9[0xb] == 0) {
          uVar14 = 0x3f800000;
          uVar15 = 0;
          goto LAB_0049d40c;
        }
        lVar11 = plVar9[10];
        uVar14 = 0x3f800000;
        uVar15 = 0;
        goto LAB_0049d2c4;
      }
    }
  }
  return ZEXT816(0);
LAB_0049d2c4:
  memcpy(auStack_98,param_4,0x30);
  uVar2 = *(uint *)(lVar11 + 4);
  iVar3 = (int)plVar9[1];
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    for (puVar10 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar4 * uVar1) * 8); puVar10 != (uint *)0x0
        ; puVar10 = *(uint **)(puVar10 + 2)) {
      if (*puVar10 == uVar2) {
        puVar10 = (uint *)FUN_00465870(puVar10 + 8,auStack_98);
        if (puVar10 == (uint *)0x0) {
          bVar5 = false;
          goto LAB_0049d388;
        }
        local_68 = *puVar10;
        goto LAB_0049d3d4;
      }
    }
  }
  if ((int)plVar9[9] == 1) {
    bVar5 = false;
LAB_0049d348:
    uVar8 = FUN_004784d0(*(undefined8 *)puVar6,uVar2,auStack_98,&local_68);
    if ((uVar8 & 1) == 0) {
LAB_0049d388:
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(lVar11 + 4);
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        for (puVar10 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar4 * uVar2) * 8);
            puVar10 != (uint *)0x0; puVar10 = *(uint **)(puVar10 + 2)) {
          if (*puVar10 == uVar1) {
            local_68 = puVar10[4];
            goto joined_r0x0049d2bc;
          }
        }
      }
      local_68 = 0;
    }
joined_r0x0049d2bc:
    if (!bVar5) {
LAB_0049d3d4:
      local_64 = 0;
      fVar12 = (float)FUN_0042e770(local_68,lVar11 + 8,0,&local_64);
      uVar14 = (ulong)(uint)(fVar12 * (float)uVar14);
      uVar15 = 0;
    }
  }
  else {
    bVar7 = iVar3 == 7;
    bVar5 = iVar3 == 0 || bVar7;
    if ((!bVar7) && (iVar3 != 0)) goto LAB_0049d348;
    local_68 = 0x3f800000;
    if (iVar3 != 0 && !bVar7) goto LAB_0049d3d4;
  }
  lVar11 = lVar11 + 0x18;
  if (lVar11 == plVar9[10] + (ulong)*(uint *)(plVar9 + 0xb) * 0x18) {
LAB_0049d40c:
    auVar13._8_8_ = uVar15;
    auVar13._0_8_ = uVar14;
    return auVar13;
  }
  goto LAB_0049d2c4;
}


