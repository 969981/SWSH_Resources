/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d200; name: FUN_0045d200
 */


undefined8 FUN_0045d200(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  
  if ((*(int *)(param_1 + 0xa8) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) {
    if (*(int *)(param_1 + 0x48) != 1) {
      FUN_0045caa0(param_1,param_2,param_3);
    }
    puVar3 = PTR_DAT_02712de0;
    FUN_0043bd70(*(undefined8 *)PTR_DAT_02712de0,*(undefined4 *)(param_1 + 0x6c));
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (plVar4 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_1 + 0x78),0),
       plVar4 != (long *)0x0)) {
      FUN_00482c10(plVar4,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((*(int *)(param_1 + 0x90) != 0) &&
       (plVar4 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,*(int *)(param_1 + 0x90),0),
       plVar4 != (long *)0x0)) {
      FUN_00482c10(plVar4,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x6c),param_2,
                   param_3);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x28));
    iVar1 = *(int *)(*(long *)puVar3 + 0x78);
    iVar2 = *(int *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  }
  return 1;
}


