/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00131f50; name: FUN_00131f50
 */


void FUN_00131f50(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  
  if ((1 < param_2) && (uVar1 = (ulong)*(uint *)(param_1 + 0x200), *(uint *)(param_1 + 0x200) != 0))
  {
    lVar3 = *(long *)(*(long *)(param_1 + 0x120) + 8);
    puVar2 = *(undefined8 **)(param_1 + 0x1f8);
    do {
      puVar4 = (uint *)*puVar2;
      puVar5 = (uint *)(lVar3 + (ulong)*puVar4 * 0x18);
      *puVar5 = puVar4[0xd];
      puVar5[1] = puVar4[0xe];
      puVar5[2] = puVar4[0xf];
      puVar5[3] = puVar4[0x10];
      puVar5[4] = puVar4[0x11];
      uVar1 = uVar1 - 1;
      puVar5[5] = puVar4[0x12];
      puVar2 = puVar2 + 1;
    } while (uVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x1dd) = 0;
  if ((*(int *)(param_1 + 0xf8) == 0 && *(int *)(param_1 + 0xe0) == 0) &&
      *(int *)(param_1 + 0x110) == 0) {
    (**(code **)(*param_5 + 0x28))(param_5);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x118) + 0x58))();
  return;
}


