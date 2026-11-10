/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5eb0; name: _INIT_99
 */


void _INIT_99(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_02713400;
  *(undefined4 *)(PTR_DAT_02713400 + 0x10) = 0xae;
  puVar1 = PTR_DAT_02712a28;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar3 = PTR_LAB_02713408;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar4 = PTR_DAT_02713410;
  uVar5 = *(undefined8 *)puVar1;
  *(undefined **)(puVar2 + 0x18) = puVar3;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)puVar4 = puVar2;
  *(undefined8 *)(puVar4 + 8) = 7;
  *(undefined8 *)puVar2 = uVar5;
  *(undefined8 *)(puVar2 + 8) = 7;
  *(undefined4 *)(puVar4 + 0x10) = 0xb5;
  puVar2 = PTR_LAB_02713418;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined **)puVar1 = puVar4;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  return;
}


