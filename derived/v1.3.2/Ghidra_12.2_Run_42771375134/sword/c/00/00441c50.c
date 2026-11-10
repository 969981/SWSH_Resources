/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00441c50; name: FUN_00441c50
 */


void FUN_00441c50(long param_1,undefined4 param_2,long param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x104) = *param_4;
  *(long *)(param_1 + 0x108) = param_3;
  if (param_3 == 0) {
    return;
  }
  FUN_004c4840(param_3);
  lVar3 = *(long *)(param_1 + 0x108);
  puVar4 = (undefined8 *)(lVar3 + 0x78);
  puVar1 = (undefined8 *)*puVar4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    *puVar1 = *puVar4;
    *puVar4 = puVar1;
    puVar2 = *(undefined8 **)(lVar3 + 0x70);
  }
  else {
    puVar2 = *(undefined8 **)(lVar3 + 0x70);
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(lVar3 + 0x68) = puVar1;
  }
  else {
    *puVar2 = puVar1;
    puVar1 = (undefined8 *)*puVar4;
  }
  *(undefined8 **)(lVar3 + 0x70) = puVar1;
  *(undefined8 *)(lVar3 + 0x78) = *puVar1;
  *puVar1 = 0;
  *(int *)(lVar3 + 0x8c) = *(int *)(lVar3 + 0x8c) + 1;
  lVar3 = *(long *)(lVar3 + 0x70);
  *(undefined4 *)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = param_1;
  return;
}


