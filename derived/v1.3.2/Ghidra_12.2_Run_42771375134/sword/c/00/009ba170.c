/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ba170; name: FUN_009ba170
 */


uint FUN_009ba170(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined2 local_54 [2];
  undefined8 local_50;
  long lStack_48;
  long *local_38;
  
  local_78 = (long *)param_2[1];
  FUN_0075efb0(&local_70,*param_2,0,1);
  iVar1 = (**(code **)(*local_78 + 0x60))();
  FUN_0075f0a0(&local_70);
  FUN_009ba3c0(&local_78,param_1,param_2);
  plVar3 = local_78;
  if (local_78 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_1[0xc] == 0) {
      uVar2 = 0;
    }
    else {
      local_54[0] = (**(code **)(*param_1 + 0x38))(param_1);
      local_38 = plVar3;
      local_50 = param_3;
      lStack_48 = (long)iVar1;
      uVar2 = (*(code *)param_1[0xc])(param_1 + 0x10,&local_38,&lStack_48,&local_50,local_54);
      plVar3 = local_78;
      if (local_78 == (long *)0x0) goto LAB_009ba270;
    }
    local_78 = (long *)0x0;
    (**(code **)(*local_70 + 0x18))(local_70,plVar3,uStack_68,local_60);
  }
LAB_009ba270:
  return uVar2 & 1;
}


