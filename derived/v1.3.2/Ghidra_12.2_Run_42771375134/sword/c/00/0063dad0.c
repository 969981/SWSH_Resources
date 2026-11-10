/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063dad0; name: FUN_0063dad0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063dad0(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(int *)(param_1 + 0x20) == 2) {
    plVar8 = (long *)(param_1 + 0x60);
  }
  else {
    if (*(int *)(param_1 + 0x20) != 1) {
      return;
    }
    plVar8 = (long *)(param_1 + 0x58);
  }
  if ((((-1 < param_2) && (lVar10 = *plVar8, lVar10 != 0)) && (param_2 < *(int *)(lVar10 + 0x38)))
     && (lVar10 = *(long *)(lVar10 + 0x50), *(int *)(lVar10 + (long)param_2 * 0x28) == 1)) {
    uVar2 = *(uint *)(lVar10 + (long)param_2 * 0x28 + 8);
    uVar12 = (ulong)uVar2;
    if ((uVar2 < 0x40) && (param_3 != (long *)0x0)) {
      uVar3 = *(uint *)(lVar10 + (long)param_2 * 0x28 + 4);
      uVar13 = (ulong)(int)uVar2;
      piVar7 = (int *)(**(code **)(*param_3 + 0x40))(param_3);
      if (*piVar7 == 1) {
        iVar5 = (**(code **)(*param_3 + 0x158))(param_3);
        plVar8 = (long *)(**(code **)(*param_3 + 0x108))(param_3);
        if (plVar8 == (long *)0x0) {
          iVar6 = -1;
          lVar10 = param_1 + uVar13 * 4;
          iVar4 = *(int *)(lVar10 + 0x1288);
        }
        else {
          iVar6 = (**(code **)(*plVar8 + 0x98))();
          lVar10 = param_1 + uVar13 * 4;
          iVar4 = *(int *)(lVar10 + 0x1288);
        }
        if (iVar5 != iVar4) {
          *(int *)(lVar10 + 0x1288) = iVar5;
          if (iVar6 != -1) {
            *(int *)(lVar10 + 5000) = iVar6;
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x29ec) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x29ec);
            }
            *(uint *)(param_1 + 0x29ec) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x29f0)) {
              uVar1 = *(uint *)(param_1 + 0x29f0);
            }
            *(uint *)(param_1 + 0x29f0) = uVar1;
            *(ulong *)(param_1 + 0x29f8) = *(ulong *)(param_1 + 0x29f8) | 1L << (uVar13 & 0x3f);
          }
          if ((uVar3 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x283c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x283c);
            }
            *(uint *)(param_1 + 0x283c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2840)) {
              uVar1 = *(uint *)(param_1 + 0x2840);
            }
            *(uint *)(param_1 + 0x2840) = uVar1;
            *(ulong *)(param_1 + 0x2848) = *(ulong *)(param_1 + 0x2848) | 1L << (uVar12 & 0x3f);
          }
          if ((uVar3 >> 1 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x2854) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x2854);
            }
            *(uint *)(param_1 + 0x2854) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2858)) {
              uVar1 = *(uint *)(param_1 + 0x2858);
            }
            *(uint *)(param_1 + 0x2858) = uVar1;
            *(ulong *)(param_1 + 0x2860) = *(ulong *)(param_1 + 0x2860) | 1L << (uVar12 & 0x3f);
          }
          if ((uVar3 >> 2 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x286c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x286c);
            }
            *(uint *)(param_1 + 0x286c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2870)) {
              uVar1 = *(uint *)(param_1 + 0x2870);
            }
            *(uint *)(param_1 + 0x2870) = uVar1;
            *(ulong *)(param_1 + 0x2878) = *(ulong *)(param_1 + 0x2878) | 1L << (uVar12 & 0x3f);
          }
          if ((uVar3 >> 4 & 1) != 0) {
            uVar11 = 1L << (uVar12 & 0x3f);
            *(ulong *)(param_1 + 0x2890) = *(ulong *)(param_1 + 0x2890) | uVar11;
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x2884) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x2884);
            }
            *(uint *)(param_1 + 0x2884) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2888)) {
              uVar1 = *(uint *)(param_1 + 0x2888);
            }
            *(uint *)(param_1 + 0x2888) = uVar1;
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x289c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x289c);
            }
            *(uint *)(param_1 + 0x289c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x28a0)) {
              uVar1 = *(uint *)(param_1 + 0x28a0);
            }
            *(uint *)(param_1 + 0x28a0) = uVar1;
            *(ulong *)(param_1 + 0x28a8) = *(ulong *)(param_1 + 0x28a8) | uVar11;
          }
          if ((uVar3 >> 5 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x28b4) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x28b4);
            }
            *(uint *)(param_1 + 0x28b4) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x28b8)) {
              uVar1 = *(uint *)(param_1 + 0x28b8);
            }
            *(uint *)(param_1 + 0x28b8) = uVar1;
            *(ulong *)(param_1 + 0x28c0) = *(ulong *)(param_1 + 0x28c0) | 1L << (uVar12 & 0x3f);
          }
        }
      }
      piVar7 = (int *)(**(code **)(*param_3 + 0x40))(param_3);
      if (*piVar7 == 10) {
        lVar10 = (**(code **)(*param_3 + 0x40))(param_3);
        if ((*(byte *)(lVar10 + 10) & 1) == 0) {
          iVar5 = *(int *)((long)param_3 + 0xbc);
          lVar10 = param_3[0x20] + (long)*(int *)((long)param_3 + 0x154) * (long)iVar5;
          if ((uVar3 & 1) != 0) {
            *(ulong *)(param_1 + 0x28d8) = *(ulong *)(param_1 + 0x28d8) | 1L << (uVar12 & 0x3f);
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x28cc) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x28cc);
            }
            *(uint *)(param_1 + 0x28cc) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x28d0)) {
              uVar1 = *(uint *)(param_1 + 0x28d0);
            }
            *(uint *)(param_1 + 0x28d0) = uVar1;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0x960) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xc00) = iVar5;
          }
          if ((uVar3 >> 1 & 1) != 0) {
            *(ulong *)(param_1 + 0x28f0) = *(ulong *)(param_1 + 0x28f0) | 1L << (uVar12 & 0x3f);
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x28e4) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x28e4);
            }
            *(uint *)(param_1 + 0x28e4) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x28e8)) {
              uVar1 = *(uint *)(param_1 + 0x28e8);
            }
            *(uint *)(param_1 + 0x28e8) = uVar1;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0x9d0) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xc38) = iVar5;
          }
          if ((uVar3 >> 2 & 1) != 0) {
            *(ulong *)(param_1 + 0x2908) = *(ulong *)(param_1 + 0x2908) | 1L << (uVar12 & 0x3f);
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x28fc) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x28fc);
            }
            *(uint *)(param_1 + 0x28fc) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2900)) {
              uVar1 = *(uint *)(param_1 + 0x2900);
            }
            *(uint *)(param_1 + 0x2900) = uVar1;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0xa40) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xc70) = iVar5;
          }
          if ((uVar3 >> 4 & 1) != 0) {
            *(ulong *)(param_1 + 0x2920) = *(ulong *)(param_1 + 0x2920) | 1L << (uVar12 & 0x3f);
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x2914) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x2914);
            }
            *(uint *)(param_1 + 0x2914) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2918)) {
              uVar1 = *(uint *)(param_1 + 0x2918);
            }
            *(uint *)(param_1 + 0x2918) = uVar1;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0xab0) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xca8) = iVar5;
          }
          if ((uVar3 >> 3 & 1) != 0) {
            *(ulong *)(param_1 + 0x2938) = *(ulong *)(param_1 + 0x2938) | 1L << (uVar12 & 0x3f);
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x292c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x292c);
            }
            *(uint *)(param_1 + 0x292c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2930)) {
              uVar1 = *(uint *)(param_1 + 0x2930);
            }
            *(uint *)(param_1 + 0x2930) = uVar1;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0xb20) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xce0) = iVar5;
          }
          if ((uVar3 >> 5 & 1) != 0) {
            *(ulong *)(param_1 + 0x2950) = *(ulong *)(param_1 + 0x2950) | 1L << (uVar12 & 0x3f);
            uVar3 = uVar2;
            if ((int)*(uint *)(param_1 + 0x2944) <= (int)uVar2) {
              uVar3 = *(uint *)(param_1 + 0x2944);
            }
            *(uint *)(param_1 + 0x2944) = uVar3;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2948)) {
              uVar2 = *(uint *)(param_1 + 0x2948);
            }
            *(uint *)(param_1 + 0x2948) = uVar2;
            *(long *)(param_1 + 0x538 + uVar13 * 8 + 0xb90) = lVar10;
            *(int *)(param_1 + 0x538 + uVar13 * 4 + 0xd18) = iVar5;
          }
        }
        else {
          uVar9 = (**(code **)(*param_3 + 0xe8))(param_3);
          if ((uVar3 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x295c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x295c);
            }
            *(uint *)(param_1 + 0x295c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2960)) {
              uVar1 = *(uint *)(param_1 + 0x2960);
            }
            *(uint *)(param_1 + 0x2960) = uVar1;
            *(ulong *)(param_1 + 0x2968) = *(ulong *)(param_1 + 0x2968) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(&DAT_00001588 + param_1 + uVar13 * 8) = uVar9;
          }
          if ((uVar3 >> 1 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x2974) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x2974);
            }
            *(uint *)(param_1 + 0x2974) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2978)) {
              uVar1 = *(uint *)(param_1 + 0x2978);
            }
            *(uint *)(param_1 + 0x2978) = uVar1;
            *(ulong *)(param_1 + 0x2980) = *(ulong *)(param_1 + 0x2980) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(param_1 + uVar13 * 8 + 0x1788) = uVar9;
          }
          if ((uVar3 >> 2 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x298c) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x298c);
            }
            *(uint *)(param_1 + 0x298c) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2990)) {
              uVar1 = *(uint *)(param_1 + 0x2990);
            }
            *(uint *)(param_1 + 0x2990) = uVar1;
            *(ulong *)(param_1 + 0x2998) = *(ulong *)(param_1 + 0x2998) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(param_1 + uVar13 * 8 + 0x1988) = uVar9;
          }
          if ((uVar3 >> 4 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x29a4) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x29a4);
            }
            *(uint *)(param_1 + 0x29a4) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x29a8)) {
              uVar1 = *(uint *)(param_1 + 0x29a8);
            }
            *(uint *)(param_1 + 0x29a8) = uVar1;
            *(ulong *)(param_1 + 0x29b0) = *(ulong *)(param_1 + 0x29b0) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(param_1 + uVar13 * 8 + 0x1b88) = uVar9;
          }
          if ((uVar3 >> 3 & 1) != 0) {
            uVar1 = uVar2;
            if ((int)*(uint *)(param_1 + 0x29bc) <= (int)uVar2) {
              uVar1 = *(uint *)(param_1 + 0x29bc);
            }
            *(uint *)(param_1 + 0x29bc) = uVar1;
            uVar1 = uVar2;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x29c0)) {
              uVar1 = *(uint *)(param_1 + 0x29c0);
            }
            *(uint *)(param_1 + 0x29c0) = uVar1;
            *(ulong *)(param_1 + 0x29c8) = *(ulong *)(param_1 + 0x29c8) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(param_1 + uVar13 * 8 + 0x1d88) = uVar9;
          }
          if ((uVar3 >> 5 & 1) != 0) {
            uVar3 = uVar2;
            if ((int)*(uint *)(param_1 + 0x29d4) <= (int)uVar2) {
              uVar3 = *(uint *)(param_1 + 0x29d4);
            }
            *(uint *)(param_1 + 0x29d4) = uVar3;
            if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x29d8)) {
              uVar2 = *(uint *)(param_1 + 0x29d8);
            }
            *(uint *)(param_1 + 0x29d8) = uVar2;
            *(ulong *)(param_1 + 0x29e0) = *(ulong *)(param_1 + 0x29e0) | 1L << (uVar12 & 0x3f);
            *(undefined8 *)(param_1 + uVar13 * 8 + 0x1f88) = uVar9;
          }
        }
      }
    }
  }
  return;
}


