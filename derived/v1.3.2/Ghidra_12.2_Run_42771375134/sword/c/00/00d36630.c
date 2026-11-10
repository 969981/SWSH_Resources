/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d36630; name: FUN_00d36630
 */


bool FUN_00d36630(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long local_50;
  long local_48;
  long local_38;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  lVar6 = param_1 + 0x60;
  puVar3 = (undefined8 *)FUN_00d11ca0(local_38 + 0xf8,lVar6);
  uVar7 = *puVar3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00d1bae0(&local_48,uVar7);
  if (local_48 != 0) {
    bVar2 = *(char *)(local_48 + 0xa4) != '\0';
    goto LAB_00d36744;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  puVar3 = (undefined8 *)FUN_00d11ca0(local_38 + 0xf8,lVar6);
  uVar7 = *puVar3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN_00d1bc50(&local_50,uVar7);
  if (local_50 != 0) {
    cVar1 = *(char *)(local_50 + 0xa4);
    goto joined_r0x00d368c8;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  plVar4 = (long *)FUN_00d11ca0(local_38 + 0xf8,lVar6);
  lVar8 = *plVar4;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(lVar8 + 0x108) != 0) {
    plVar4 = *(long **)(lVar8 + 0x100);
    do {
      plVar9 = plVar4 + 1;
      uVar5 = FUN_00d2e340(*plVar4 + 0x50);
      if ((uVar5 & 1) != 0) {
        lVar8 = *plVar4 + 0x50;
        uVar5 = FUN_00d2e340(lVar8);
        if ((uVar5 & 1) != 0) goto LAB_00d36898;
        break;
      }
      plVar4 = plVar9;
    } while (plVar9 != (long *)(*(long *)(lVar8 + 0x100) + *(long *)(lVar8 + 0x108) * 8));
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  plVar4 = (long *)FUN_00d11ca0(local_38 + 0xf8,lVar6);
  lVar8 = *plVar4;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(lVar8 + 0x108) != 0) {
    plVar4 = *(long **)(lVar8 + 0x100);
    do {
      plVar9 = plVar4 + 1;
      uVar5 = FUN_00d2e430(*plVar4 + 0x50);
      if ((uVar5 & 1) != 0) {
        lVar8 = *plVar4 + 0x50;
        uVar5 = FUN_00d2e430(lVar8);
        if ((uVar5 & 1) != 0) goto LAB_00d36898;
        break;
      }
      plVar4 = plVar9;
    } while (plVar9 != (long *)(*(long *)(lVar8 + 0x100) + *(long *)(lVar8 + 0x108) * 8));
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    local_38 = 0;
  }
  else {
    FUN_00d1a020(&local_38);
  }
  plVar4 = (long *)FUN_00d11ca0(local_38 + 0xf8,lVar6);
  lVar6 = *plVar4;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (*(long *)(lVar6 + 0x108) != 0) {
    plVar4 = *(long **)(lVar6 + 0x100);
    do {
      plVar9 = plVar4 + 1;
      uVar5 = FUN_00d37cb0(*plVar4 + 0x50);
      if ((uVar5 & 1) != 0) {
        lVar6 = *plVar4;
        uVar5 = FUN_00d37cb0(lVar6 + 0x50);
        if ((uVar5 & 1) != 0) {
          plVar4 = (long *)(lVar6 + 0x48);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          bVar2 = *(char *)(lVar6 + 0xa4) != '\0';
          (**(code **)(*plVar4 + 0x18))(plVar4);
          goto joined_r0x00d36994;
        }
        break;
      }
      plVar4 = plVar9;
    } while (plVar9 != (long *)(*(long *)(lVar6 + 0x100) + *(long *)(lVar6 + 0x108) * 8));
  }
  bVar2 = false;
joined_r0x00d36994:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 == 0) {
    return bVar2;
  }
LAB_00d36744:
  (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  return bVar2;
LAB_00d36898:
  plVar4 = (long *)(lVar8 + -8);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  cVar1 = *(char *)(lVar8 + 0x54);
  (**(code **)(*plVar4 + 0x18))(plVar4);
joined_r0x00d368c8:
  bVar2 = cVar1 != '\0';
  goto joined_r0x00d36994;
}


