/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da3890; name: _INIT_1000
 */


void _INIT_1000(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0271e748;
  *(undefined8 *)PTR_DAT_0271e748 = 0x909154f55419b7fe;
  *(char **)(puVar2 + 8) = "bg_time_zone_type";
  *(undefined8 *)(puVar2 + 0x10) = 0x11;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar1 = PTR_LAB_027151a8;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271e750;
  *(undefined8 *)PTR_DAT_0271e750 = 0x44fd53971ed2fe87;
  *(char **)(puVar2 + 8) = "bg_time_zone_blend_frame";
  *(undefined8 *)(puVar2 + 0x10) = 0x18;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  return;
}


