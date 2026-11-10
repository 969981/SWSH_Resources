/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ecf30; name: _INIT_395
 */


void _INIT_395(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02717c60;
  if ((*PTR_DAT_02717c60 & 1) == 0) {
    FUN_001001c0(&LAB_008ecf80,PTR_DAT_02717468,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


