/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bffa60; name: FUN_00bffa60
 */


void FUN_00bffa60(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5e0);
  if ((param_2 & 1) == 0) {
    local_38 = 0x5b7f00cef5c5;
  }
  else {
    local_38 = 0x5a7f00cef412;
  }
  local_38 = local_38 | 0xcfa3000000000000;
  lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar2 == 0) {
    FUN_0077eb10(uVar1,&local_38,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0077eb10(uVar1,&local_38,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  }
  if (lVar2 == 0) {
    uVar1 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,param_3,uVar1,10);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0077d470(lVar2);
    FUN_00ffd6a0(param_1 + 0x100,param_3,uVar1,10);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return;
}


