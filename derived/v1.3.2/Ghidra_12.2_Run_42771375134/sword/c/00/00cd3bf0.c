/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd3bf0; name: FUN_00cd3bf0
 */


void FUN_00cd3bf0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long local_28;
  
  if (*(char *)(param_1 + 0xb7) == '\0') {
    plVar4 = *(long **)(param_1 + 0x70);
    plVar3 = (long *)*plVar4;
    plVar1 = (long *)plVar4[1];
    if ((plVar3 != plVar1) && (*plVar3 != param_2)) {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) goto LAB_00cd3c5c;
      } while (*plVar3 != param_2);
    }
    if (plVar3 == plVar1) {
LAB_00cd3c5c:
      local_28 = param_2;
      if (plVar1 == (long *)plVar4[2]) {
        FUN_009ba660(plVar4,&local_28);
        return;
      }
      lVar5 = plVar4[3];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar5;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar1 = local_28;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      plVar4[1] = plVar4[1] + 8;
      return;
    }
  }
  return;
}


