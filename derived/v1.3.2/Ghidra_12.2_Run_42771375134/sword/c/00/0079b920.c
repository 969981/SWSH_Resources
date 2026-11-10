/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079b920; name: _INIT_302
 */


void _INIT_302(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716598;
  if ((*PTR_DAT_02716598 & 1) == 0) {
    FUN_001001c0(&LAB_0079b970,PTR_DAT_02716578,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


