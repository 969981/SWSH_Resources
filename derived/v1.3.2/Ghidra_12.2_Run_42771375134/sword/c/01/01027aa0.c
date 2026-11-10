/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01027aa0; name: FUN_01027aa0
 */


void FUN_01027aa0(long *param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long local_48;
  
  if (param_1[2] != *param_2) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar1 = FUN_01027d50(param_2);
    local_48 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_50 = lVar4;
    if (lVar4 == 0) {
      uVar2 = FUN_01027f40(uVar1,&local_48,&local_50);
    }
    else {
      plVar5 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      uVar2 = FUN_01027f40(uVar1,&local_48,&local_50);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      local_50 = 0;
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if ((uVar2 & 1) != 0) {
      param_1[2] = *param_2;
    }
  }
  return;
}


