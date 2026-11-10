/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0f40; name: FUN_006d0f40
 */


void FUN_006d0f40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_38;
  long local_28;
  
  plVar3 = *(long **)(param_1 + 0x60);
  plVar4 = *(long **)(param_1 + 0x68);
  local_28 = param_2;
  if ((plVar3 != plVar4) && (*plVar3 != param_2)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar4 == plVar3) goto LAB_006d0f98;
    } while (*plVar3 != param_2);
  }
  if (plVar3 == plVar4) {
LAB_006d0f98:
    if (plVar4 == *(long **)(param_1 + 0x70)) {
      FUN_006d2a90((undefined8 *)(param_1 + 0x60),&local_28);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) goto LAB_006d10c8;
      *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar5;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      *plVar4 = local_28;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 8;
    }
  }
  lVar1 = local_28;
  plVar3 = *(long **)(local_28 + 0x90);
  plVar4 = *(long **)(local_28 + 0x98);
  if ((plVar3 != plVar4) && (*plVar3 != param_1)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar4 == plVar3) goto LAB_006d1048;
    } while (*plVar3 != param_1);
  }
  if (plVar3 == plVar4) {
LAB_006d1048:
    local_38 = param_1;
    if (plVar4 < *(long **)(local_28 + 0xa0)) {
      uVar5 = *(undefined8 *)(local_28 + 0xa8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_006d10c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar4 = local_38;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + 8;
    }
    else {
      FUN_006d2c50((undefined8 *)(local_28 + 0x90),&local_38);
    }
  }
  return;
}


