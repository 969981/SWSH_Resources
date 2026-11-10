/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01010090; name: FUN_01010090
 */


void FUN_01010090(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x290,8);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_006d08a0(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_006d08a0();
}


