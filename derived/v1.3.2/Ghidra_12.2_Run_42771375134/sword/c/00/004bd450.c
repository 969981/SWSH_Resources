/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd450; name: FUN_004bd450
 */


undefined8 FUN_004bd450(long param_1)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [64];
  
  pMVar1 = (MutexType *)(param_1 + 0x160);
  nn::os::LockMutex(pMVar1);
  puVar2 = PTR_DAT_02712a90;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    do {
      puVar4 = *(undefined8 **)(param_1 + 0x180);
      memcpy(auStack_98,puVar4 + 1,0x48);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x180) = *puVar4;
        if (*(undefined8 **)(param_1 + 0x188) == puVar4) {
          *(undefined8 *)(param_1 + 0x188) = 0;
          puVar3 = *(undefined8 **)(param_1 + 0x198);
          if (puVar3 <= puVar4) goto LAB_004bd4d4;
LAB_004bd504:
          FUN_00404870(*(undefined4 *)puVar2,puVar4);
        }
        else {
          puVar3 = *(undefined8 **)(param_1 + 0x198);
          if (puVar4 < puVar3) goto LAB_004bd504;
LAB_004bd4d4:
          if (puVar3 + (ulong)*(uint *)(param_1 + 0x1a0) * 10 <= puVar4) goto LAB_004bd504;
          *puVar4 = *(undefined8 *)(param_1 + 400);
          *(undefined8 **)(param_1 + 400) = puVar4;
        }
        *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + -1;
      }
      nn::os::UnlockMutex(pMVar1);
      FUN_00442f50(param_1,auStack_98);
      FUN_00442030(auStack_90);
      nn::os::LockMutex(pMVar1);
    } while (*(int *)(param_1 + 0x1a4) != 0);
  }
  nn::os::UnlockMutex(pMVar1);
  return 1;
}


