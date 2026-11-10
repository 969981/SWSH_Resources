/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00467ee0; name: FUN_00467ee0
 */


undefined8 FUN_00467ee0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  *(undefined4 *)PTR_DAT_02712ee8 = 0;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x3000);
  puVar2 = PTR_DAT_02713108;
  *(undefined8 **)(PTR_DAT_02713108 + 0x18) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar4 = 0;
  *(undefined8 **)(puVar2 + 0x10) = puVar3;
  *(undefined4 *)(puVar2 + 0x20) = 0x200;
  do {
    puVar1 = puVar3;
    *puVar1 = puVar1 + 3;
    uVar4 = uVar4 + 1;
    puVar3 = puVar1 + 3;
  } while (uVar4 < *(uint *)(puVar2 + 0x20));
  *puVar1 = 0;
  return 1;
}


