/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be900; name: FUN_004be900
 */


undefined8 FUN_004be900(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  
  *(undefined4 *)PTR_DAT_027132c8 = 0;
  *(undefined4 *)PTR_DAT_02713498 = 0;
  *(undefined4 *)PTR_DAT_02712e00 = 0;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x800);
  puVar2 = PTR_DAT_027134a0;
  *(undefined8 **)(PTR_DAT_027134a0 + 0x18) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar5 = 0;
  *(undefined8 **)(puVar2 + 0x10) = puVar3;
  *(undefined4 *)(puVar2 + 0x20) = 0x40;
  do {
    puVar1 = puVar3;
    *puVar1 = puVar1 + 4;
    uVar5 = uVar5 + 1;
    puVar3 = puVar1 + 4;
  } while (uVar5 < *(uint *)(puVar2 + 0x20));
  *puVar1 = 0;
  *(undefined8 *)(PTR_DAT_02712df8 + 0x20) = 0;
  uVar4 = FUN_004339f0();
  return uVar4;
}


