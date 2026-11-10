/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c0fb0; name: FUN_013c0fb0
 */


undefined8 FUN_013c0fb0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_2;
  lVar9 = *param_1;
  if (lVar8 == 0 && lVar9 == 0) {
    lVar8 = 0;
    bVar1 = true;
LAB_013c1000:
    lVar9 = *param_3;
    bVar2 = lVar8 != 0;
    if (lVar9 != 0 || lVar8 != 0) goto joined_r0x013c10dc;
LAB_013c116c:
    bVar2 = true;
  }
  else {
    if ((lVar8 == 0) && (lVar9 != 0)) {
      lVar8 = 0;
      bVar1 = false;
      goto LAB_013c1000;
    }
    if ((lVar8 == 0) || (lVar9 != 0)) {
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar3 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar4 = FUN_012b68c0(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar5 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar6 = FUN_012b68c0(*puVar7);
      lVar8 = *param_2;
      bVar1 = (uint)(iVar6 * iVar5) < (uint)(iVar4 * iVar3);
      goto LAB_013c1000;
    }
    lVar9 = *param_3;
    bVar2 = true;
    bVar1 = true;
joined_r0x013c10dc:
    if ((lVar9 == 0) && (bVar2)) {
      bVar2 = false;
    }
    else {
      if ((bool)(lVar9 != 0 & (bVar2 ^ 1U))) goto LAB_013c116c;
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar3 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar4 = FUN_012b68c0(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar5 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar6 = FUN_012b68c0(*puVar7);
      bVar2 = (uint)(iVar6 * iVar5) < (uint)(iVar4 * iVar3);
    }
  }
  if (!bVar1) {
    if (!bVar2) {
      return 0;
    }
    lVar8 = *param_2;
    *param_2 = *param_3;
    *param_3 = lVar8;
    lVar9 = *param_2;
    lVar8 = *param_1;
    if (lVar9 != 0 || lVar8 != 0) {
      if ((lVar9 == 0) && (lVar8 != 0)) {
        return 1;
      }
      if ((lVar9 == 0) || (lVar8 != 0)) {
        puVar7 = (undefined8 *)FUN_012e3520(lVar9);
        iVar3 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar9);
        iVar4 = FUN_012b68c0(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar8);
        iVar5 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar8);
        iVar6 = FUN_012b68c0(*puVar7);
        if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) {
          return 1;
        }
        lVar8 = *param_1;
        lVar9 = *param_2;
      }
    }
    *param_1 = lVar9;
    *param_2 = lVar8;
    return 2;
  }
  lVar8 = *param_1;
  if (bVar2) {
    *param_1 = *param_3;
    *param_3 = lVar8;
    return 1;
  }
  *param_1 = *param_2;
  *param_2 = lVar8;
  lVar9 = *param_3;
  if ((lVar8 != 0) || (lVar9 != 0)) {
    if ((lVar8 != 0) && (lVar9 == 0)) {
      return 1;
    }
    if ((lVar8 != 0) || (lVar9 == 0)) {
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar3 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar9);
      iVar4 = FUN_012b68c0(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar5 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar8);
      iVar6 = FUN_012b68c0(*puVar7);
      if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) {
        return 1;
      }
      lVar8 = *param_2;
      lVar9 = *param_3;
      goto LAB_013c119c;
    }
  }
  lVar8 = 0;
LAB_013c119c:
  *param_2 = lVar9;
  *param_3 = lVar8;
  return 2;
}


