/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f064f0; name: FUN_00f064f0
 */


void FUN_00f064f0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar1 = *(long *)(param_2 + 0x68);
  local_40 = param_4;
  uStack_38 = param_3;
  if (lVar1 == 0) {
    FUN_00f065a0(param_1,0,&local_48,&uStack_38,&local_40,param_5);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00f065a0(param_1,lVar1,&local_48,&uStack_38,&local_40,param_5);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


