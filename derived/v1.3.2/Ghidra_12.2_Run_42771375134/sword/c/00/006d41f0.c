/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d41f0; name: FUN_006d41f0
 */


void FUN_006d41f0(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  local_38 = param_2;
  uVar3 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
  if ((uVar3 & 1) == 0) {
    nn::os::LockMutex(pMVar1);
    puVar2 = *(undefined8 **)(param_1 + 0xf8);
    if (puVar2 == *(undefined8 **)(param_1 + 0x100)) {
      FUN_006d2a90(param_1 + 0xf0,&local_38);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x108);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_006d431c;
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar2 = local_38;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 8;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x128);
    if (puVar2 == *(undefined8 **)(param_1 + 0x130)) {
      FUN_006d2a90(param_1 + 0x120,&local_38);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x138);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_006d431c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      *puVar2 = local_38;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + 8;
    }
  }
  return;
}


