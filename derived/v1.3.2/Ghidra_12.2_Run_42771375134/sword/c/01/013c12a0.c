/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c12a0; name: FUN_013c12a0
 */


int FUN_013c12a0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = FUN_013c0fb0();
  lVar8 = *param_4;
  lVar7 = *param_3;
  if (lVar8 != 0 || lVar7 != 0) {
    if ((lVar8 == 0) && (lVar7 != 0)) {
      return iVar1;
    }
    if ((lVar8 == 0) || (lVar7 != 0)) {
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar2 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar3 = FUN_012b68c0(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar4 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar5 = FUN_012b68c0(*puVar6);
      if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
        return iVar1;
      }
      lVar7 = *param_3;
      lVar8 = *param_4;
    }
  }
  *param_3 = lVar8;
  *param_4 = lVar7;
  lVar8 = *param_3;
  lVar7 = *param_2;
  if (lVar8 != 0 || lVar7 != 0) {
    if ((lVar8 == 0) && (lVar7 != 0)) {
      return iVar1 + 1;
    }
    if ((lVar8 == 0) || (lVar7 != 0)) {
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar2 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar3 = FUN_012b68c0(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar4 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar5 = FUN_012b68c0(*puVar6);
      if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
        return iVar1 + 1;
      }
      lVar7 = *param_2;
      lVar8 = *param_3;
    }
  }
  *param_2 = lVar8;
  *param_3 = lVar7;
  lVar8 = *param_2;
  lVar7 = *param_1;
  if (lVar8 != 0 || lVar7 != 0) {
    if ((lVar8 == 0) && (lVar7 != 0)) {
      return iVar1 + 2;
    }
    if ((lVar8 == 0) || (lVar7 != 0)) {
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar2 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar8);
      iVar3 = FUN_012b68c0(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar4 = FUN_012b6590(*puVar6);
      puVar6 = (undefined8 *)FUN_012e3520(lVar7);
      iVar5 = FUN_012b68c0(*puVar6);
      if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
        return iVar1 + 2;
      }
      lVar7 = *param_1;
      lVar8 = *param_2;
    }
  }
  *param_1 = lVar8;
  *param_2 = lVar7;
  return iVar1 + 3;
}


