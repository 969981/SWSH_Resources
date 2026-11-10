/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00befe70; name: FUN_00befe70
 */


void FUN_00befe70(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong local_28;
  
  lVar1 = *(long *)(param_1 + 0x5e0);
  if (lVar1 != 0) {
    if (param_2 == 1) {
      local_28 = 0x45e0f9e3249f;
    }
    else {
      if (param_2 != 0) {
        return;
      }
      local_28 = 0x44e0f9e322ec;
    }
    local_28 = local_28 | 0xdd31000000000000;
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar2 == 0) {
      FUN_0077eb10(lVar1,&local_28,0);
      return;
    }
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(lVar1,&local_28,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


