/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bfd90; name: FUN_004bfd90
 */


void FUN_004bfd90(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_027134a0;
  puVar1 = PTR_DAT_02712a90;
  puVar3 = *(undefined8 **)(PTR_DAT_027134a0 + 0x10);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_004bfe80();
      puVar3 = *(undefined8 **)(puVar2 + 0x10);
      if (puVar3 != (undefined8 *)0x0) goto LAB_004bfdc8;
      puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar1,0x20);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_004bfe30;
      }
    }
    *puVar3 = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 **)(puVar2 + 0x10) = puVar3;
    puVar4 = *(undefined8 **)(puVar2 + 8);
    if (puVar4 == (undefined8 *)0x0) goto LAB_004bfe08;
LAB_004bfdd0:
    *puVar4 = puVar3;
    puVar3 = *(undefined8 **)(puVar2 + 0x10);
  }
  else {
LAB_004bfdc8:
    puVar4 = *(undefined8 **)(puVar2 + 8);
    if (puVar4 != (undefined8 *)0x0) goto LAB_004bfdd0;
LAB_004bfe08:
    *(undefined8 **)puVar2 = puVar3;
  }
  *(undefined8 **)(puVar2 + 8) = puVar3;
  *(undefined8 *)(puVar2 + 0x10) = *puVar3;
  *puVar3 = 0;
  *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + 1;
  puVar3 = (undefined8 *)(*(long *)(puVar2 + 8) + 8);
LAB_004bfe30:
  *puVar3 = param_2;
  *(undefined4 *)(puVar3 + 1) = param_3;
  *(undefined4 *)((long)puVar3 + 0xc) = param_4;
  *(undefined4 *)(puVar3 + 2) = param_1;
  return;
}


