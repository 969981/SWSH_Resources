/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074be70; name: FUN_0074be70
 */


long FUN_0074be70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48;
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  nn::os::LockMutex((MutexType *)(param_1 + 0x788));
  lVar2 = FUN_0074ccb0(param_1,*(undefined8 *)(param_1 + 8),param_2,&uStack_38);
  FUN_0074bfb0(param_1);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x58);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    plVar1 = *(long **)(param_1 + 0x198);
    local_48 = lVar4;
    if (plVar1 < *(long **)(param_1 + 0x1a0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x1a8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar4 = local_48;
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      local_48 = 0;
      *plVar1 = lVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      *(long *)(param_1 + 0x198) = *(long *)(param_1 + 0x198) + 8;
    }
    else {
      FUN_0074cdc0(param_1 + 400,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    FUN_00723e00(param_1 + (ulong)*(uint *)(*(long *)(lVar2 + 0x78) + 0x60) * 0x50 + 0x1c0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x788));
  return lVar2;
}


