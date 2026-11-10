/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171f90; name: FUN_01171f90
 */


undefined8 FUN_01171f90(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_128;
  long local_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [192];
  long *local_38;
  
  if ((((*(char *)(param_1 + 0x90) != '\0') && (lVar2 = *(long *)PTR_DAT_02718f20, lVar2 != 0)) &&
      (FUN_011ffb90(&local_38,lVar2,0), local_38 != (long *)0x0)) && (lVar4 = *local_38, lVar4 != 0)
     ) {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_009fc1c0(auStack_118,*(undefined8 *)(param_1 + 0x80));
    local_120 = *(long *)(param_1 + 0xa0);
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x10))();
    }
    FUN_009fc400(auStack_118,&local_120);
    if (local_120 != 0) {
      (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
      local_120 = 0;
    }
    local_128 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
    uVar1 = FUN_009fc470(auStack_118,&local_128,auStack_100);
    if (local_128 != 0) {
      (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
      local_128 = 0;
    }
    FUN_009fc1e0(auStack_118);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    if ((((uVar1 & 1) != 0) && (FUN_011ffb90(&local_38,lVar2,1), local_38 != (long *)0x0)) &&
       (lVar2 = *local_38, lVar2 != 0)) {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_009fc1c0(auStack_118,*(undefined8 *)(param_1 + 0x80));
      local_120 = *(long *)(param_1 + 0xa0);
      if (local_120 != 0) {
        (**(code **)(*(long *)(local_120 + 0x48) + 0x10))();
      }
      FUN_009fc400(auStack_118,&local_120);
      if (local_120 != 0) {
        (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
        local_120 = 0;
      }
      local_128 = lVar2;
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(plVar3);
      uVar1 = FUN_009fc470(auStack_118,&local_128,auStack_100);
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
        local_128 = 0;
      }
      FUN_009fc1e0(auStack_118);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}


