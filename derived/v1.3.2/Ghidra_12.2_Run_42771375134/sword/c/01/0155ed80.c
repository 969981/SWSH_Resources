/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155ed80; name: FUN_0155ed80
 */


void FUN_0155ed80(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  if ((param_3 == (long *)0x0) || (*param_3 == -0x340d631b7bddd9bb)) {
    *param_1 = 0;
    return;
  }
  plVar2 = *(long **)(param_2 + 0x48);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x120,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar1);
}


