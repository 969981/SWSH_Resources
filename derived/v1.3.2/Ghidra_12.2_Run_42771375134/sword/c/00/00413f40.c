/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00413f40; name: FUN_00413f40
 */


undefined4 FUN_00413f40(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  
  plVar2 = (long *)FUN_004145f0(param_1 + 0xb8);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  lVar3 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
  if (lVar3 == 0) {
    *plVar2 = 0;
    piVar8 = *(int **)(param_1 + 0xb8);
    uVar6 = *(uint *)(param_1 + 0xc0);
    uVar7 = (ulong)uVar6;
    piVar1 = piVar8 + uVar7 * 4;
    piVar5 = piVar8;
    if (uVar6 == 0) {
LAB_00414008:
      if (piVar1 != piVar5) {
        if (piVar5 < piVar1 + -4) {
          uVar7 = (long)piVar8 + ~(ulong)piVar5 + uVar7 * 0x10 + -0x10;
          uVar6 = ((uint)(uVar7 >> 4) & 0xfffffff) + 1;
          if ((uVar6 & 7) != 0) {
            lVar3 = -((ulong)uVar6 & 7);
            piVar8 = piVar5;
            do {
              piVar5 = piVar8 + 4;
              *(undefined8 *)piVar8 = *(undefined8 *)piVar5;
              *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
              lVar3 = lVar3 + 1;
              piVar8 = piVar5;
            } while (lVar3 != 0);
          }
          if (0x6f < uVar7) {
            do {
              *(undefined8 *)piVar5 = *(undefined8 *)(piVar5 + 4);
              *(undefined8 *)(piVar5 + 2) = *(undefined8 *)(piVar5 + 6);
              *(undefined8 *)(piVar5 + 4) = *(undefined8 *)(piVar5 + 8);
              *(undefined8 *)(piVar5 + 6) = *(undefined8 *)(piVar5 + 10);
              *(undefined8 *)(piVar5 + 8) = *(undefined8 *)(piVar5 + 0xc);
              *(undefined8 *)(piVar5 + 10) = *(undefined8 *)(piVar5 + 0xe);
              *(undefined8 *)(piVar5 + 0xc) = *(undefined8 *)(piVar5 + 0x10);
              *(undefined8 *)(piVar5 + 0xe) = *(undefined8 *)(piVar5 + 0x12);
              *(undefined8 *)(piVar5 + 0x10) = *(undefined8 *)(piVar5 + 0x14);
              *(undefined8 *)(piVar5 + 0x12) = *(undefined8 *)(piVar5 + 0x16);
              *(undefined8 *)(piVar5 + 0x14) = *(undefined8 *)(piVar5 + 0x18);
              *(undefined8 *)(piVar5 + 0x16) = *(undefined8 *)(piVar5 + 0x1a);
              *(undefined8 *)(piVar5 + 0x18) = *(undefined8 *)(piVar5 + 0x1c);
              *(undefined8 *)(piVar5 + 0x1a) = *(undefined8 *)(piVar5 + 0x1e);
              piVar8 = piVar5 + 0x20;
              *(undefined8 *)(piVar5 + 0x1c) = *(undefined8 *)piVar8;
              *(undefined8 *)(piVar5 + 0x1e) = *(undefined8 *)(piVar5 + 0x22);
              piVar5 = piVar8;
            } while (piVar8 < piVar1 + -4);
          }
          uVar6 = *(uint *)(param_1 + 0xc0);
        }
        *(uint *)(param_1 + 0xc0) = uVar6 - 1;
      }
    }
    else {
      lVar3 = uVar7 << 4;
      do {
        if (*piVar5 == param_2) goto LAB_00414008;
        lVar3 = lVar3 + -0x10;
        piVar5 = piVar5 + 4;
      } while (lVar3 != 0);
    }
  }
  else {
    FUN_004a7c30(lVar3);
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *plVar2 = lVar3;
    FUN_004a7ef0(lVar3,param_2);
  }
  uVar4 = 1;
  if (*plVar2 == 0) {
    uVar4 = 2;
  }
  return uVar4;
}


