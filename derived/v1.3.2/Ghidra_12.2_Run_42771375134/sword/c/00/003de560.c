/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de560; name: FUN_003de560
 */


void FUN_003de560(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong *puVar9;
  undefined1 auStack_78 [40];
  
  FUN_003c1de0(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(param_1 + 0x720));
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    lVar8 = *(long *)(param_1 + 0x20);
    uVar7 = 0;
    puVar9 = (ulong *)(lVar8 + 0x80);
    do {
      if (puVar9 < (ulong *)(lVar8 + (ulong)uVar1 * 8)) {
        uVar2 = *puVar9;
        uVar4 = uVar2 >> 6;
        uVar5 = uVar2 + 0x3ff >> 6;
        uVar3 = (1 - uVar4) + uVar5;
        if ((uVar3 & 7) != 0) {
          lVar6 = -(uVar3 & 7);
          do {
            Hint_Prefetch(uVar2,0,0,0);
            uVar2 = uVar2 + 0x40;
            uVar3 = uVar3 - 1;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0);
        }
        if (6 < uVar5 - uVar4) {
          do {
            Hint_Prefetch(uVar2,0,0,0);
            Hint_Prefetch(uVar2 + 0x40,0,0,0);
            uVar3 = uVar3 - 8;
            Hint_Prefetch(uVar2 + 0x80,0,0,0);
            Hint_Prefetch(uVar2 + 0xc0,0,0,0);
            Hint_Prefetch(uVar2 + 0x100,0,0,0);
            Hint_Prefetch(uVar2 + 0x140,0,0,0);
            Hint_Prefetch(uVar2 + 0x180,0,0,0);
            Hint_Prefetch(uVar2 + 0x1c0,0,0,0);
            uVar2 = uVar2 + 0x200;
          } while (uVar3 != 0);
        }
        puVar9 = puVar9 + 1;
      }
      FUN_003bd8a0(*(undefined8 *)(lVar8 + uVar7 * 8));
      FUN_003c0620(*(undefined4 *)(param_1 + 0x7bc));
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar1);
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_78);
  FUN_003cffa0(*(undefined8 *)(param_1 + 0x1048),auStack_78,*(uint *)(param_1 + 0x110c) >> 4 & 1);
  *(uint *)(param_1 + 0x1108) = *(uint *)(param_1 + 0x1108) & 0xfffffff9;
  return;
}


