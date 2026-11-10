/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d600; name: FUN_0049d600
 */


undefined1  [16] FUN_0049d600(long *param_1,long param_2,void *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 auStack_68 [48];
  uint local_38 [2];
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar12 = 0;
  if (uVar2 == 0) {
    return ZEXT816(0);
  }
  uVar1 = (int)param_2 + 0x39;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar1 / uVar2;
  }
  plVar10 = *(long **)(param_1[3] + (ulong)(uVar1 - uVar4 * uVar2) * 8);
  while( true ) {
    if (plVar10 == (long *)0x0) {
      return ZEXT816(0);
    }
    if ((*plVar10 == param_2) && ((int)plVar10[1] == 0x39)) break;
    plVar10 = (long *)plVar10[2];
  }
  if ((int)plVar10[0xb] == 0) {
    return ZEXT816(0);
  }
  memcpy(auStack_68,param_3,0x30);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar12;
  lVar9 = plVar10[10];
  uVar2 = *(uint *)(lVar9 + 4);
  iVar3 = (int)plVar10[1];
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = uVar2 / uVar1;
    }
    for (puVar8 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar4 * uVar1) * 8); puVar8 != (uint *)0x0;
        puVar8 = *(uint **)(puVar8 + 2)) {
      if (*puVar8 == uVar2) {
        puVar8 = (uint *)FUN_00465870(puVar8 + 8,auStack_68);
        if (puVar8 == (uint *)0x0) {
          bVar5 = false;
          goto LAB_0049d758;
        }
        local_38[0] = *puVar8;
        goto LAB_0049d7a4;
      }
    }
  }
  if ((int)plVar10[9] == 1) {
    bVar5 = false;
  }
  else {
    bVar5 = iVar3 == 0 || iVar3 == 7;
    if ((iVar3 == 7) || (iVar3 == 0)) {
      local_38[0] = 0x3f800000;
      if (bVar5) {
        return auVar11 << 0x40;
      }
      goto LAB_0049d7a4;
    }
  }
  uVar7 = FUN_004784d0(*(undefined8 *)PTR_DAT_02712dc0,uVar2,auStack_68,local_38);
  if ((uVar7 & 1) == 0) {
LAB_0049d758:
    uVar2 = *(uint *)(param_1 + 1);
    local_38[0] = 0;
    if (uVar2 != 0) {
      uVar1 = *(uint *)(lVar9 + 4);
      uVar4 = 0;
      if (uVar2 != 0) {
        uVar4 = uVar1 / uVar2;
      }
      for (puVar8 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar4 * uVar2) * 8); puVar8 != (uint *)0x0
          ; puVar8 = *(uint **)(puVar8 + 2)) {
        if (*puVar8 == uVar1) {
          local_38[0] = puVar8[4];
          break;
        }
      }
    }
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  if (bVar5) {
    return auVar6 << 0x40;
  }
LAB_0049d7a4:
  local_38[1] = 0;
  auVar11 = FUN_0042e770(local_38[0],lVar9 + 8,0,local_38 + 1);
  return auVar11;
}


