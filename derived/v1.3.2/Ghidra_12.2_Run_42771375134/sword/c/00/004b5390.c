/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5390; name: FUN_004b5390
 */


undefined8 FUN_004b5390(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  puVar4 = (undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined8 *)*puVar4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
    if (puVar1 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar1 = *puVar4;
    *puVar4 = puVar1;
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar4;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  *(undefined8 *)(param_1 + 0x20) = *puVar1;
  *puVar1 = 0;
  lVar3 = *(long *)(param_1 + 0x18);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  *(long *)(lVar3 + 8) = param_2;
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  return 1;
}


