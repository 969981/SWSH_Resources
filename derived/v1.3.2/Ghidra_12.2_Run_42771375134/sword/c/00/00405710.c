/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00405710; name: FUN_00405710
 */


int FUN_00405710(int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_004049c0();
  if (iVar1 == 1) {
    lVar4 = *(long *)PTR_DAT_02712a40;
    lVar3 = lVar4 + (long)param_1 * 0x68;
    lVar5 = (long)param_1;
    nn::os::LockMutex((MutexType *)(lVar3 + 0x30));
    if ((*(byte *)(lVar3 + 0x28) >> 3 & 1) != 0) {
      lVar2 = lVar4 + lVar5 * 0x68;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
    }
    if ((*(byte *)(lVar4 + lVar5 * 0x68 + 0x2c) & 1) != 0) {
      lVar4 = lVar4 + lVar5 * 0x68;
      FUN_00774a20(*(undefined8 *)(lVar4 + 8));
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
    }
    FUN_00404470(lVar3);
    *(int *)PTR_DAT_02712a50 = *(int *)PTR_DAT_02712a50 + -1;
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x30));
  }
  return iVar1;
}


