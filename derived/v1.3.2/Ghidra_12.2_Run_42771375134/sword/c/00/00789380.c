/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00789380; name: _INIT_301
 */


void _INIT_301(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LAB_027163c8;
  puVar1 = PTR_DAT_027163c0;
  *(undefined8 *)(PTR_DAT_027163c0 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


