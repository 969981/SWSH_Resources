/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0aa0; name: FUN_00df0aa0
 */


void FUN_00df0aa0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xa0);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0xa8);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  *(undefined8 *)(param_1 + 200) = uVar2;
  FUN_00df08b0();
  if (*(char *)(param_1 + 0xe3) == '\0') {
    FUN_00def150(param_1);
    FUN_00dee9e0(param_1);
  }
  FUN_00deec30(param_1,1);
  if (*(long *)(param_1 + 0x120) == -0x340d631b7bddd9bb) {
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xf8);
    cVar4 = *(char *)(param_1 + 0xe3);
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    uVar5 = FUN_015114c0(lVar7,*(undefined8 *)(param_1 + 0x120));
    *(undefined4 *)(param_1 + 0x128) = uVar5;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    cVar4 = *(char *)(param_1 + 0xe3);
  }
  if (cVar4 == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xf0);
  plVar6 = *(long **)(param_1 + 0x70);
  if (iVar3 == 1) {
    local_50 = 0xc4abeaa4e5bf0a1e;
    local_48 = "kw50_eat01_Enabled";
    local_40 = 0x12;
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 != 2) {
        return;
      }
      local_50 = 0xa96c09b2c7be4b0a;
      local_48 = "to_kw21_sleepA01";
      local_40 = 0x10;
      local_38 = 0;
      (**(code **)(*plVar6 + 0x1b0))(plVar6,&local_50);
      goto joined_r0x00df0c74;
    }
    local_50 = 0xf36bfbb481ce3cd3;
    local_48 = "kw20_drowse01_Enabled";
    local_40 = 0x15;
  }
  local_38 = 0;
  (**(code **)(*plVar6 + 0x1a8))(plVar6,&local_50,1);
joined_r0x00df0c74:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


