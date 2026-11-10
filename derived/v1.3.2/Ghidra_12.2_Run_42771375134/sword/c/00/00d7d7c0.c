/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7d7c0; name: FUN_00d7d7c0
 */


void FUN_00d7d7c0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_38;
  
  FUN_01036e20(*(undefined8 *)(param_1 + 0x660));
  FUN_00d70930(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar4 = *(long *)(param_1 + 0x2b0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  if (*(int *)(*(long *)(param_1 + 0x5f0) + 0xe8) != 0) {
    local_48 = 0x5064c48bbd7d366e;
    FUN_0077eb10(local_38,&local_48,lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x660);
    local_50 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN_01036db0(uVar5,0,0,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  local_48 = 0x5064c58bbd7d3821;
  FUN_0077eb10(local_38,&local_48,lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x660);
  local_58 = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar5,1,1,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if ((*(int *)(param_1 + 0x5dc) == 4) || (*(int *)(param_1 + 0x5dc) == 1)) {
    lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar1 = FUN_01524df0(lVar4);
    lVar1 = *(long *)(lVar1 + 0x48);
    plVar2 = (long *)FUN_00cbd3c0();
    lVar6 = *plVar2;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar1 != lVar6) {
      local_48 = 0x5064bc8bbd7d28d6;
      if (*(char *)(param_1 + 0x668) != '\0') {
        local_48 = 0x50684a8bbd804ff7;
      }
      FUN_0077eb10(local_38,&local_48,lVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x660);
      local_60 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_01036db0(uVar5,2,2,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


