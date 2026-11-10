/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077b8a0; name: FUN_0077b8a0
 */


void FUN_0077b8a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x5a));
  plVar1 = (long *)param_1[0x54];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[0x55] + 0x18))((long *)param_1[0x55],plVar1,0x40,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x4f];
  param_1[0x4f] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x51] + 0x18))((long *)param_1[0x51],lVar2,param_1[0x50] << 3,8);
  }
  plVar1 = (long *)param_1[0x49];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[2] != 0) {
      (**(code **)(*(long *)(plVar1[2] + 0x48) + 0x18))();
      plVar1[2] = 0;
    }
    (**(code **)(*(long *)param_1[0x4a] + 0x18))((long *)param_1[0x4a],plVar1,0x20,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x44];
  param_1[0x44] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x46] + 0x18))((long *)param_1[0x46],lVar2,param_1[0x45] << 3,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x40));
  plVar1 = (long *)param_1[0x3a];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[0x3b] + 0x18))((long *)param_1[0x3b],plVar1,0x48,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x37] + 0x18))((long *)param_1[0x37],lVar2,param_1[0x36] << 3,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x31));
  plVar1 = (long *)param_1[0x2b];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[0x2c] + 0x18))((long *)param_1[0x2c],plVar1,0x48,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x28] + 0x18))((long *)param_1[0x28],lVar2,param_1[0x27] << 3,8);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x22));
  plVar1 = (long *)param_1[0x1b];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[0x1c] + 0x18))((long *)param_1[0x1c],plVar1,0x30,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))((long *)param_1[0x18],lVar2,param_1[0x17] << 3,8);
  }
  plVar1 = (long *)param_1[0x10];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[0x11] + 0x18))((long *)param_1[0x11],plVar1,0x18,4);
    plVar1 = (long *)lVar2;
  }
  lVar2 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar2,param_1[0xc] << 3,4);
  }
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],plVar1,0x18,4);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077bb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[1] << 3,4);
  return;
}


