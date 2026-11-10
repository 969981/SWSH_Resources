/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d5e20; name: FUN_006d5e20
 */


undefined8 FUN_006d5e20(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  local_38 = param_2;
  uVar1 = FUN_006d0510();
  if ((uVar1 & 1) == 0) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x330));
    puVar3 = *(undefined8 **)(param_1 + 0x308);
    if (puVar3 == *(undefined8 **)(param_1 + 0x310)) {
      FUN_006d6720(param_1 + 0x300,&local_38);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x318);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_006d5f88;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar3 = local_38;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x308) = *(long *)(param_1 + 0x308) + 8;
    }
    FUN_006d69b0(*(undefined8 *)(param_1 + 0x358));
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x350));
  }
  else {
    if (*(long *)(param_1 + 0x380) == 0) {
      *(undefined8 *)(param_1 + 0x380) = param_2;
      return 0;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x330));
    puVar3 = *(undefined8 **)(param_1 + 0x308);
    if (puVar3 == *(undefined8 **)(param_1 + 0x310)) {
      FUN_006d6720(param_1 + 0x300,&local_38);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x318);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006d5f88:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar3 = local_38;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x308) = *(long *)(param_1 + 0x308) + 8;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x330));
  return 1;
}


