/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d060; name: FUN_0153d060
 */


bool FUN_0153d060(long param_1,undefined4 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x158));
  if (*(long *)(param_1 + 0x138) == 0) {
    plVar4 = *(long **)(param_1 + 0x98);
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_01560720(lVar2,*(undefined8 *)(param_1 + 0xa0),param_2,param_1 + 0xa8);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar3 = *(long *)(param_1 + 0x138);
    *(long *)(param_1 + 0x138) = lVar2;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar3 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
                (*(long **)(param_1 + 0x140),lVar3,*(undefined8 *)(param_1 + 0x148),
                 *(undefined8 *)(param_1 + 0x150));
      lVar2 = *(long *)(param_1 + 0x138);
    }
    bVar1 = lVar2 != 0;
    *(long **)(param_1 + 0x140) = plVar4;
    *(undefined8 *)(param_1 + 0x148) = 0x10;
    *(undefined8 *)(param_1 + 0x150) = 8;
  }
  else {
    bVar1 = false;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  return bVar1;
}


