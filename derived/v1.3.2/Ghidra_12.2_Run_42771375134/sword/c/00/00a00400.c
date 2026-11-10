/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a00400; name: FUN_00a00400
 */


void FUN_00a00400(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_38;
  undefined8 uStack_28;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar1 = *(long *)(param_2 + 0x68);
  uStack_28 = param_3;
  if (lVar1 == 0) {
    FUN_00a004a0(param_1,0,&local_38,&uStack_28);
  }
  else {
    plVar2 = (long *)(lVar1 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_00a004a0(param_1,lVar1,&local_38,&uStack_28);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return;
}


