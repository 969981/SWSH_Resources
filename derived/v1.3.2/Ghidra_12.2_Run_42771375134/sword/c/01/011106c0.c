/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011106c0; name: FUN_011106c0
 */


void FUN_011106c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  FUN_010f5f90(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(lVar4 + 0x4c0);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x58), lVar2 == 0)) {
    uVar5 = 0;
    uVar1 = FUN_016b55c0(0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(lVar4 + 0x4c0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_38 = &local_28;
    local_30 = 0x18cd1891cbc1757a;
    local_28 = 0;
    FUN_008a0cd0(lVar2,&local_38,0);
    uVar5 = local_28;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    uVar1 = FUN_016b55c0(uVar5);
  }
  if ((uVar1 & 1) == 0) {
    FUN_016b5550(uVar5);
  }
  return;
}


