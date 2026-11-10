/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbdff0; name: FUN_00fbdff0
 */


void FUN_00fbdff0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_28;
  
  FUN_01226090(param_2,"Disconnected");
  plVar1 = (long *)(param_2 + 0x280);
  plVar2 = (long *)FUN_00fba2d0(plVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x80))();
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  plVar1 = (long *)(param_2 + 0x288);
  plVar2 = (long *)FUN_00fba9b0(plVar1);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x80))();
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  FUN_01225e50(param_2);
  local_28 = FUN_0121b000();
  FUN_00fba430(param_1,&local_28);
  return;
}


