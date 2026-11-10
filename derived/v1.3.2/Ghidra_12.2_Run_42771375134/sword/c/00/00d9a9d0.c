/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9a9d0; name: FUN_00d9a9d0
 */


void FUN_00d9a9d0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
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
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar3 = PTR_DAT_0271e690;
  *param_1 = (long)(PTR_DAT_0271e690 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)(puVar3 + 0xd8);
  puVar2 = PTR_s_N_league_00_0264e788;
  puVar1 = PTR_s_N_logo_00_0264e780;
  param_1[0xb] = (long)(puVar3 + 0x108);
  param_1[0xc] = (long)puVar1;
  puVar1 = PTR_s_N_company_00_0264e798;
  param_1[0xe] = (long)PTR_s_N_champion_00_0264e790;
  param_1[0xf] = (long)puVar1;
  param_1[0xd] = (long)puVar2;
  memcpy(param_1 + 0x10,&PTR_s_fade_logo_g_00_logo_g_out_bflan_0264e7a0,0xc0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_00784cb0(param_1 + 0x2c);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x48,0,0x110);
}


