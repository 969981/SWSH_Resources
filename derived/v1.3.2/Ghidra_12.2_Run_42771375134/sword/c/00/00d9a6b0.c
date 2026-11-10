/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9a6b0; name: FUN_00d9a6b0
 */


void FUN_00d9a6b0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_0271e688;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  param_1[0xb] = param_2;
  param_1[0xc] = (long)puVar1;
  FUN_012b4040(param_1 + 0x2e);
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_00d9a78c;
  }
  lVar3 = FUN_0075ecb0();
LAB_00d9a78c:
  param_1[0x33] = lVar3;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x39] = lVar3;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


