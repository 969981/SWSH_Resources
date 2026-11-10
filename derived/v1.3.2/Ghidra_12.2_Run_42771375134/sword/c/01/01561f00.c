/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01561f00; name: FUN_01561f00
 */


void FUN_01561f00(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined4 local_34;
  
  uVar5 = *(undefined8 *)PTR_DAT_02710798;
  iVar4 = *(int *)(param_1 + 0x2fc);
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      uVar2 = FUN_0153d710(uVar5);
      if ((uVar2 & 1) != 0) goto LAB_01561f64;
      iVar4 = *(int *)(param_1 + 0x2fc);
    }
    if (iVar4 != 4) goto LAB_01562044;
  }
LAB_01561f64:
  local_34 = 0;
  uVar3 = FUN_0153bf80(uVar5,&local_34);
  uVar6 = *(undefined8 *)(param_1 + 8);
  FUN_01560eb0(&local_70,param_1 + 0x300,0,0);
  FUN_0155b230(uVar3,uVar6,&local_70);
  if ((local_58 != 0) && (local_70 != 0)) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  local_70 = 0;
  uStack_68 = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  FUN_0153bf80(uVar5,&local_34);
  uVar2 = FUN_0155b360();
  while ((uVar2 & 1) == 0) {
    nn::os::SleepThread(&LAB_00989680);
    FUN_0153bf80(uVar5,&local_34);
    uVar2 = FUN_0155b360();
  }
  FUN_0153bf80(uVar5,&local_34);
  iVar1 = FUN_0155b380();
  iVar4 = *(int *)(param_1 + 0x378);
  if (*(int *)(param_1 + 0x378) <= iVar1) {
    iVar4 = iVar1;
  }
  *(int *)(param_1 + 0x378) = iVar4;
  iVar4 = *(int *)(param_1 + 0x2fc);
LAB_01562044:
  if ((iVar4 == 4) || (iVar4 == 2)) {
    local_34 = 0;
    uVar3 = FUN_0153bf80(uVar5,&local_34);
    uVar6 = *(undefined8 *)(param_1 + 8);
    FUN_01560eb0(&local_70,param_1 + 0x300,0,1);
    FUN_0155b230(uVar3,uVar6,&local_70);
    if ((local_58 != 0) && (local_70 != 0)) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    local_70 = 0;
    uStack_68 = 0xcbf29ce484222645;
    local_60 = &DAT_01d38550;
    local_58 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_0153bf80(uVar5,&local_34);
    uVar2 = FUN_0155b360();
    while ((uVar2 & 1) == 0) {
      nn::os::SleepThread(&LAB_00989680);
      FUN_0153bf80(uVar5,&local_34);
      uVar2 = FUN_0155b360();
    }
    FUN_0153bf80(uVar5,&local_34);
    iVar1 = FUN_0155b380();
    iVar4 = *(int *)(param_1 + 0x378);
    if (*(int *)(param_1 + 0x378) <= iVar1) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x378) = iVar4;
    iVar4 = *(int *)(param_1 + 0x2fc);
  }
  if (iVar4 - 3U < 2) {
    local_34 = 1;
    uVar3 = FUN_0153bf80(uVar5,&local_34);
    uVar6 = *(undefined8 *)(param_1 + 8);
    FUN_01560eb0(&local_70,param_1 + 0x300,1,0);
    FUN_0155b230(uVar3,uVar6,&local_70);
    if ((local_58 != 0) && (local_70 != 0)) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    local_70 = 0;
    uStack_68 = 0xcbf29ce484222645;
    local_60 = &DAT_01d38550;
    local_58 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    FUN_0153bf80(uVar5,&local_34);
    uVar2 = FUN_0155b360();
    while ((uVar2 & 1) == 0) {
      nn::os::SleepThread(&LAB_00989680);
      FUN_0153bf80(uVar5,&local_34);
      uVar2 = FUN_0155b360();
    }
    FUN_0153bf80(uVar5,&local_34);
    iVar1 = FUN_0155b380();
    iVar4 = *(int *)(param_1 + 0x378);
    if (*(int *)(param_1 + 0x378) <= iVar1) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x378) = iVar4;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x358));
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x378);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x358));
  FUN_006d0650(param_1);
  return;
}


