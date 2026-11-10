/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00482eb0; name: FUN_00482eb0
 */


void FUN_00482eb0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_48 = param_1 + 0x30;
  local_38 = 2;
  lStack_40 = param_1;
  FUN_004779e0(*(undefined8 *)PTR_DAT_02712dc0,&local_48,param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x78);
  if (((param_4 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x80), plVar2 == (long *)0x0)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,param_4 & 1);
    }
  }
  else {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2,param_3,0);
      plVar2 = *(long **)(param_1 + 0x80);
    }
    (**(code **)(*plVar2 + 0x148))(plVar2,param_2,param_3,0);
  }
  return;
}


