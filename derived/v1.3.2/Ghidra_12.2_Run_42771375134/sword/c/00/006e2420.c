/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e2420; name: FUN_006e2420
 */


void FUN_006e2420(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02715528 + 0x60;
  puVar2 = PTR_DAT_02715528 + 0xa0;
  *param_1 = (long)(PTR_DAT_02715528 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x2d] != 0) {
    (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
    param_1[0x2d] = 0;
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x2a));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x26));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x22));
  lVar3 = param_1[0x1c];
  if (lVar3 != 0) {
    param_1[0x1d] = lVar3;
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],lVar3,param_1[0x1e] - lVar3,8);
  }
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    param_1[0x17] = lVar3;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],lVar3,param_1[0x18] - lVar3,8);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if ((param_1[0xf] != 0) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x340d631b7bddd9bb;
  param_1[0xe] = (long)&DAT_01d38550;
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


