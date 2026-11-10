/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01563d60; name: FUN_01563d60
 */


void FUN_01563d60(long param_1)

{
  void *__s;
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  __s = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,0x110,0x10);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar2;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x110);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


