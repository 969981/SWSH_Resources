/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004789e0; name: FUN_004789e0
 */


void FUN_004789e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  FUN_00474750(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)PTR_DAT_02712ac0);
  puVar1 = PTR_DAT_02712ae8;
  lVar2 = *(long *)PTR_DAT_02712ae8;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x188));
  lVar4 = *(long *)puVar1;
  if (*(uint *)(lVar4 + 0x1b0) == 0) {
LAB_00478a8c:
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x188));
    FUN_00475540(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  lVar3 = **(long **)(lVar4 + 0x1a8);
  if (lVar3 == 0) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1;
      if (*(uint *)(lVar4 + 0x1b0) <= uVar5) goto LAB_00478a8c;
      lVar3 = (*(long **)(lVar4 + 0x1a8))[uVar5];
    } while (lVar3 == 0);
  }
  else {
    uVar5 = 0;
  }
  do {
    do {
      FUN_0046b9d0(lVar3);
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != 0);
    do {
      uVar5 = uVar5 + 1;
      if (*(uint *)(lVar4 + 0x1b0) <= uVar5) goto LAB_00478a8c;
      lVar3 = *(long *)(*(long *)(lVar4 + 0x1a8) + (ulong)uVar5 * 8);
    } while (lVar3 == 0);
  } while( true );
}


