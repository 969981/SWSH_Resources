/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049e710; name: FUN_0049e710
 */


/* WARNING: Type propagation algorithm not settling */

float FUN_0049e710(long *param_1,long param_2,void *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_70 [48];
  uint local_38 [2];
  
  memcpy(auStack_70,param_3,0x30);
  iVar2 = *(int *)(param_2 + 8);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = param_4 / uVar3;
    }
    for (puVar9 = *(uint **)(*param_1 + (ulong)(param_4 - uVar4 * uVar3) * 8); puVar9 != (uint *)0x0
        ; puVar9 = *(uint **)(puVar9 + 2)) {
      if (*puVar9 == param_4) {
        puVar9 = (uint *)FUN_00465870(puVar9 + 8,auStack_70);
        if (puVar9 == (uint *)0x0) {
          bVar5 = false;
          goto LAB_0049e868;
        }
        local_38[0] = *puVar9;
        uVar3 = *(uint *)(param_2 + 0x58);
        goto joined_r0x0049e808;
      }
    }
  }
  if (*(int *)(param_2 + 0x48) == 1) {
    bVar5 = false;
  }
  else {
    bVar6 = iVar2 == 7;
    bVar5 = iVar2 == 0 || bVar6;
    if ((bVar6) || (iVar2 == 0)) {
      local_38[0] = 0x3f800000;
      if (iVar2 == 0 || bVar6) {
        return 1.0;
      }
      goto LAB_0049e7b8;
    }
  }
  uVar7 = FUN_004784d0(*(undefined8 *)PTR_DAT_02712dc0,param_4,auStack_70,local_38);
  if ((uVar7 & 1) == 0) {
LAB_0049e868:
    uVar3 = *(uint *)(param_1 + 1);
    local_38[0] = 0;
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = param_4 / uVar3;
      }
      for (puVar9 = *(uint **)(*param_1 + (ulong)(param_4 - uVar4 * uVar3) * 8);
          puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 2)) {
        if (*puVar9 == param_4) {
          local_38[0] = puVar9[4];
          break;
        }
      }
    }
  }
  if (bVar5) {
    return 1.0;
  }
LAB_0049e7b8:
  uVar3 = *(uint *)(param_2 + 0x58);
joined_r0x0049e808:
  if (uVar3 == 0) {
    return 1.0;
  }
  uVar7 = (ulong)uVar3;
  lVar8 = *(long *)(param_2 + 0x50);
  fVar12 = 1.0;
  lVar10 = lVar8 + 8;
  do {
    if (*(uint *)(lVar10 + -4) == param_4) {
      local_38[1] = 0;
      fVar11 = (float)FUN_0042e770(local_38[0],lVar10,0,local_38 + 1);
      fVar12 = fVar11 * fVar12;
      lVar8 = *(long *)(param_2 + 0x50);
      uVar7 = (ulong)*(uint *)(param_2 + 0x58);
    }
    lVar1 = lVar10 + 0x10;
    lVar10 = lVar10 + 0x18;
  } while (lVar1 != lVar8 + uVar7 * 0x18);
  return fVar12;
}


