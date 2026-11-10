/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00460600; name: FUN_00460600
 */


int FUN_00460600(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *local_38;
  
  local_38 = (long *)0x0;
  iVar2 = FUN_0045f190(PTR_PTR_02712da8,param_2,&local_38);
  if (iVar2 == 1 && local_38 != (long *)0x0) {
    iVar2 = (**(code **)(*local_38 + 0x20))(local_38,PTR_PTR_02712da8,param_3,param_4);
    plVar1 = local_38;
    if (iVar2 == 1) {
      plVar3 = *(long **)(param_1 + 0x38);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,PTR_PTR_02712da8);
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      iVar2 = 1;
      *(int *)(param_1 + 0x30) = (int)param_2;
      *(long **)(param_1 + 0x38) = plVar1;
    }
    else {
      (**(code **)(*local_38 + 0x28))(local_38,PTR_PTR_02712da8);
    }
  }
  else {
    *(int *)(param_1 + 0x30) = (int)param_2;
    iVar2 = 1;
  }
  return iVar2;
}


