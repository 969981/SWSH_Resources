/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074c320; name: FUN_0074c320
 */


long FUN_0074c320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_48;
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  nn::os::LockMutex((MutexType *)(param_1 + 0x788));
  lVar1 = FUN_0074cfd0(param_1,*(undefined8 *)(param_1 + 8),param_2,&uStack_38);
  FUN_0074c460(param_1);
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    plVar4 = *(long **)(param_1 + 0x718);
    local_48 = lVar3;
    if (plVar4 < *(long **)(param_1 + 0x720)) {
      uVar5 = *(undefined8 *)(param_1 + 0x728);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar3 = local_48;
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      local_48 = 0;
      *plVar4 = lVar3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(param_1 + 0x718) = *(long *)(param_1 + 0x718) + 8;
    }
    else {
      FUN_0074d0e0(param_1 + 0x710,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    FUN_00735370(param_1 + 0x740,*(undefined8 *)(lVar1 + 400));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x788));
  return lVar1;
}


