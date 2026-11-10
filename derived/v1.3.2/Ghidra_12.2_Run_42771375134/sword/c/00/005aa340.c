/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa340; name: FUN_005aa340
 */


void FUN_005aa340(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  FUN_0059ff80(*(undefined8 *)(param_1 + 0x4a0));
  lVar3 = *(long *)(param_1 + 0x248);
  if ((lVar3 != 0) && (lVar3 != *(long *)(param_1 + 0x228))) {
    FUN_0059c980(lVar3,param_2);
  }
  uVar7 = (ulong)*(uint *)(param_1 + 0x3f8);
  if (-1 < (int)*(uint *)(param_1 + 0x3f8)) {
    lVar3 = 0;
    do {
      iVar6 = (int)uVar7;
      if (((*(long *)(param_1 + 0x430) != 0) &&
          (lVar4 = *(long *)(*(long *)(param_1 + 0x430) + lVar3 * 8), lVar4 != 0)) &&
         (lVar4 != *(long *)(param_1 + 0x228))) {
        FUN_0059c980(lVar4,param_2);
        iVar6 = *(int *)(param_1 + 0x3f8);
      }
      if (lVar3 < iVar6) {
        if (*(long *)(param_1 + 0x438) != 0) {
          FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x438) + lVar3 * 8),param_2);
        }
        if ((*(long *)(param_1 + 0x440) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x440) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x448) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x448) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x450) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x450) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x468) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x468) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x470) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x470) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x458) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x458) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x460) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x460) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x478) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x478) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if ((*(long *)(param_1 + 0x480) != 0) &&
           (lVar4 = *(long *)(*(long *)(param_1 + 0x480) + lVar3 * 8), lVar4 != 0)) {
          FUN_0059c980(lVar4,param_2);
        }
        if (*(long *)(param_1 + 0x488) != 0) {
          FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x488) + lVar3 * 8),param_2);
        }
      }
      uVar7 = (ulong)*(int *)(param_1 + 0x3f8);
      bVar1 = lVar3 < (long)uVar7;
      lVar3 = lVar3 + 1;
    } while (bVar1);
  }
  if (0 < *(int *)(param_1 + 0x498)) {
    lVar3 = 0;
    do {
      FUN_0059c980(*(undefined8 *)(*(long *)(param_1 + 0x490) + lVar3 * 8),param_2);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x498));
  }
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar3 = 0;
    lVar4 = 0xb8;
    do {
      lVar8 = *(long *)(param_1 + 0x4a8);
      if (*(char *)(param_1 + 0x124) == '\0') {
        FUN_0059c980(*(undefined8 *)(lVar8 + lVar4 + -0x18),param_2);
        lVar5 = *(long *)(lVar8 + lVar4 + -0x10);
      }
      else {
        lVar5 = lVar8 + lVar4;
        if (*(long *)(lVar5 + -0x38) != 0) {
          FUN_0059c980(*(long *)(lVar5 + -0x38),param_2);
        }
        if (*(long *)(lVar5 + -0x30) != 0) {
          FUN_0059c980(*(long *)(lVar5 + -0x30),param_2);
        }
        if (*(long *)(lVar5 + -0x28) != 0) {
          FUN_0059c980(*(long *)(lVar5 + -0x28),param_2);
        }
        lVar5 = *(long *)(lVar5 + -0x20);
      }
      if (lVar5 != 0) {
        FUN_0059c980(lVar5,param_2);
      }
      lVar5 = lVar8 + lVar4;
      lVar2 = *(long *)(lVar5 + -0x68);
      lVar9 = *(long *)(lVar5 + -0x60);
      if (*(long *)(lVar5 + -0x70) != 0) {
        FUN_0059c980(*(long *)(lVar5 + -0x70),param_2);
      }
      if (lVar2 != 0) {
        FUN_0059c980(lVar2,param_2);
      }
      if (lVar9 != 0) {
        FUN_0059c980(lVar2,param_2);
      }
      if (*(long *)(lVar5 + -8) != 0) {
        FUN_0059c980(*(long *)(lVar5 + -8),param_2);
      }
      if (*(long *)(lVar8 + lVar4) != 0) {
        FUN_0059c980(*(long *)(lVar8 + lVar4),param_2);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x108;
    } while (lVar3 < *(int *)(param_1 + 0xd0));
  }
  return;
}


