/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e4c10; name: FUN_003e4c10
 */


void FUN_003e4c10(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  
  lVar10 = *(long *)(param_1 + 0x720) + 0x28;
  (**(code **)(**(long **)(param_1 + 0x750) + 0x20))();
  FUN_001118e0(lVar10);
  FUN_00111840(lVar10);
  *(undefined4 *)(param_1 + 0x830) = 0;
  *(undefined4 *)(param_1 + 0x840) = 0;
  uVar2 = FUN_00111290(lVar10);
  *(undefined4 *)(*(long *)(param_1 + 0x720) + 0xa28) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x30);
  if (uVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x20);
    uVar9 = 0;
    puVar11 = (ulong *)(lVar10 + 0x80);
    do {
      if (puVar11 < (ulong *)(lVar10 + (ulong)uVar1 * 8)) {
        uVar4 = *puVar11;
        uVar6 = uVar4 >> 6;
        uVar7 = uVar4 + 0x3ff >> 6;
        uVar5 = (1 - uVar6) + uVar7;
        if ((uVar5 & 7) != 0) {
          lVar8 = -(uVar5 & 7);
          do {
            Hint_Prefetch(uVar4,0,0,0);
            uVar4 = uVar4 + 0x40;
            uVar5 = uVar5 - 1;
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0);
        }
        if (6 < uVar7 - uVar6) {
          do {
            Hint_Prefetch(uVar4,0,0,0);
            Hint_Prefetch(uVar4 + 0x40,0,0,0);
            uVar5 = uVar5 - 8;
            Hint_Prefetch(uVar4 + 0x80,0,0,0);
            Hint_Prefetch(uVar4 + 0xc0,0,0,0);
            Hint_Prefetch(uVar4 + 0x100,0,0,0);
            Hint_Prefetch(uVar4 + 0x140,0,0,0);
            Hint_Prefetch(uVar4 + 0x180,0,0,0);
            Hint_Prefetch(uVar4 + 0x1c0,0,0,0);
            uVar4 = uVar4 + 0x200;
          } while (uVar5 != 0);
        }
        puVar11 = puVar11 + 1;
      }
      FUN_003bd8a0(*(undefined8 *)(lVar10 + uVar9 * 8));
      FUN_003c0850();
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar1);
  }
  if (*(int *)(param_1 + 0x7fc) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x16e0) = 1;
  *(long **)(param_1 + 0x16d8) = param_2;
  if (param_2 == (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x16d0);
  }
  else {
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar3 = *(long **)(*(long *)(param_1 + 0x16d8) + 0x10);
    *(long **)(param_1 + 0x16d0) = plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x003e4d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xa0))(plVar3,param_1 + 0x16c0);
  return;
}


