/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c05b0; name: _INIT_101
 */


void _INIT_101(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_027134a8;
  puVar1 = PTR_DAT_027134a0;
  *(undefined4 *)PTR_DAT_027134a8 = 0;
  puVar3 = PTR_DAT_027134b0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1 = PTR_DAT_02712df8;
  *(undefined8 *)puVar3 = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  FUN_004810c0(puVar1,0x100,1,1);
  return;
}


