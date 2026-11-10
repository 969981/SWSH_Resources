/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bc770; name: _INIT_137
 */


void _INIT_137(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  DAT_02763c90 = 0xffffffff;
  DAT_02763c80 = 0;
  DAT_02763c88 = 0;
  DAT_02763c98 = PTR_DAT_02713958 + 0x10;
  DAT_02763c70 = 0;
  DAT_02763c78 = 0;
  DAT_02763ca8 = 0;
  DAT_02763cb0 = 0;
  DAT_02763cd8 = 0;
  DAT_02763ce0 = 0;
  DAT_02763cc8 = 0;
  DAT_02763cd0 = 0;
  DAT_02763ca0 = (undefined *)0x0;
  DAT_02763cb8 = 0x78;
  DAT_02763cc0 = 0;
  lVar1 = FUN_005bf860();
  puVar4 = PTR_DAT_02713df8;
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_005bf860();
    puVar3 = (undefined *)(**(code **)(*plVar2 + 0x60))();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
    }
  }
  DAT_02763ca0 = puVar4;
  FUN_001001c0(PTR_FUN_02713960,&DAT_02763c70,&PTR_LOOP_025db000);
  return;
}


