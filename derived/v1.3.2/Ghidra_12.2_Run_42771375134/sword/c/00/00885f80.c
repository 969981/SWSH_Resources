/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885f80; name: _INIT_367
 */


void _INIT_367(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02717418;
  *(undefined8 *)(PTR_DAT_02717418 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_001001c0(&LAB_00885a10,puVar1,&PTR_LOOP_025db000);
  return;
}


