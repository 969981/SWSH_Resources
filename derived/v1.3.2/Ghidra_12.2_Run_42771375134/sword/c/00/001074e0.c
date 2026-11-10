/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001074e0; name: _INIT_70
 */


void _INIT_70(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02710a10;
  if ((*PTR_DAT_02710a10 & 1) == 0) {
    FUN_001001c0(&LAB_00107530,PTR_DAT_02710910,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


