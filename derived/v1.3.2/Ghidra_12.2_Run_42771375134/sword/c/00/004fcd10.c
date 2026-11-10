/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fcd10; name: FUN_004fcd10
 */


int FUN_004fcd10(long *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  uVar1 = *(uint *)(param_1 + 0x13);
  local_50 = 0;
  local_48 = 0;
  uStack_4c = param_2;
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  iVar2 = FUN_004fc330(param_1,&local_50,*(undefined4 *)(param_1[10] + 0x610));
  if (iVar2 == 1) {
    if (uVar1 < *(uint *)(param_1 + 0x13)) {
      (**(code **)(*param_1 + 0x100))(param_1,param_2);
      FUN_004fcbe0(param_1);
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0xbb) = 1;
    (**(code **)(*param_1 + 0xb8))(param_1);
    FUN_004fcbe0(param_1);
    if (param_1[1] != 0) {
      FUN_004fff50(param_1[10],param_1);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return iVar2;
}


