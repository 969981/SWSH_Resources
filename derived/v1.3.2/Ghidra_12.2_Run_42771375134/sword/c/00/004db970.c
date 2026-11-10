/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004db970; name: FUN_004db970
 */


void FUN_004db970(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  FUN_004dda80(*(undefined8 *)(param_1 + 0x70),0);
  puVar4 = *(undefined8 **)(param_1 + 0x70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar4)(puVar4);
    FUN_00404870(uVar1,puVar4);
  }
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x78);
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x18);
  *(undefined8 *)(param_1 + 0x78) = 0;
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x18;
  }
  *(long *)(param_1 + 0x20) = lVar3;
  FUN_004ddaf0();
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
  lVar3 = *(long *)(*(long *)(param_1 + 0x70) + 0x18);
  *(undefined1 *)(lVar3 + 0x26f) = *(undefined1 *)(lVar3 + 0x26f);
  *(uint *)(lVar3 + 0x26b) = *(uint *)(lVar3 + 0x26b) & 0xfbffffff;
  return;
}


