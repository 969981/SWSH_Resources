/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c41b0; name: _INIT_144
 */


void _INIT_144(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  DAT_02765878 = 0xffffffff;
  DAT_02765868 = 0;
  DAT_02765870 = 0;
  DAT_02765880 = PTR_DAT_02713958 + 0x10;
  DAT_02765858 = 0;
  DAT_02765860 = 0;
  DAT_02765890 = 0;
  DAT_02765898 = 0;
  DAT_027658c0 = 0;
  DAT_027658c8 = 0;
  DAT_027658b0 = 0;
  DAT_027658b8 = 0;
  DAT_02765888 = 0;
  DAT_027658a0 = 0x78;
  DAT_027658a8 = 0;
  DAT_02765888 = FUN_005bc6f0();
  FUN_001001c0(PTR_FUN_02713960,&DAT_02765858,&PTR_LOOP_025db000);
  DAT_027658d0 = PTR_DAT_02713e90 + 0x10;
  FUN_005c8750(&DAT_027658d8);
  DAT_02765900 = 0x10000;
  puVar1 = PTR_DAT_02713ea0 + 0x10;
  plVar4 = &DAT_02765908;
  do {
    plVar4[3] = 0;
    plVar4[4] = 0;
    *plVar4 = (long)puVar1;
    plVar4[1] = 0;
    plVar4[2] = 0;
    lVar3 = FUN_005bc6f0();
    plVar4[1] = lVar3;
    puVar2 = PTR_FUN_02713eb8;
    plVar4 = plVar4 + 5;
  } while (plVar4 != &DAT_029e5908);
  DAT_029e5940 = 0;
  DAT_029e5930 = 0;
  DAT_029e5928 = 0;
  DAT_029e5920 = 0;
  DAT_029e5918 = 0;
  DAT_029e5910 = 0;
  DAT_029e5938 = 0;
  DAT_029e5908 = 0;
  DAT_029e5948 = 0xffffffffffffffff;
  DAT_029e5950 = 0;
  DAT_029e5958 = 0xffffffffffffffff;
  *PTR_DAT_02713e98 = 1;
  FUN_001001c0(puVar2,&DAT_027658d0,&PTR_LOOP_025db000);
  return;
}


