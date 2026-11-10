/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0122b4d0; name: FUN_0122b4d0
 */


void FUN_0122b4d0(long *param_1)

{
  long lVar1;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_1;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,0xe0,0x10);
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006e1890(lVar1);
}


