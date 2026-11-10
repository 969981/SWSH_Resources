/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00782bb0; name: FUN_00782bb0
 */


void FUN_00782bb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  local_38 = param_2;
  local_40 = FUN_00782fb0(auStack_28,*(undefined8 *)(param_1 + 8),&local_38,param_3);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if (plVar1 < *(long **)(param_1 + 0x68)) {
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *plVar1 = local_40;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
  }
  else {
    FUN_00783250(param_1 + 0x58,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  return;
}


