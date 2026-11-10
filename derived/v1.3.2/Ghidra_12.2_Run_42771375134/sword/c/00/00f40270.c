/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f40270; name: FUN_00f40270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f40270(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    plVar4 = *(long **)(param_1 + 0xe0);
    do {
      lVar3 = lVar3 + -1;
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
  }
  uVar2 = _UNK_01d4b578;
  uVar1 = _DAT_01d4b570;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  *(undefined8 *)(param_1 + 0x1b8) = uVar2;
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  return;
}


