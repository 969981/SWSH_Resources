/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bad810; name: FUN_00bad810
 */


void FUN_00bad810(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_38 = &local_28;
    local_30 = 0xe2c06acab97c29c2;
    local_28 = 0;
    FUN_01037340(lVar2,&local_38,0);
    uVar1 = local_28;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  FUN_016bbde0(uVar1,0);
  FUN_016bbde0(uVar1,1);
  FUN_016bbde0(uVar1,2);
  FUN_016bbde0(uVar1,3);
  FUN_016bbde0(uVar1,4);
  return;
}


