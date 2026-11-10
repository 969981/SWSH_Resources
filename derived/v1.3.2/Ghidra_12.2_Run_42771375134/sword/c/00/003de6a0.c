/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de6a0; name: FUN_003de6a0
 */


void FUN_003de6a0(float param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  
  if (param_1 == 0.0) {
    return;
  }
  *(float *)(param_2 + 0x7b8) = param_1;
  if (param_1 <= 0.0) {
    uVar1 = *(uint *)(param_2 + 0x30);
    *(undefined4 *)(param_2 + 0x7bc) = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x30);
    *(float *)(param_2 + 0x7bc) = 1.0 / param_1;
  }
  if (uVar1 != 0) {
    lVar9 = *(long *)(param_2 + 0x20);
    uVar8 = 0;
    puVar10 = (ulong *)(lVar9 + 0x80);
    do {
      if (puVar10 < (ulong *)(lVar9 + (ulong)uVar1 * 8)) {
        uVar3 = *puVar10;
        uVar5 = uVar3 >> 6;
        uVar6 = uVar3 + 0x3ff >> 6;
        uVar4 = (1 - uVar5) + uVar6;
        if ((uVar4 & 7) != 0) {
          lVar7 = -(uVar4 & 7);
          do {
            Hint_Prefetch(uVar3,0,0,0);
            uVar3 = uVar3 + 0x40;
            uVar4 = uVar4 - 1;
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0);
        }
        if (6 < uVar6 - uVar5) {
          do {
            Hint_Prefetch(uVar3,0,0,0);
            Hint_Prefetch(uVar3 + 0x40,0,0,0);
            uVar4 = uVar4 - 8;
            Hint_Prefetch(uVar3 + 0x80,0,0,0);
            Hint_Prefetch(uVar3 + 0xc0,0,0,0);
            Hint_Prefetch(uVar3 + 0x100,0,0,0);
            Hint_Prefetch(uVar3 + 0x140,0,0,0);
            Hint_Prefetch(uVar3 + 0x180,0,0,0);
            Hint_Prefetch(uVar3 + 0x1c0,0,0,0);
            uVar3 = uVar3 + 0x200;
          } while (uVar4 != 0);
        }
        puVar10 = puVar10 + 1;
      }
      FUN_003bd8a0(*(undefined8 *)(lVar9 + uVar8 * 8));
      FUN_003c0620(*(undefined4 *)(param_2 + 0x7bc));
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  *(undefined4 *)(param_2 + 0x1e58) = 1;
  *(long **)(param_2 + 0x1e50) = param_3;
  if (param_3 == (long *)0x0) {
    plVar2 = *(long **)(param_2 + 0x1e48);
  }
  else {
    (**(code **)(*param_3 + 0x20))(param_3);
    plVar2 = *(long **)(*(long *)(param_2 + 0x1e50) + 0x10);
    *(long **)(param_2 + 0x1e48) = plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x003de818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_2 + 0x1e38);
  return;
}


