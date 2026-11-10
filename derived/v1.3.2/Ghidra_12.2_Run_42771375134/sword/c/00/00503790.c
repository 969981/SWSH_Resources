/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00503790; name: FUN_00503790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503790(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  iVar2 = 1;
  if (param_2 != 1) {
    iVar2 = 2;
  }
  lVar6 = *(long *)(*(long *)(lVar1 + 0x40) + 0x50);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x1e0));
  lVar4 = *(long *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = 0;
  lVar1 = *(long *)(lVar4 + 8);
  puVar3 = *(undefined8 **)(lVar1 + 0x10);
  puVar3[8] = 0;
  *puVar3 = 0;
  if (*(long *)(lVar6 + 0x638) == 0) {
    *(undefined8 **)(lVar6 + 0x638) = puVar3;
  }
  else {
    **(undefined8 **)(lVar6 + 0x630) = puVar3;
  }
  *(undefined8 **)(lVar6 + 0x630) = puVar3;
  *(int *)(lVar6 + 0x628) = *(int *)(lVar6 + 0x628) + 1;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if ((iVar2 != 1) && (*(int *)(lVar1 + 0x20) != -1)) {
    FUN_004fea90(lVar6 + 0x2a0);
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e0));
  if (lVar4 != 0) {
    lVar1 = *(long *)(lVar4 + 0x18);
    (**(code **)(**(long **)(lVar4 + 0x20) + 0x30))(*(long **)(lVar4 + 0x20),lVar4,iVar2,1);
    if (lVar1 != 0) {
      lVar4 = lVar1;
      do {
        lVar5 = *(long *)(lVar4 + 0x18);
        lVar6 = lVar5;
        if (lVar1 != lVar4) {
          lVar6 = lVar1;
          _SUB_00000018 = lVar5;
        }
        lVar1 = lVar6;
        (**(code **)(**(long **)(lVar4 + 0x20) + 0x30))(*(long **)(lVar4 + 0x20),lVar4,iVar2,0);
        lVar4 = lVar5;
      } while (lVar5 != 0);
    }
  }
  return;
}


