/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e6d30; name: FUN_006e6d30
 */


void FUN_006e6d30(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_006e16c0();
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  puVar1 = PTR_DAT_02715588;
  *param_1 = (long)(PTR_DAT_02715588 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  param_1[0x38] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x39] = lVar2;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  return;
}


