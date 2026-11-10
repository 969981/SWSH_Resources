/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e783b0; name: FUN_00e783b0
 */


undefined * FUN_00e783b0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long local_50;
  long local_48;
  long local_38;
  
  puVar5 = PTR_DAT_02715088;
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  while( true ) {
    if (puVar1 == puVar2) {
      return puVar5;
    }
    plVar7 = (long *)*puVar1;
    if ((plVar7 != (long *)0x0 && plVar7[0x34] == *param_1) &&
       (uVar4 = (**(code **)(*plVar7 + 0x88))(plVar7), (uVar4 & 1) == 0)) break;
    puVar1 = puVar1 + 1;
  }
  plVar6 = plVar7 + 9;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*plVar7 + 0x10))(&local_50,plVar7);
  local_48 = local_50;
  local_50 = 0;
  puVar5 = PTR_DAT_02715088;
  if (local_48 != 0) {
    lVar3 = local_38;
    if (*(int *)(local_48 + 0x54) != 0) {
      FUN_00deff50(&local_38,&local_48);
      puVar5 = (undefined *)(local_38 + 0xb0);
      lVar3 = 0;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
        lVar3 = local_38;
      }
    }
    local_38 = lVar3;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return puVar5;
}


