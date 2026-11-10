/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a546a0; name: FUN_00a546a0
 */


void FUN_00a546a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  long local_38;
  
  FUN_006cf0a0(auStack_60,&DAT_0262f8f0);
  uVar2 = FUN_00ff93c0(param_1);
  FUN_00ff8620(&local_38,uVar2,auStack_60,10);
  lVar3 = *(long *)(local_38 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar5 = *(long *)(param_1 + 0x2b0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar5 + 0x2e8);
  plVar1 = (long *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  FUN_01036e20(param_2);
  if (lVar4 == 0) {
    FUN_0077eb10(lVar3,&DAT_02154f68,0);
    local_68 = 0;
    FUN_01036db0(param_2,0,1,&local_68);
    lVar5 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
      lVar5 = local_68;
    }
  }
  else {
    FUN_0077eb10(lVar3,&DAT_02154f68,lVar4);
    local_68 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar1);
    FUN_01036db0(param_2,0,1,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar5 = local_68;
  }
  local_68 = lVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


