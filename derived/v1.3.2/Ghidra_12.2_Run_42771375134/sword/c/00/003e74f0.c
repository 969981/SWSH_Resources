/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e74f0; name: FUN_003e74f0
 */


void FUN_003e74f0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar2 = *(long *)(param_1 + 0x1048);
  *(undefined4 *)(lVar2 + 0x48) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0xffffffff;
  FUN_003cc480(lVar2,0);
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar5 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = uVar5 * 8;
    puVar6 = (undefined8 *)(lVar3 + 0x80);
    puVar8 = (undefined8 *)(lVar3 + (ulong)(uVar1 - 1) * 8);
    do {
      puVar7 = puVar6;
      if (puVar6 < (undefined8 *)(lVar3 + lVar2)) {
        puVar7 = puVar6 + 1;
        Hint_Prefetch(*puVar6,0,0,0);
      }
      uVar4 = *puVar8;
      FUN_003bd8a0(uVar4);
      FUN_003c08b0();
      FUN_003bea10(uVar4);
      uVar1 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar1;
      puVar6 = puVar7;
      puVar8 = puVar8 + -1;
    } while (uVar1 != 0);
  }
  if (*(char *)(param_1 + 0x10ea) == '\0') {
    FUN_00111a60(*(long *)(param_1 + 0x720) + 0x28);
    FUN_00111a60(*(long *)(param_1 + 0x720) + 0x28);
    return;
  }
  return;
}


