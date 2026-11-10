/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb6470; name: FUN_00bb6470
 */


void FUN_00bb6470(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = param_1 + 0x100;
  plVar2 = (long *)FUN_00ffdc80(lVar1,"poke_panel");
  FUN_016b2d70(plVar2,1);
  (**(code **)(*plVar2 + 0x50))(plVar2);
  uVar3 = FUN_00ffdc80(lVar1,"marking_panel");
  FUN_016b2d70(uVar3,0);
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar4 == 0)) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_48 = &local_38;
    local_40 = 0xe2c06acab97c29c2;
    local_38 = 0;
    FUN_01037340(lVar4,&local_48,0);
    uVar3 = local_38;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  FUN_016b2d70(uVar3,1);
  if (*(char *)(param_1 + 0x620) == '\0') {
    local_48 = (undefined8 *)0x24b1606b667538d3;
    uVar3 = FUN_00ffdef0(lVar1,&local_48);
    FUN_016b2da0(uVar3,1);
  }
  FUN_00ffa3d0(param_1,0);
  FUN_00ffa160(param_1,1,1);
  return;
}


