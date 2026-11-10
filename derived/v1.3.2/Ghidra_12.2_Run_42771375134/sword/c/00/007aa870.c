/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aa870; name: FUN_007aa870
 */


void FUN_007aa870(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar3;
  *PTR_DAT_02716788 = 1;
  puVar1 = PTR_DAT_02716790;
  param_1[0x12] = 0;
  param_1[0x197] = 0;
  param_1[0x196] = 0;
  param_1[0x195] = 0;
  param_1[0x194] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = (long)(puVar1 + 0x40);
  param_1[10] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x198),false,0);
  param_1[0x19c] = 0;
  *(undefined4 *)(param_1 + 0x19d) = 0x8000;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x13,0,0xc08);
}


