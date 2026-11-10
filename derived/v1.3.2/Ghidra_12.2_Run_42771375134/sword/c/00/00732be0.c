/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00732be0; name: _INIT_298
 */


void _INIT_298(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_02715c58;
  puVar1 = PTR_DAT_02715c58 + 0x20;
  *(undefined8 *)PTR_DAT_02715c58 = 0xcbf29ce484222645;
  *(undefined1 **)(puVar2 + 8) = &DAT_01d38550;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_006fbc40(puVar1);
  FUN_006fbc40(puVar2 + 0x210);
  FUN_001001c0(PTR_LAB_02715c60,puVar2,&PTR_LOOP_025db000);
  return;
}


