/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac3d0; name: FUN_006ac3d0
 */


void FUN_006ac3d0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != *(long **)(param_1 + 0x18)) {
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
    if (lVar2 == param_2) {
      return;
    }
  }
  *(long *)(param_2 + 8) = param_1;
  plVar1 = *(long **)(param_1 + 0x18);
  local_28 = param_2;
  if (plVar1 == *(long **)(param_1 + 0x20)) {
    FUN_006ac5e0((long *)(param_1 + 0x10),&local_28);
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  *plVar1 = local_28;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
  return;
}


