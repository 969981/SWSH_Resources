/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc320; name: FUN_003bc320
 */


/* WARNING: Removing unreachable block (ram,0x003bc420) */

void FUN_003bc320(undefined8 param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    return;
  }
  if (0xfffffffd < *(uint *)(**(long **)(param_2 + 0x28) + 0xb8)) {
    return;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    FUN_003ba9d0(0,*(long *)(param_2 + 0x10));
  }
  else {
    uVar10 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x1c);
    fVar7 = (float)FUN_003c0340(param_1,uVar10,**(long **)(param_2 + 0x28),
                                *(undefined8 *)(param_2 + 0xd0));
    fVar9 = fVar7;
    if (fVar7 <= 0.0) {
      fVar9 = 0.0;
    }
    if (DAT_01d4c18c < fVar7) {
      fVar7 = DAT_01d4c18c;
    }
    if (1 < *(uint *)(param_2 + 0x20)) {
      uVar5 = 1;
      lVar6 = 0x20;
      do {
        fVar8 = (float)FUN_003c0340(param_1,uVar10,
                                    *(undefined8 *)(*(long *)(param_2 + 0x28) + uVar5 * 8),
                                    *(long *)(param_2 + 0xd0) + lVar6);
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar5 < *(uint *)(param_2 + 0x20));
    }
    FUN_003ba9d0(fVar9,*(undefined8 *)(param_2 + 0x10));
    fVar8 = DAT_01d4c1cc;
    if (fVar9 != 0.0) {
      if (fVar7 == 0.0) {
        uVar2 = *(uint *)(param_2 + 0x20);
        if (uVar2 != 0) {
          lVar6 = *(long *)(param_2 + 0x28);
          if (uVar2 == 1) {
            lVar3 = 0;
          }
          else {
            lVar3 = 0;
            do {
              plVar1 = (long *)(lVar6 + lVar3 * 8);
              lVar3 = lVar3 + 2;
              lVar4 = *(long *)(*plVar1 + 0x50);
              fVar7 = *(float *)(lVar4 + 0x9c);
              if (fVar7 <= fVar8) {
                fVar7 = fVar8;
              }
              *(float *)(lVar4 + 0x9c) = fVar7;
              lVar4 = *(long *)(plVar1[1] + 0x50);
              fVar7 = *(float *)(lVar4 + 0x9c);
              if (fVar7 <= fVar8) {
                fVar7 = fVar8;
              }
              *(float *)(lVar4 + 0x9c) = fVar7;
            } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar3);
            if ((uVar2 & 1) == 0) {
              return;
            }
          }
          lVar6 = *(long *)(*(long *)(lVar6 + lVar3 * 8) + 0x50);
          fVar7 = *(float *)(lVar6 + 0x9c);
          if (fVar7 <= DAT_01d4c1cc) {
            fVar7 = DAT_01d4c1cc;
          }
          *(float *)(lVar6 + 0x9c) = fVar7;
        }
      }
      return;
    }
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar5 = 0;
    do {
      FUN_003bfca0(*(undefined8 *)(*(long *)(param_2 + 0x28) + uVar5 * 8));
      FUN_003c0320(*(undefined8 *)(*(long *)(param_2 + 0x28) + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x20));
  }
  FUN_00113e30(*(undefined8 *)(*(long *)(param_2 + 8) + 0x748),*(undefined4 *)(param_2 + 0x48));
  return;
}


