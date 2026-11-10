/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc3640; name: FUN_00bc3640
 */


void FUN_00bc3640(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x2e0);
  if (lVar2 == 0) {
    FUN_014ca220(0,0,param_2,2,0,1);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_014ca220(lVar2,0,param_2,2,0,1);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_00bb6fe0(param_1,0xd428013d2ec93639,0xafe0d57485c8b575);
  local_48 = 0x2ed8fd2a5b97e2dd;
  FUN_00ffd010(param_1 + 0x100,&local_48);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


