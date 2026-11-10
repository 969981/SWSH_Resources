/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00413d10; name: FUN_00413d10
 */


undefined4
FUN_00413d10(long param_1,int param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  piVar3 = *(int **)(param_1 + 0xb8);
  uVar4 = *(uint *)(param_1 + 0xc0);
  piVar5 = piVar3;
  if (uVar4 == 0) {
LAB_00413d78:
    if (piVar5 != piVar3 + (ulong)uVar4 * 4) {
      return 1;
    }
  }
  else {
    lVar7 = (ulong)uVar4 << 4;
    do {
      if (*piVar5 == param_2) goto LAB_00413d78;
      lVar7 = lVar7 + -0x10;
      piVar5 = piVar5 + 4;
    } while (lVar7 != 0);
  }
  plVar1 = (long *)FUN_004145f0((undefined8 *)(param_1 + 0xb8),param_2);
  if (plVar1 == (long *)0x0) {
    uVar2 = 2;
  }
  else {
    lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    if (lVar7 == 0) {
      *plVar1 = 0;
      piVar8 = *(int **)(param_1 + 0xb8);
      uVar4 = *(uint *)(param_1 + 0xc0);
      uVar6 = (ulong)uVar4;
      piVar5 = piVar8 + uVar6 * 4;
      piVar3 = piVar8;
      if (uVar4 == 0) {
LAB_00413e54:
        if (piVar5 != piVar3) {
          if (piVar3 < piVar5 + -4) {
            uVar6 = (long)piVar8 + ~(ulong)piVar3 + uVar6 * 0x10 + -0x10;
            uVar4 = ((uint)(uVar6 >> 4) & 0xfffffff) + 1;
            if ((uVar4 & 7) != 0) {
              lVar7 = -((ulong)uVar4 & 7);
              piVar8 = piVar3;
              do {
                piVar3 = piVar8 + 4;
                *(undefined8 *)piVar8 = *(undefined8 *)piVar3;
                *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
                lVar7 = lVar7 + 1;
                piVar8 = piVar3;
              } while (lVar7 != 0);
            }
            if (0x6f < uVar6) {
              do {
                *(undefined8 *)piVar3 = *(undefined8 *)(piVar3 + 4);
                *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar3 + 6);
                *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar3 + 8);
                *(undefined8 *)(piVar3 + 6) = *(undefined8 *)(piVar3 + 10);
                *(undefined8 *)(piVar3 + 8) = *(undefined8 *)(piVar3 + 0xc);
                *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 0xe);
                *(undefined8 *)(piVar3 + 0xc) = *(undefined8 *)(piVar3 + 0x10);
                *(undefined8 *)(piVar3 + 0xe) = *(undefined8 *)(piVar3 + 0x12);
                *(undefined8 *)(piVar3 + 0x10) = *(undefined8 *)(piVar3 + 0x14);
                *(undefined8 *)(piVar3 + 0x12) = *(undefined8 *)(piVar3 + 0x16);
                *(undefined8 *)(piVar3 + 0x14) = *(undefined8 *)(piVar3 + 0x18);
                *(undefined8 *)(piVar3 + 0x16) = *(undefined8 *)(piVar3 + 0x1a);
                *(undefined8 *)(piVar3 + 0x18) = *(undefined8 *)(piVar3 + 0x1c);
                *(undefined8 *)(piVar3 + 0x1a) = *(undefined8 *)(piVar3 + 0x1e);
                piVar8 = piVar3 + 0x20;
                *(undefined8 *)(piVar3 + 0x1c) = *(undefined8 *)piVar8;
                *(undefined8 *)(piVar3 + 0x1e) = *(undefined8 *)(piVar3 + 0x22);
                piVar3 = piVar8;
              } while (piVar8 < piVar5 + -4);
            }
            uVar4 = *(uint *)(param_1 + 0xc0);
          }
          *(uint *)(param_1 + 0xc0) = uVar4 - 1;
        }
      }
      else {
        lVar7 = uVar6 << 4;
        do {
          if (*piVar3 == param_2) goto LAB_00413e54;
          lVar7 = lVar7 + -0x10;
          piVar3 = piVar3 + 4;
        } while (lVar7 != 0);
      }
    }
    else {
      FUN_004a7c30(lVar7);
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *plVar1 = lVar7;
      FUN_004a7df0(lVar7,param_3,param_4,param_5);
      if ((*(uint *)(*plVar1 + 0x18) & 0xffff0000) != 0x100000) {
        *(undefined4 *)(*plVar1 + 0x20) = *(undefined4 *)(param_1 + 0xf0);
      }
    }
    uVar2 = 1;
    if (*plVar1 == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}


