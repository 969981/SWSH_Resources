/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df0f0; name: FUN_007df0f0
 */


void FUN_007df0f0(undefined8 *param_1,long *param_2)

{
  void *__s;
  long lVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x100000,1);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar1 + 0x80) < 0x10) {
    *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = param_2;
    *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x100000);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


