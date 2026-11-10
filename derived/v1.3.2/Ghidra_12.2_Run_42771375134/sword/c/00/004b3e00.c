/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b3e00; name: FUN_004b3e00
 */


undefined8 FUN_004b3e00(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar2 = PTR_DAT_02712a90;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar4 = 0;
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  *(undefined4 *)(param_1 + 0x30) = 8;
  do {
    puVar1 = puVar3;
    *puVar1 = puVar1 + 3;
    uVar4 = uVar4 + 1;
    puVar3 = puVar1 + 3;
  } while (uVar4 < *(uint *)(param_1 + 0x30));
  *puVar1 = 0;
  puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar2,0x100);
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return 0x34;
  }
  uVar4 = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar3;
  *(undefined4 *)(param_1 + 0x60) = 8;
  do {
    puVar1 = puVar3;
    *puVar1 = puVar1 + 4;
    uVar4 = uVar4 + 1;
    puVar3 = puVar1 + 4;
  } while (uVar4 < *(uint *)(param_1 + 0x60));
  *puVar1 = 0;
  return 1;
}


