/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00497660; name: FUN_00497660
 */


undefined8 FUN_00497660(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x80);
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar3 = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  *(undefined4 *)(param_1 + 0x20) = 8;
  do {
    puVar1 = puVar2;
    *puVar1 = puVar1 + 2;
    uVar3 = uVar3 + 1;
    puVar2 = puVar1 + 2;
  } while (uVar3 < *(uint *)(param_1 + 0x20));
  *puVar1 = 0;
  return 1;
}


