/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f8ba0; name: FUN_012f8ba0
 */


uint FUN_012f8ba0(long *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_44 [2];
  long local_40;
  long *local_38;
  
  local_68 = (long *)param_2[1];
  FUN_0075efb0(&local_60,*param_2,0,1);
  iVar1 = (**(code **)(*local_68 + 0x60))();
  FUN_0075f0a0(&local_60);
  FUN_012f8a30(&local_68,param_1,param_2);
  plVar3 = local_68;
  if (local_68 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_1[0x1c] == 0) {
      uVar2 = 0;
    }
    else {
      local_44[0] = (**(code **)(*param_1 + 0x38))(param_1);
      local_38 = plVar3;
      local_40 = (long)iVar1;
      uVar2 = (*(code *)param_1[0x1c])(param_1 + 0x20,&local_38,&local_40,local_44);
      plVar3 = local_68;
      if (local_68 == (long *)0x0) goto LAB_012f8c94;
    }
    local_68 = (long *)0x0;
    (**(code **)(*local_60 + 0x18))(local_60,plVar3,uStack_58,local_50);
  }
LAB_012f8c94:
  return uVar2 & 1;
}


