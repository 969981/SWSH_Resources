/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2420; name: _INIT_333
 */


void _INIT_333(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716b90;
  if ((*PTR_DAT_02716b90 & 1) == 0) {
    FUN_001001c0(&LAB_007c2470,PTR_DAT_02716b80,&PTR_LOOP_025db000);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


