/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006eaa40; name: _INIT_293
 */


void _INIT_293(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02715608;
  if ((*PTR_DAT_02715608 & 1) == 0) {
    FUN_001001c0(&LAB_006eaa90,PTR_DAT_027155f8,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


