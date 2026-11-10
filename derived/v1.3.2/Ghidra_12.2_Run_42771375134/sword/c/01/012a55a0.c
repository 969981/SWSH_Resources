/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a55a0; name: FUN_012a55a0
 */


void FUN_012a55a0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long local_28;
  
  if (param_2 != 0) {
    plVar3 = *(long **)(param_1 + 0x340);
    plVar2 = *(long **)(param_1 + 0x338);
    if ((ulong)((long)plVar3 - (long)plVar2 >> 3) < 5) {
      if ((plVar2 != plVar3) && (*plVar2 != param_2)) {
        do {
          plVar2 = plVar2 + 1;
          if (plVar3 == plVar2) goto LAB_012a561c;
        } while (*plVar2 != param_2);
      }
      if (plVar2 == plVar3) {
LAB_012a561c:
        local_28 = param_2;
        if (*(long **)(param_1 + 0x348) == plVar3) {
          FUN_009ba660(param_1 + 0x338,&local_28);
          return;
        }
        uVar4 = *(undefined8 *)(param_1 + 0x350);
        lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = uVar4;
        *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
        *plVar3 = local_28;
        *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
        *(long *)(param_1 + 0x340) = *(long *)(param_1 + 0x340) + 8;
        return;
      }
    }
  }
  return;
}


