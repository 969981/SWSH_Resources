/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cbd00; name: FUN_010cbd00
 */


void FUN_010cbd00(long *param_1)

{
  void *__s;
  long lVar1;
  
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,0xd00,0x10);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_1;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0xd00);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


