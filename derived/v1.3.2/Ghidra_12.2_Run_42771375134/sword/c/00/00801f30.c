/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00801f30; name: _INIT_359
 */


void _INIT_359(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02716f20;
  *(undefined4 *)PTR_DAT_02716f20 = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar2 = PTR_LAB_02716f28;
  FUN_001001c0(PTR_LAB_02716f28,puVar1,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02716f30;
  *(undefined4 *)PTR_DAT_02716f30 = 1;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02716f38;
  *(undefined4 *)PTR_DAT_02716f38 = 2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


