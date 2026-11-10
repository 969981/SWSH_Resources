/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e59f0; name: _INIT_291
 */


void _INIT_291(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_LAB_02715550;
  puVar1 = PTR_DAT_02710908;
  *(undefined8 *)PTR_DAT_02710908 = 0;
  *(undefined8 *)(puVar1 + 8) = 0xcbf29ce484222645;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined1 **)(puVar1 + 0x10) = &DAT_01d38550;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


