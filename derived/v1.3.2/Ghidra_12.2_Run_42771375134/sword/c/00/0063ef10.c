/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0063ef10; name: FUN_0063ef10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0063ef10(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 != (long *)0x0) {
    piVar5 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
    if (*piVar5 == 1) {
      lVar7 = param_2[0x68];
      if ((param_3 & 1) != 0) {
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x295c) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x295c);
        }
        *(uint *)(param_1 + 0x295c) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2960)) {
          uVar3 = *(uint *)(param_1 + 0x2960);
        }
        *(uint *)(param_1 + 0x2960) = uVar3;
        *(ulong *)(param_1 + 0x2968) = *(ulong *)(param_1 + 0x2968) | 1L << ((ulong)param_4 & 0x3f);
        *(long *)(&DAT_00001588 + param_1 + (long)(int)param_4 * 8) = lVar7;
      }
      if ((param_3 >> 1 & 1) != 0) {
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x2974) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x2974);
        }
        *(uint *)(param_1 + 0x2974) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2978)) {
          uVar3 = *(uint *)(param_1 + 0x2978);
        }
        *(uint *)(param_1 + 0x2978) = uVar3;
        *(ulong *)(param_1 + 0x2980) = *(ulong *)(param_1 + 0x2980) | 1L << ((ulong)param_4 & 0x3f);
        *(long *)(param_1 + (long)(int)param_4 * 8 + 0x1788) = lVar7;
      }
      if ((param_3 >> 2 & 1) != 0) {
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x298c) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x298c);
        }
        *(uint *)(param_1 + 0x298c) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2990)) {
          uVar3 = *(uint *)(param_1 + 0x2990);
        }
        *(uint *)(param_1 + 0x2990) = uVar3;
        *(ulong *)(param_1 + 0x2998) = *(ulong *)(param_1 + 0x2998) | 1L << ((ulong)param_4 & 0x3f);
        *(long *)(param_1 + (long)(int)param_4 * 8 + 0x1988) = lVar7;
      }
      if ((param_3 >> 4 & 1) != 0) {
        uVar8 = 1L << ((ulong)param_4 & 0x3f);
        lVar1 = param_1 + (long)(int)param_4 * 8;
        *(ulong *)(param_1 + 0x29b0) = *(ulong *)(param_1 + 0x29b0) | uVar8;
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x29a4) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x29a4);
        }
        *(uint *)(param_1 + 0x29a4) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x29a8)) {
          uVar3 = *(uint *)(param_1 + 0x29a8);
        }
        *(uint *)(param_1 + 0x29a8) = uVar3;
        *(long *)(lVar1 + 0x1b88) = lVar7;
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x29bc) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x29bc);
        }
        *(uint *)(param_1 + 0x29bc) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x29c0)) {
          uVar3 = *(uint *)(param_1 + 0x29c0);
        }
        *(uint *)(param_1 + 0x29c0) = uVar3;
        *(ulong *)(param_1 + 0x29c8) = *(ulong *)(param_1 + 0x29c8) | uVar8;
        *(long *)(lVar1 + 0x1d88) = lVar7;
      }
      if ((param_3 >> 5 & 1) != 0) {
        uVar3 = param_4;
        if ((int)*(uint *)(param_1 + 0x29d4) <= (int)param_4) {
          uVar3 = *(uint *)(param_1 + 0x29d4);
        }
        *(uint *)(param_1 + 0x29d4) = uVar3;
        uVar3 = param_4;
        if ((int)param_4 <= (int)*(uint *)(param_1 + 0x29d8)) {
          uVar3 = *(uint *)(param_1 + 0x29d8);
        }
        *(uint *)(param_1 + 0x29d8) = uVar3;
        *(ulong *)(param_1 + 0x29e0) = *(ulong *)(param_1 + 0x29e0) | 1L << ((ulong)param_4 & 0x3f);
        *(long *)(param_1 + (long)(int)param_4 * 8 + 0x1f88) = lVar7;
      }
    }
    piVar5 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
    if (*piVar5 == 10) {
      lVar7 = (**(code **)(*param_2 + 0x40))(param_2);
      if (*(char *)(lVar7 + 9) < '\0') {
        iVar4 = *(int *)((long)param_2 + 0xbc);
        lVar7 = param_2[0x20] + (long)*(int *)((long)param_2 + 0x154) * (long)iVar4;
        if ((param_3 & 1) != 0) {
          *(ulong *)(param_1 + 0x28d8) =
               *(ulong *)(param_1 + 0x28d8) | 1L << ((ulong)param_4 & 0x3f);
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x28cc) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x28cc);
          }
          *(uint *)(param_1 + 0x28cc) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x28d0)) {
            uVar3 = *(uint *)(param_1 + 0x28d0);
          }
          *(uint *)(param_1 + 0x28d0) = uVar3;
          *(long *)(param_1 + 0x538 + (long)(int)param_4 * 8 + 0x960) = lVar7;
          *(int *)(param_1 + 0x538 + (long)(int)param_4 * 4 + 0xc00) = iVar4;
        }
        if ((param_3 >> 1 & 1) != 0) {
          *(ulong *)(param_1 + 0x28f0) =
               *(ulong *)(param_1 + 0x28f0) | 1L << ((ulong)param_4 & 0x3f);
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x28e4) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x28e4);
          }
          *(uint *)(param_1 + 0x28e4) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x28e8)) {
            uVar3 = *(uint *)(param_1 + 0x28e8);
          }
          *(uint *)(param_1 + 0x28e8) = uVar3;
          *(long *)(param_1 + 0x538 + (long)(int)param_4 * 8 + 0x9d0) = lVar7;
          *(int *)(param_1 + 0x538 + (long)(int)param_4 * 4 + 0xc38) = iVar4;
        }
        if ((param_3 >> 2 & 1) != 0) {
          *(ulong *)(param_1 + 0x2908) =
               *(ulong *)(param_1 + 0x2908) | 1L << ((ulong)param_4 & 0x3f);
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x28fc) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x28fc);
          }
          *(uint *)(param_1 + 0x28fc) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2900)) {
            uVar3 = *(uint *)(param_1 + 0x2900);
          }
          *(uint *)(param_1 + 0x2900) = uVar3;
          *(long *)(param_1 + 0x538 + (long)(int)param_4 * 8 + 0xa40) = lVar7;
          *(int *)(param_1 + 0x538 + (long)(int)param_4 * 4 + 0xc70) = iVar4;
        }
        if ((param_3 >> 4 & 1) != 0) {
          uVar8 = 1L << ((ulong)param_4 & 0x3f);
          *(ulong *)(param_1 + 0x2920) = *(ulong *)(param_1 + 0x2920) | uVar8;
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x2914) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x2914);
          }
          *(uint *)(param_1 + 0x2914) = uVar3;
          lVar1 = param_1 + 0x538 + (long)(int)param_4 * 8;
          lVar2 = param_1 + 0x538 + (long)(int)param_4 * 4;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2918)) {
            uVar3 = *(uint *)(param_1 + 0x2918);
          }
          *(uint *)(param_1 + 0x2918) = uVar3;
          *(long *)(lVar1 + 0xab0) = lVar7;
          *(int *)(lVar2 + 0xca8) = iVar4;
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x292c) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x292c);
          }
          *(uint *)(param_1 + 0x292c) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2930)) {
            uVar3 = *(uint *)(param_1 + 0x2930);
          }
          *(uint *)(param_1 + 0x2930) = uVar3;
          *(ulong *)(param_1 + 0x2938) = *(ulong *)(param_1 + 0x2938) | uVar8;
          *(long *)(lVar1 + 0xb20) = lVar7;
          *(int *)(lVar2 + 0xce0) = iVar4;
        }
        if ((param_3 >> 5 & 1) != 0) {
          *(ulong *)(param_1 + 0x2950) =
               *(ulong *)(param_1 + 0x2950) | 1L << ((ulong)param_4 & 0x3f);
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x2944) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x2944);
          }
          *(uint *)(param_1 + 0x2944) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x2948)) {
            uVar3 = *(uint *)(param_1 + 0x2948);
          }
          *(uint *)(param_1 + 0x2948) = uVar3;
          *(long *)(param_1 + 0x538 + (long)(int)param_4 * 8 + 0xb90) = lVar7;
          *(int *)(param_1 + 0x538 + (long)(int)param_4 * 4 + 0xd18) = iVar4;
        }
      }
      else {
        lVar7 = (**(code **)(*param_2 + 0x40))(param_2);
        if (((*(byte *)(lVar7 + 10) & 1) != 0) &&
           (uVar6 = (**(code **)(*param_2 + 0xe8))(param_2), (param_3 >> 5 & 1) != 0)) {
          uVar3 = param_4;
          if ((int)*(uint *)(param_1 + 0x29d4) <= (int)param_4) {
            uVar3 = *(uint *)(param_1 + 0x29d4);
          }
          *(uint *)(param_1 + 0x29d4) = uVar3;
          uVar3 = param_4;
          if ((int)param_4 <= (int)*(uint *)(param_1 + 0x29d8)) {
            uVar3 = *(uint *)(param_1 + 0x29d8);
          }
          *(uint *)(param_1 + 0x29d8) = uVar3;
          *(ulong *)(param_1 + 0x29e0) =
               *(ulong *)(param_1 + 0x29e0) | 1L << ((ulong)param_4 & 0x3f);
          *(undefined8 *)(param_1 + (long)(int)param_4 * 8 + 0x1f88) = uVar6;
          return;
        }
      }
    }
  }
  return;
}


