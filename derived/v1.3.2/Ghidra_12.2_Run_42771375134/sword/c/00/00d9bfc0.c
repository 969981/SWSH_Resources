/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9bfc0; name: FUN_00d9bfc0
 */


void FUN_00d9bfc0(long *param_1)

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
  puVar1 = PTR_DAT_0271e698;
  param_1[0xc] = (long)"N_out_00";
  param_1[0xd] = -0x100000000;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0xd8);
  param_1[0xb] = (long)(puVar1 + 0x108);
  lVar3 = DAT_0264ea68;
  puVar1 = PTR_s_fade_rotom_00_fade_out_bflan_0264ea60;
  lVar2 = DAT_0264ea58;
  param_1[0xf] = (long)PTR_s_fade_rotom_00_fade_in_bflan_0264ea50;
  param_1[0x10] = lVar2;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = lVar3;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_00784cb0(param_1 + 0x16);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x32,0,0x110);
}


