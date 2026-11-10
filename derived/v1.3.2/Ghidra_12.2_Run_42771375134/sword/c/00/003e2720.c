/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2720; name: FUN_003e2720
 */


void FUN_003e2720(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  if (*(int *)(param_1 + 0x89c) != 0) {
    lVar10 = *(long *)(param_1 + 0x870);
    uVar8 = 0;
    do {
      FUN_003bbe20(**(undefined8 **)(lVar10 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x89c));
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x750) + 8) + 0x10) = 0;
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x748) + 0x130);
  *(undefined8 *)(param_1 + 0x12b4) = 0;
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x720) + 0x7b0);
  (**(code **)(**(long **)(param_1 + 0x760) + 0xd0))(*(long **)(param_1 + 0x760),uVar1);
  puVar3 = PTR_DAT_02710c28;
  uVar7 = *(uint *)(param_1 + 0x11a0) & 0x7fffffff;
  if (uVar7 != 0) {
    uVar5 = 0;
    uVar8 = 0;
    do {
      uVar9 = *(uint *)(*(long *)(param_1 + 0x1198) + uVar8 * 4);
      if (uVar9 != 0) {
        uVar2 = *(uint *)(param_1 + 0x110c) >> 4 & 1;
        uVar5 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar9 & -uVar9) * 0x77cb531 >> 0x1b) * 4) |
                uVar5;
        uVar9 = uVar9 - 1 & uVar9;
        if (uVar9 != 0) goto LAB_003e28bc;
        uVar6 = uVar8 + 1;
        goto LAB_003e28a4;
      }
      uVar8 = uVar8 + 1;
      uVar5 = uVar5 + 0x20;
    } while (uVar8 < uVar7);
  }
  goto LAB_003e27e8;
  while( true ) {
    uVar9 = *(uint *)(*(long *)(param_1 + 0x1198) + (uVar6 & 0xffffffff) * 4);
    uVar6 = (ulong)((uint)uVar6 + 1);
    if (uVar9 != 0) break;
LAB_003e28a4:
    uVar8 = uVar6 & 0xffffffff;
    if (uVar7 <= (uint)uVar6) {
      uVar9 = 0;
      if (uVar5 == 0xffffffff) goto LAB_003e27e8;
      goto LAB_003e28c4;
    }
  }
LAB_003e28bc:
  if (uVar5 != 0xffffffff) {
LAB_003e28c4:
    if (param_2 == (long *)0x0) {
      do {
        FUN_003ff570(*puVar11);
                    /* try { // try from 003e29ec to 003e29ff has its CatchHandler @ 003e2ae8 */
        plVar4 = (long *)FUN_001a6400(puVar11,0x448,0x10);
                    /* try { // try from 003e2a04 to 003e2a07 has its CatchHandler @ 003e2ae4 */
        FUN_003ff5a0(*puVar11);
        FUN_003e5c90(*(undefined4 *)(param_1 + 0x7b8),plVar4,*(undefined8 *)(param_1 + 0x748),
                     *(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x18),uVar2);
        uVar6 = 0;
        while( true ) {
          *(uint *)((long)plVar4 + uVar6 * 4 + 0x24) = uVar5 << 6;
          uVar6 = uVar6 + 1;
          if (uVar9 == 0) break;
          uVar7 = (uint)uVar8;
          uVar5 = *(uint *)(puVar3 + (ulong)((uVar9 & -uVar9) * 0x77cb531 >> 0x1b) * 4) | uVar7 << 5
          ;
          uVar9 = uVar9 - 1 & uVar9;
          if (uVar9 == 0) {
            do {
              uVar7 = uVar7 + 1;
              uVar8 = (ulong)uVar7;
              if ((*(uint *)(param_1 + 0x11a0) & 0x7fffffff) <= uVar7) {
                uVar9 = 0;
                break;
              }
              uVar9 = *(uint *)(*(long *)(param_1 + 0x1198) + (ulong)uVar7 * 4);
            } while (uVar9 == 0);
          }
          if ((0xff < uVar6) || (uVar5 == 0xffffffff)) goto LAB_003e2aa8;
        }
        uVar5 = 0xffffffff;
LAB_003e2aa8:
        *(int *)((long)plVar4 + 0x424) = (int)uVar6;
        *(undefined4 *)(plVar4 + 4) = 1;
        plVar4[3] = 0;
        (**(code **)(*plVar4 + 0x28))(plVar4);
      } while (uVar5 != 0xffffffff);
    }
    else {
      do {
        FUN_003ff570(*puVar11);
                    /* try { // try from 003e28d8 to 003e28eb has its CatchHandler @ 003e2af0 */
        plVar4 = (long *)FUN_001a6400(puVar11,0x448,0x10);
                    /* try { // try from 003e28f0 to 003e28f3 has its CatchHandler @ 003e2aec */
        FUN_003ff5a0(*puVar11);
        FUN_003e5c90(*(undefined4 *)(param_1 + 0x7b8),plVar4,*(undefined8 *)(param_1 + 0x748),
                     *(undefined8 *)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x18),uVar2);
        uVar6 = 0;
        while( true ) {
          *(uint *)((long)plVar4 + uVar6 * 4 + 0x24) = uVar5 << 6;
          uVar6 = uVar6 + 1;
          if (uVar9 == 0) break;
          uVar7 = (uint)uVar8;
          uVar5 = *(uint *)(puVar3 + (ulong)((uVar9 & -uVar9) * 0x77cb531 >> 0x1b) * 4) | uVar7 << 5
          ;
          uVar9 = uVar9 - 1 & uVar9;
          if (uVar9 == 0) {
            do {
              uVar7 = uVar7 + 1;
              uVar8 = (ulong)uVar7;
              if ((*(uint *)(param_1 + 0x11a0) & 0x7fffffff) <= uVar7) {
                uVar9 = 0;
                break;
              }
              uVar9 = *(uint *)(*(long *)(param_1 + 0x1198) + (ulong)uVar7 * 4);
            } while (uVar9 == 0);
          }
          if ((0xff < uVar6) || (uVar5 == 0xffffffff)) goto LAB_003e2994;
        }
        uVar5 = 0xffffffff;
LAB_003e2994:
        *(int *)((long)plVar4 + 0x424) = (int)uVar6;
        *(undefined4 *)(plVar4 + 4) = 1;
        plVar4[3] = (long)param_2;
        (**(code **)(*param_2 + 0x20))();
        plVar4[2] = *(long *)(plVar4[3] + 0x10);
        (**(code **)(*plVar4 + 0x28))(plVar4);
      } while (uVar5 != 0xffffffff);
    }
  }
LAB_003e27e8:
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x1198),0,(ulong)(uint)(*(int *)(param_1 + 0x11a0) << 2));
}


