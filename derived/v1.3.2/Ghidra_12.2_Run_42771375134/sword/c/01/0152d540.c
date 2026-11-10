/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152d540; name: FUN_0152d540
 */


uint FUN_0152d540(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar8 = (long)puVar3 - (long)*(uint **)(param_1 + 8);
    if (0 < (long)uVar8) {
      puVar6 = *(uint **)(param_1 + 8);
      puVar7 = puVar3;
      do {
        puVar9 = (uint *)((long)puVar6 + (uVar8 >> 1 & 0x7fffffffffffffe0));
        if (*puVar9 == *param_2) goto LAB_0152d5d4;
        puVar2 = puVar9 + 8;
        if (*param_2 <= *puVar9) {
          puVar2 = puVar6;
          puVar7 = puVar9;
        }
        uVar8 = (long)puVar7 - (long)puVar2;
        puVar6 = puVar2;
      } while (0 < (long)uVar8);
    }
    puVar9 = puVar3;
LAB_0152d5d4:
    nn::os::UnlockMutex(pMVar1);
    if ((puVar9 == puVar3) || (puVar9 == (uint *)0x0)) {
      uVar4 = FUN_0152ef80(param_1,param_2,param_3,param_4);
    }
    else {
      uVar8 = FUN_014fd380(param_1,puVar9);
      if (((uVar8 & 1) == 0) && (plVar5 = *(long **)(param_1 + 0x58), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x58))(plVar5,param_2);
      }
      uVar4 = FUN_0152ed30(param_1,puVar9,param_3,param_4);
    }
  }
  else {
    if (*(long **)(param_1 + 0x58) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
    }
    uVar4 = 0;
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar4 & 1;
}


