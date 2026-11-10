/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d92bc0; name: FUN_00d92bc0
 */


undefined8 FUN_00d92bc0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_60;
  long local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  undefined4 local_38;
  uint local_34;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 == (undefined8 *)0x0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    plVar4 = (long *)FUN_00d919f0();
    puVar6 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      do {
        if (plVar3 == plVar4) {
          puVar6 = puVar5 + -10;
          goto LAB_00d92c18;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
      puVar6 = (undefined8 *)0x0;
    }
  }
LAB_00d92c18:
  plVar3 = (long *)FUN_00d8f6f0(puVar6);
  local_38 = 0;
  local_34 = (uint)*(byte *)((long)plVar3 + 0x2c);
  while( true ) {
    while( true ) {
      lVar7 = *plVar3;
      if (*(char *)((long)plVar3 + 0x2d) == '\0') {
        uVar2 = FUN_0087a5f0(lVar7);
        iVar1 = FUN_0087c9f0(lVar7,uVar2,&local_34,&local_38,0);
        *(char *)((long)plVar3 + 0x2c) = (char)local_34;
      }
      else {
        iVar1 = FUN_0087cba0(lVar7,&local_34,&local_38,0);
        *(char *)((long)plVar3 + 0x2c) = (char)local_34;
      }
      if (iVar1 != 3) break;
      if (*(char *)((long)plVar3 + 0x2d) != '\0') {
        return 3;
      }
      *(undefined1 *)((long)plVar3 + 0x2d) = 1;
      local_34 = 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)((long)plVar3 + 0x24) = local_38;
      FUN_00d8fbb0(&local_58,puVar6);
      FUN_014c7bf0(local_58,0,*plVar3);
      FUN_014c9660(local_58,1,local_38);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      return 2;
    }
    if (iVar1 == 0) break;
    if (iVar1 != 2) {
      return 3;
    }
  }
  *(undefined4 *)((long)plVar3 + 0x24) = local_38;
  FUN_00d8fbb0(&local_58,puVar6);
  FUN_014c7bf0(local_58,0,*plVar3);
  FUN_014c9660(local_58,1,local_38);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  local_58 = -0x1576521039458059;
  local_50 = "LEARN_SKILL";
  local_48 = 0xb;
  local_40 = 0;
  uVar2 = *(undefined4 *)((long)plVar3 + 0x24);
  local_60 = *plVar3;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
  }
  FUN_014af7f0(&local_58,uVar2,&local_60);
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return 1;
}


