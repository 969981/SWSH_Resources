/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001070c0; name: _INIT_64
 */


void _INIT_64(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027109e0;
  if ((*PTR_DAT_027109e0 & 1) == 0) {
    FUN_001001c0(&LAB_00107110,PTR_DAT_027108b0,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


