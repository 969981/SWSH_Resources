/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00106930; name: _INIT_53
 */


void _INIT_53(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710988;
  if ((*PTR_DAT_02710988 & 1) == 0) {
    FUN_001001c0(&LAB_00106980,PTR_DAT_02710850,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


