/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00503a40; name: _INIT_108
 */


void _INIT_108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_DAT_02713888;
  *(undefined4 *)(PTR_DAT_02713888 + 0x10) = 4;
  puVar3 = PTR_LAB_02713890;
  puVar1 = PTR_DAT_02712a28;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  puVar4 = PTR_LAB_02713898;
  *(undefined **)(puVar2 + 0x28) = puVar3;
  *(undefined **)(puVar2 + 0x30) = puVar4;
  *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined **)puVar1 = puVar2;
  return;
}


