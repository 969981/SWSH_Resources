/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5990; name: FUN_004b5990
 */


undefined8 FUN_004b5990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x50);
  puVar1 = (undefined8 *)*puVar4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar1 = *puVar4;
    *puVar4 = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x40) = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar4;
  }
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  *(undefined8 *)(param_1 + 0x50) = *puVar1;
  *puVar1 = 0;
  lVar3 = *(long *)(param_1 + 0x48);
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  *(undefined8 *)(lVar3 + 8) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  return 1;
}


