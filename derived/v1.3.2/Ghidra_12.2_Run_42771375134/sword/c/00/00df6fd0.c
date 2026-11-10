/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6fd0; name: FUN_00df6fd0
 */


void FUN_00df6fd0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *pcStack_78;
  undefined8 local_70;
  long local_68;
  
  uVar4 = 3;
  if (*(int *)(param_1 + 0xb0) == 1) {
    uVar4 = 4;
  }
  if (*(int *)(param_1 + 0xf0) == 1) {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uVar7 = 0;
    puVar8 = (undefined4 *)(param_1 + 0xf8);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      FUN_01505f50(&local_90,lVar5,uVar1,uVar2,*(undefined8 *)(param_1 + 0x58));
      FUN_0087edf0(local_90,0x33);
      local_98 = local_90;
      local_80 = 0x716ee5ac7a33129d;
      pcStack_78 = "KNOCKOUT_BATTLEHOUSEBOSS";
      local_70 = 0x18;
      local_68 = 0;
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
      }
      FUN_014aed90(&local_80,&local_98);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      local_a0 = local_90;
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
      }
      FUN_01505ea0(lVar5,&local_a0,uVar1,uVar2);
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar7 < uVar4);
  }
  else {
    if (*(int *)(param_1 + 0xf0) != 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    plVar6 = *(long **)(lVar5 + 0x58);
    if (plVar6 != (long *)0x0) {
      (**(code **)(plVar6[9] + 0x10))();
    }
    uVar7 = 0;
    puVar8 = (undefined4 *)(param_1 + 0xf8);
    do {
      lVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,*puVar8);
      FUN_0087edf0(lVar3,0x33);
      local_80 = 0x716ee5ac7a33129d;
      pcStack_78 = "KNOCKOUT_BATTLEHOUSEBOSS";
      local_70 = 0x18;
      local_68 = 0;
      local_88 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
      }
      FUN_014aed90(&local_80,&local_88);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (uVar7 < uVar4);
    (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


