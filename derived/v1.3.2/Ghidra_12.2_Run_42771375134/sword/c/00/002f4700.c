/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f4700; name: _INIT_81
 */


void _INIT_81(void)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  puVar1 = &DAT_0273735c;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x101010101010101;
    puVar1 = puVar2;
  } while (puVar2 != (undefined8 *)&DAT_0273775c);
  DAT_02737330 = 0;
  DAT_02737338 = 0;
  FUN_001001c0(&LAB_002f46f0,0,&PTR_LOOP_025db000);
  return;
}


