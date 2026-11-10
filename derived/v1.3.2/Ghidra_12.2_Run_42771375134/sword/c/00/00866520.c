/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00866520; name: FUN_00866520
 */


void FUN_00866520(long *param_1)

{
  void *__s;
  long lVar1;
  
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,0x148,4);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_1;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x148);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


