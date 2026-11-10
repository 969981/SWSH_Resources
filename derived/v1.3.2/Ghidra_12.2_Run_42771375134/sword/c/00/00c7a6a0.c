/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7a6a0; name: FUN_00c7a6a0
 */


void FUN_00c7a6a0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_38;
  
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  lVar1 = *param_3;
  if (lVar1 == 0) {
    local_38 = 0;
  }
  else {
    plVar3 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    local_38 = lVar1;
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_00c7c720(param_1,uVar2,&local_38,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


