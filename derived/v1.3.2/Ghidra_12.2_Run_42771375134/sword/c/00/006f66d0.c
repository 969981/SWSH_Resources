/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f66d0; name: FUN_006f66d0
 */


void FUN_006f66d0(long param_1,undefined4 param_2,long param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_0199bf10(&local_50);
  local_50 = CONCAT44(param_2,(int)(param_4 * param_3));
  uVar1 = FUN_0199c550(PTR_DAT_027155e8,&local_50);
  FUN_006f1b70(&local_70,param_5,0,param_4 * param_3,uVar1);
  *(undefined8 *)(param_1 + 0x48) = local_70;
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(long *)(param_1 + 0x50) = local_68;
  *(undefined8 *)(param_1 + 0x58) = local_60;
  *(undefined8 *)(param_1 + 0x60) = local_58;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0;
  FUN_006f6820(&local_70);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  uVar1 = FUN_006f6880((undefined8 *)(param_1 + 0x48));
  FUN_0199c6b0(param_1,PTR_DAT_027155e8,&local_50,uVar1,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60));
  *(int *)(param_1 + 0x68) = (int)param_3;
  *(int *)(param_1 + 0x6c) = param_4;
  return;
}


