/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00446cd0; name: FUN_00446cd0
 */


void FUN_00446cd0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)PTR_DAT_02712ae8;
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  nn::os::LockMutex((MutexType *)(lVar4 + 0xa8));
  if (*(uint *)(lVar4 + 0xd0) != 0) {
    plVar3 = (long *)**(undefined8 **)(lVar4 + 200);
    if (plVar3 != (long *)0x0) {
      uVar2 = 0;
      iVar1 = (int)plVar3[4];
      goto joined_r0x00446d28;
    }
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (*(uint *)(lVar4 + 0xd0) <= uVar2) goto LAB_00446e00;
      plVar3 = (long *)(*(undefined8 **)(lVar4 + 200))[uVar2];
    } while (plVar3 == (long *)0x0);
    do {
      iVar1 = (int)plVar3[4];
joined_r0x00446d28:
      if (iVar1 == 0) {
        plVar3 = (long *)plVar3[1];
        if (plVar3 == (long *)0x0) {
          do {
            uVar2 = uVar2 + 1;
            if (*(uint *)(lVar4 + 0xd0) <= uVar2) goto LAB_00446e00;
            plVar3 = *(long **)(*(long *)(lVar4 + 200) + (ulong)uVar2 * 8);
          } while (plVar3 == (long *)0x0);
        }
      }
      else {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((int)plVar3[4] != 0) {
          *(undefined4 *)(plVar3 + 4) = 0;
          FUN_00446bb0(param_1,plVar3);
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
        plVar5 = (long *)plVar3[1];
        if (plVar5 == (long *)0x0) {
          do {
            uVar2 = uVar2 + 1;
            if (*(uint *)(lVar4 + 0xd0) <= uVar2) {
              plVar5 = (long *)0x0;
              break;
            }
            plVar5 = *(long **)(*(long *)(lVar4 + 200) + (ulong)uVar2 * 8);
          } while (plVar5 == (long *)0x0);
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
        plVar3 = plVar5;
      }
    } while (plVar3 != (long *)0x0);
  }
LAB_00446e00:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0xa8));
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712af0);
  return;
}


