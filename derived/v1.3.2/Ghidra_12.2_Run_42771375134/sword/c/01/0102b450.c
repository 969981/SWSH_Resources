/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102b450; name: _INIT_1244
 */


void _INIT_1244(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_02723840;
  puVar1 = PTR_LAB_027151a8;
  *(undefined8 *)PTR_DAT_02723840 = 0x1d68cc5b07165742;
  *(char **)(puVar2 + 8) = "WK_EV_REAL_DAYS";
  *(undefined8 *)(puVar2 + 0x10) = 0xf;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  return;
}


