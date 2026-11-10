/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b21b0; name: FUN_001b21b0
 */


/* WARNING: Removing unreachable block (ram,0x001b2258) */

void FUN_001b21b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  *param_1 = (long)(PTR_DAT_02711010 + 0x10);
  uVar8 = (ulong)*(uint *)(param_1 + 2);
  plVar9 = (long *)param_1[1];
  if (*(uint *)(param_1 + 2) != 0) {
    do {
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 8))();
      }
      uVar8 = uVar8 - 1;
      *plVar9 = 0;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
                    /* try { // try from 001b2214 to 001b221b has its CatchHandler @ 001b2568 */
  FUN_001b25c0(param_1 + 7);
  uVar5 = *(uint *)((long)param_1 + 0xa4);
  if (uVar5 != 0) {
    lVar10 = param_1[0xf];
    uVar8 = 0;
    do {
      plVar9 = *(long **)(lVar10 + uVar8 * 0x10 + 8);
      if (plVar9 != (long *)0x0) {
        uVar3 = *(uint *)((long)plVar9 + 0x24);
        if (uVar3 != 0) {
          lVar2 = plVar9[3];
          if (uVar3 == 1) {
            lVar4 = 0;
          }
          else {
            lVar4 = 0;
            lVar6 = (ulong)uVar3 - ((ulong)uVar3 & 1);
            do {
              uVar7 = *(uint *)(lVar2 + lVar4 * 4);
              if (uVar7 != 0xffffffff) {
                do {
                  uVar7 = *(uint *)(plVar9[2] + (ulong)uVar7 * 4);
                } while (uVar7 != 0xffffffff);
              }
              uVar7 = *(uint *)(lVar2 + (lVar4 << 2 | 4U));
              if (uVar7 != 0xffffffff) {
                do {
                  uVar7 = *(uint *)(plVar9[2] + (ulong)uVar7 * 4);
                } while (uVar7 != 0xffffffff);
              }
              lVar4 = lVar4 + 2;
              lVar6 = lVar6 + -2;
            } while (lVar6 != 0);
            if ((uVar3 & 1) == 0) goto LAB_001b22d0;
          }
          uVar3 = *(uint *)(lVar2 + lVar4 * 4);
          if (uVar3 != 0xffffffff) {
            do {
              uVar3 = *(uint *)(plVar9[2] + (ulong)uVar3 * 4);
            } while (uVar3 != 0xffffffff);
          }
        }
LAB_001b22d0:
        lVar2 = *plVar9;
        if (lVar2 != 0) {
                    /* try { // try from 001b22d8 to 001b22eb has its CatchHandler @ 001b25ac */
          plVar1 = (long *)FUN_00400d30();
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
        }
                    /* try { // try from 001b22ec to 001b22ff has its CatchHandler @ 001b25b0 */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar9);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  uVar5 = *(uint *)((long)param_1 + 0x94);
  if ((uVar5 != 0) && (*(int *)((long)param_1 + 0xa4) != 0)) {
    uVar8 = 0;
    do {
      uVar3 = *(uint *)(param_1[0x11] + uVar8 * 4);
      if (uVar3 != 0xffffffff) {
        do {
          uVar3 = *(uint *)(param_1[0x10] + (ulong)uVar3 * 4);
        } while (uVar3 != 0xffffffff);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar5);
                    /* try { // try from 001b2350 to 001b235b has its CatchHandler @ 001b254c */
                    /* WARNING: Subroutine does not return */
    memset((void *)param_1[0x11],-1,(ulong)(uVar5 << 2));
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0x17]);
  lVar10 = param_1[0x17];
  if (lVar10 != 0) {
                    /* try { // try from 001b2424 to 001b2437 has its CatchHandler @ 001b2564 */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  if (*(uint *)((long)param_1 + 0x94) != 0) {
    uVar8 = 0;
    do {
      uVar5 = *(uint *)(param_1[0x11] + uVar8 * 4);
      if (uVar5 != 0xffffffff) {
        do {
          uVar5 = *(uint *)(param_1[0x10] + (ulong)uVar5 * 4);
        } while (uVar5 != 0xffffffff);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != *(uint *)((long)param_1 + 0x94));
  }
  lVar10 = param_1[0xe];
  if (lVar10 != 0) {
                    /* try { // try from 001b2478 to 001b248b has its CatchHandler @ 001b2560 */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  nn::os::FinalizeMutex((MutexType *)param_1[0xd]);
  lVar10 = param_1[0xd];
  if (lVar10 != 0) {
                    /* try { // try from 001b249c to 001b24af has its CatchHandler @ 001b255c */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x4c)) &&
      ((*(uint *)((long)param_1 + 0x4c) & 0x7fffffff) != 0)) && (lVar10 = param_1[8], lVar10 != 0))
  {
                    /* try { // try from 001b24c8 to 001b24db has its CatchHandler @ 001b2554 */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  FUN_003d9560(param_1 + 4);
  nn::os::FinalizeMutex((MutexType *)param_1[3]);
  lVar10 = param_1[3];
  if (lVar10 != 0) {
                    /* try { // try from 001b24f4 to 001b2507 has its CatchHandler @ 001b2558 */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x14)) &&
      ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) != 0)) && (lVar10 = param_1[1], lVar10 != 0))
  {
                    /* try { // try from 001b2520 to 001b2533 has its CatchHandler @ 001b2550 */
    plVar9 = (long *)FUN_00400d30();
    (**(code **)(*plVar9 + 0x18))(plVar9,lVar10);
  }
  return;
}


