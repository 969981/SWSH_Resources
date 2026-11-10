/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d714a0; name: FUN_00d714a0
 */


uint FUN_00d714a0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_30;
  undefined4 local_24;
  
  local_30 = 0;
  FUN_00d70af0(param_1,&local_24,&local_30);
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x218);
  if (lVar2 == 0) {
    uVar1 = FUN_0153a300(0,local_24,&local_30);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    uVar1 = FUN_0153a300(lVar2,local_24,&local_30);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  return uVar1 & 1;
}


