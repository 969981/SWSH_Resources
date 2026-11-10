/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00881210; name: _INIT_366
 */


void _INIT_366(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_02710ac8;
  lVar4 = 0x36da0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  plVar3 = (long *)PTR_DAT_027173f8;
  while( true ) {
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = (long)puVar1;
    plVar3[1] = 0;
    if (lVar4 == 0) break;
    plVar3[0x36] = 0;
    plVar3[0x37] = 0;
    plVar3[0x34] = 0;
    plVar3[0x35] = 0;
    lVar4 = lVar4 + -0x220;
    plVar3[0x26] = 0;
    plVar3[0x27] = 0;
    plVar3[0x24] = 0;
    plVar3[0x25] = 0;
    plVar3[0x22] = (long)(puVar2 + 0x10);
    plVar3[0x23] = 0;
    plVar3 = plVar3 + 0x44;
  }
  FUN_001001c0(&LAB_008810a0,0,&PTR_LOOP_025db000);
  return;
}


