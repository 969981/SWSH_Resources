/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723ae0; name: FUN_00723ae0
 */


void FUN_00723ae0(long *param_1,long *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  local_50 = 0;
  uStack_48 = 0;
  thunk_FUN_0199c850(lVar2 + 0x58,&local_50);
  FUN_0199e6d0(param_3,param_4 << 1,&local_50,
               (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0));
  FUN_0199e760(param_3,param_1 + 5,param_4 << 1);
  local_50 = 0;
  uStack_48 = 0;
  thunk_FUN_0199c850(*param_1 + 200,&local_50);
  uVar1 = param_4 << 1 | 1;
  FUN_0199e6d0(param_3,uVar1,&local_50,
               (long)*(int *)(*param_1 + 0xc4) * (long)*(int *)(*param_1 + 0xc0));
  FUN_0199e760(param_3,param_1 + 6,uVar1);
  return;
}


