/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f22b0; name: FUN_009f22b0
 */


void FUN_009f22b0(long param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if (lVar1 == 0) {
    local_38 = 0x9b8f628046d8773d;
    FUN_0167b9b0(0,&local_38,param_2 & 1);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    local_38 = 0x9b8f628046d8773d;
    FUN_0167b9b0(lVar1,&local_38,param_2 & 1);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


