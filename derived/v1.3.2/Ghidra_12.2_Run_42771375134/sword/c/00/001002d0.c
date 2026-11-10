/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001002d0; name: _INIT_3
 */


void _INIT_3(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710448;
  if ((*PTR_DAT_02710448 & 1) == 0) {
    FUN_001001c0(&LAB_00100320,PTR_DAT_02710450,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


