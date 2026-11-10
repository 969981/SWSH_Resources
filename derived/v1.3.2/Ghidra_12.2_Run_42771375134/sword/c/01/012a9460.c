/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a9460; name: FUN_012a9460
 */


void FUN_012a9460(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa8));
  lVar2 = *(long *)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if ((ulong)((long)puVar1 - lVar2) < (ulong)((long)*(undefined8 **)(param_1 + 0x88) - lVar2)) {
    if (puVar1 < *(undefined8 **)(param_1 + 0x88)) {
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      uVar4 = *param_2;
      *param_2 = 0;
      *puVar1 = uVar4;
      uVar3 = param_2[3];
      uVar4 = param_2[2];
      puVar1[1] = param_2[1];
      puVar1[2] = uVar4;
      puVar1[3] = uVar3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 0x20;
    }
    else {
      FUN_012ac1f0((long *)(param_1 + 0x78),param_2);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa8));
  return;
}


