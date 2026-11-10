/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f32130; name: FUN_00f32130
 */


void FUN_00f32130(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_68;
  char *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  
  puVar2 = PTR_DAT_02710848;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar3 + 0x1e0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_015ab8d0(&local_68,lVar4,*(undefined8 *)(param_1 + 0x18));
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar5 + 0x1e0);
    if (lVar6 == 0) {
      FUN_015ab9c0(0,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      plVar7 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_015ab9c0(lVar6,*(undefined8 *)(param_1 + 0x18));
      *(undefined8 *)(param_1 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  local_68 = -0x2f243b0dde039157;
  local_60 = "script/circuit.dat";
  local_58 = 0x12;
  local_50 = 0;
  FUN_015ab670(&local_48,lVar4,&local_68,1);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  puVar1 = (undefined8 *)PTR_DAT_02710920;
  if (*(long *)(local_48 + 0x68) != 0) {
    puVar1 = (undefined8 *)(*(long *)(local_48 + 0x68) + 0x58);
  }
  *(undefined8 *)(param_1 + 0x18) = *puVar1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


