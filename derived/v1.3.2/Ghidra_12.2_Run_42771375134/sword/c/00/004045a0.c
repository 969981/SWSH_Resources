/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004045a0; name: FUN_004045a0
 */


void FUN_004045a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_02712a48;
  puVar1 = PTR_DAT_02712a40;
  if (DAT_02737984 == '\x01') {
    if (0 < *(int *)PTR_DAT_02712a48) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + lVar4) != 0) {
          FUN_00405710(uVar3 & 0xffffffff);
        }
        nn::os::FinalizeMutex((MutexType *)(lVar5 + lVar4 + 0x30));
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x68;
      } while ((long)uVar3 < (long)*(int *)puVar2);
    }
    puVar1 = PTR_DAT_02712a40;
    FUN_00774a20(*(undefined8 *)PTR_DAT_02712a40);
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)PTR_DAT_02712a50 = 0;
    *(undefined8 *)puVar1 = 0;
    DAT_02737984 = '\0';
  }
  return;
}


