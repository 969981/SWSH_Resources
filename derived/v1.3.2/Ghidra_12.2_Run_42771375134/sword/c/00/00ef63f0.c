/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef63f0; name: FUN_00ef63f0
 */


void FUN_00ef63f0(undefined8 param_1,long *param_2)

{
  long lVar1;
  void *__s;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x1b0,0x10);
  if (__s == (void *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Subroutine does not return */
    memset((void *)0x0,0,0x1b0);
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0,0x1b0);
}


