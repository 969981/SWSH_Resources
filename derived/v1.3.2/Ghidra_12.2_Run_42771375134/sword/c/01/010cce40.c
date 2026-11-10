/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cce40; name: FUN_010cce40
 */


void FUN_010cce40(long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_58;
  
  FUN_00ff86a0(&local_58,*(undefined8 *)(*(long *)(param_2 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_58 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  lVar4 = *(long *)(param_2 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar4 + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(lVar4 + 0x2e8);
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar2 = 0;
  if (param_3 < 0x1a) {
    if ((1 << (ulong)(param_3 & 0x1f) & 0x921daU) == 0) {
      if (param_3 == 0x19) {
        if (2 < param_4) {
          param_4 = 0;
        }
        uVar2 = (ulong)param_4;
        puVar1 = &DAT_02163da8 + uVar2 * 8;
        goto LAB_010ccf54;
      }
    }
    else {
      uVar2 = (ulong)param_4;
      if (1 < param_4) {
        uVar2 = 0;
      }
    }
  }
  puVar1 = &DAT_02163d98 + uVar2 * 8;
LAB_010ccf54:
  FUN_0077eb10(lVar3,puVar1,lVar6);
  param_2 = param_2 + uVar2 * 8;
  FUN_014c62d0(lVar5,*(undefined8 *)(param_2 + 0x5d8),lVar6);
  lVar6 = *(long *)(param_2 + 0x5d8);
  *param_1 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


