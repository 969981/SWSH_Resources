/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d14d0; name: FUN_006d14d0
 */


void FUN_006d14d0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_28;
  
  plVar3 = *(long **)(param_1 + 0xf0);
  plVar5 = *(long **)(param_1 + 0xf8);
  local_28 = param_2;
  if ((plVar3 != plVar5) && (*plVar3 != param_2)) {
    do {
      plVar3 = plVar3 + 1;
      if (plVar5 == plVar3) goto LAB_006d1554;
    } while (*plVar3 != param_2);
  }
  if (plVar3 == plVar5) {
LAB_006d1554:
    if (plVar5 == *(long **)(param_1 + 0x100)) {
      FUN_006d2a90((undefined8 *)(param_1 + 0xf0),&local_28);
      uVar4 = *(ulong *)(param_1 + 0x130);
      uVar2 = (uint)uVar4;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x108);
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar6;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
      *plVar5 = local_28;
      *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
      *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 8;
      uVar4 = *(ulong *)(param_1 + 0x130);
      uVar2 = (uint)uVar4;
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x130);
    uVar2 = (uint)uVar4;
  }
  if ((uVar2 >> 2 & 1) == 0) {
    *(ulong *)(param_1 + 0x130) = uVar4 | 4;
    FUN_006d4320(*(undefined8 *)(param_1 + 0x160),param_1);
  }
  return;
}


