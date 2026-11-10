/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042bcb0; name: _INIT_88
 */


void _INIT_88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_LAB_02712cf0;
  puVar1 = PTR_LAB_02712ce8;
  puVar2 = PTR_DAT_02712ce0;
  *(undefined4 *)(PTR_DAT_02712ce0 + 0x10) = 0x65;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  puVar1 = PTR_DAT_02712a28;
  uVar4 = *(undefined8 *)PTR_DAT_02712a28;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined **)puVar1 = puVar2;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)puVar2 = uVar4;
  *(undefined8 *)(puVar2 + 8) = 2;
  return;
}


