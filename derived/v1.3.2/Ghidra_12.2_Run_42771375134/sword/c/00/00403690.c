/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00403690; name: _INIT_82
 */


void _INIT_82(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_LAB_02712a20;
  puVar2 = PTR_LAB_02712a18;
  puVar1 = PTR_DAT_02712a10;
  *(undefined4 *)(PTR_DAT_02712a10 + 0x10) = 0x8b;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  *(undefined **)(puVar1 + 0x20) = puVar3;
  puVar2 = PTR_DAT_02712a28;
  uVar4 = *(undefined8 *)PTR_DAT_02712a28;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)puVar1 = uVar4;
  *(undefined8 *)(puVar1 + 8) = 3;
  return;
}


