/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103e8a0; name: FUN_0103e8a0
 */


void FUN_0103e8a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  
  if (*(int *)(param_1 + 0x1c0) != -1) {
    plVar10 = *(long **)(param_1 + 0x80);
    piVar11 = (int *)*plVar10;
    piVar12 = (int *)plVar10[1];
    lVar5 = (long)piVar12 - (long)piVar11;
    if (lVar5 != 0) {
      uVar4 = 0;
      do {
        if (*piVar11 == *(int *)(param_1 + 0x1c0)) {
          if (piVar11 + 0xe == piVar12) goto LAB_0103e97c;
          do {
            *piVar11 = piVar11[0xe];
            *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 0x18);
            *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar11 + 0x10);
            *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar11 + 0x12);
            *(undefined8 *)(piVar11 + 6) = *(undefined8 *)(piVar11 + 0x14);
            *(undefined8 *)(piVar11 + 8) = *(undefined8 *)(piVar11 + 0x16);
            if (*(long *)(piVar11 + 0xc) != 0) {
              (**(code **)(*(long *)(*(long *)(piVar11 + 0xc) + 0x48) + 0x18))();
              piVar11[0xc] = 0;
              piVar11[0xd] = 0;
            }
            uVar2 = *(undefined8 *)(piVar11 + 0x1a);
            piVar11[0x1a] = 0;
            piVar11[0x1b] = 0;
            *(undefined8 *)(piVar11 + 0xc) = uVar2;
            piVar11 = piVar11 + 0xe;
          } while (piVar12 + -0xe != piVar11);
          piVar12 = (int *)plVar10[1];
          if ((int *)plVar10[1] != piVar11) {
LAB_0103e97c:
            do {
              piVar13 = piVar12 + -0xe;
              if (*(long *)(piVar12 + -2) != 0) {
                (**(code **)(*(long *)(*(long *)(piVar12 + -2) + 0x48) + 0x18))();
                piVar12[-2] = 0;
                piVar12[-1] = 0;
              }
              piVar12 = piVar13;
            } while (piVar11 != piVar13);
          }
          plVar10[1] = (long)piVar11;
          break;
        }
        uVar4 = uVar4 + 1;
        piVar11 = piVar11 + 0xe;
      } while (uVar4 < (ulong)((lVar5 >> 3) * 0x6db6db6db6db6db7));
    }
  }
  lVar5 = (*(long **)(param_1 + 0x80))[1] - **(long **)(param_1 + 0x80);
  if (lVar5 == 0x38) {
    uVar4 = 0;
  }
  else {
    puVar3 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    if (lVar5 == 0) {
      uVar6 = *puVar3;
      uVar4 = puVar3[1] + uVar6;
      uVar7 = puVar3[1] ^ uVar6;
      *puVar3 = uVar7 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar7 << 0x10;
      puVar3[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    }
    else {
      uVar6 = (lVar5 >> 3) * 0x6db6db6db6db6db7;
      uVar7 = (0x40 - LZCOUNT(uVar6)) -
              (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar6)) & 0x3f) & uVar6) == 0
                     );
      uVar4 = uVar7 >> 6;
      if ((uVar7 & 0x3f) != 0) {
        uVar4 = uVar4 + 1;
      }
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = uVar7 / uVar4;
      }
      uVar1 = 0;
      if (uVar4 <= uVar7) {
        uVar1 = 0xffffffffffffffff >> (-uVar8 & 0x3f);
      }
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      do {
        uVar9 = uVar7 ^ uVar8;
        uVar4 = uVar7 + uVar8;
        uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
        uVar7 = uVar9 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar9 << 0x10;
        uVar4 = uVar4 & uVar1;
      } while (uVar6 <= uVar4);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
    }
  }
  *(int *)(param_1 + 0xa8) = (int)uVar4;
  return;
}


