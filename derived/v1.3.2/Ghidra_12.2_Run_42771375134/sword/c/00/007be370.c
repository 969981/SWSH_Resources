/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007be370; name: FUN_007be370
 */


undefined8 FUN_007be370(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  long *local_38;
  
  if ((1 < *(int *)(param_1 + 0x78) - 1U) && (uVar2 = *(ulong *)(param_1 + 0x118), uVar2 < 100)) {
    plVar3 = *(long **)(param_1 + 0x110);
    local_38 = plVar3 + uVar2 * 2;
    if (uVar2 != 0) {
      lVar4 = uVar2 << 4;
      do {
        if ((*plVar3 == *param_2) && (plVar3[1] == param_2[1])) goto LAB_007be3ec;
        lVar4 = lVar4 + -0x10;
        plVar3 = plVar3 + 2;
      } while (lVar4 != 0);
      plVar3 = local_38;
    }
LAB_007be3ec:
    if (local_38 == plVar3) {
      if (*(ulong *)(param_1 + 0x120) <= uVar2) {
        FUN_007befe0(auStack_40,(undefined8 *)(param_1 + 0xd0),&local_38,1,param_2);
        return 1;
      }
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar5;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar1 = param_2[1];
      *local_38 = *param_2;
      local_38[1] = lVar1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
      return 1;
    }
  }
  return 0;
}


