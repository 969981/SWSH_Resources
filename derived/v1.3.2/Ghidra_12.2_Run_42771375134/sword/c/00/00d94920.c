/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d94920; name: FUN_00d94920
 */


void FUN_00d94920(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_02710a18 + 0x10);
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  puVar1 = PTR_DAT_0271e670;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0xd8);
  param_1[0xb] = (long)(puVar1 + 0x108);
  memcpy(param_1 + 0xc,&PTR_s_N_fade_cross_00_0264e1a8,0x88);
  memcpy(param_1 + 0x1d,&DAT_02160344,0xc0);
  memcpy(param_1 + 0x35,&PTR_s_fade_common_00_fade_out_bflan_0264e230,0x210);
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  FUN_00784cb0(param_1 + 0x7a);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x96,0,0x110);
}


