/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb34b0; name: FUN_00cb34b0
 */


long FUN_00cb34b0(undefined8 param_1,uint *param_2,uint *param_3,long *param_4)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  if (*param_2 != 0) {
    lVar2 = 0;
    do {
      uVar3 = (ulong)*(uint *)((long)param_2 + lVar2 + 4);
      lVar4 = lVar2 + (uVar3 - (long)*(int *)((long)param_2 + lVar2 + uVar3 + 4));
      uVar1 = *(ushort *)((long)param_2 + lVar4 + 4);
      if (uVar1 < 5) {
        if (*param_4 == 0) goto LAB_00cb3528;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 8);
        lVar7 = 0;
        if (uVar6 != 0) {
          lVar7 = *(long *)((long)param_2 + lVar2 + uVar3 + uVar6 + 4);
        }
        if (lVar7 == *param_4) {
LAB_00cb3528:
          if ((uVar1 < 7) || (uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 10), uVar6 == 0)) {
            if (param_4[1] == 0) goto LAB_00cb3580;
          }
          else if (*(long *)((long)param_2 + lVar2 + uVar3 + uVar6 + 4) == param_4[1]) {
LAB_00cb3580:
            if (((0x12 < uVar1) &&
                (uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 0x16), uVar6 != 0)) &&
               (uVar5 = (ulong)*(uint *)((long)param_2 + lVar2 + uVar6 + uVar3 + 4),
               ((-uVar5 - uVar6) + -4) - (uVar3 + (long)param_2) != lVar2)) goto LAB_00cb37d0;
            break;
          }
        }
      }
      lVar2 = lVar2 + 4;
    } while ((ulong)*param_2 * 4 != lVar2);
  }
  if (*param_3 != 0) {
    lVar2 = 0;
    do {
      uVar3 = (ulong)*(uint *)((long)param_3 + lVar2 + 4);
      lVar4 = lVar2 + (uVar3 - (long)*(int *)((long)param_3 + lVar2 + uVar3 + 4));
      uVar1 = *(ushort *)((long)param_3 + lVar4 + 4);
      if (uVar1 < 5) {
        if (*param_4 == 0) goto LAB_00cb361c;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 8);
        lVar7 = 0;
        if (uVar6 != 0) {
          lVar7 = *(long *)((long)param_3 + lVar2 + uVar3 + uVar6 + 4);
        }
        if (lVar7 == *param_4) {
LAB_00cb361c:
          if ((uVar1 < 7) || (uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 10), uVar6 == 0)) {
            if (param_4[1] == 0) goto LAB_00cb374c;
          }
          else if (*(long *)((long)param_3 + lVar2 + uVar3 + uVar6 + 4) == param_4[1]) {
LAB_00cb374c:
            if (((0x12 < uVar1) &&
                (uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 0x16), uVar6 != 0)) &&
               (uVar5 = (ulong)*(uint *)((long)param_3 + lVar2 + uVar6 + uVar3 + 4),
               ((-uVar5 - uVar6) + -4) - (uVar3 + (long)param_3) != lVar2)) {
              lVar4 = uVar6 + uVar5 + uVar3;
              goto LAB_00cb38c0;
            }
            break;
          }
        }
      }
      lVar2 = lVar2 + 4;
    } while ((ulong)*param_3 * 4 != lVar2);
  }
  local_40 = *(long *)PTR_DAT_02719748;
  lStack_38 = local_40;
  local_30 = local_40;
  lStack_28 = local_40;
  FUN_00cb38f0(param_1,&local_40,&lStack_38);
  if (*param_2 != 0) {
    lVar2 = 0;
    do {
      uVar3 = (ulong)*(uint *)((long)param_2 + lVar2 + 4);
      lVar4 = lVar2 + (uVar3 - (long)*(int *)((long)param_2 + lVar2 + uVar3 + 4));
      uVar1 = *(ushort *)((long)param_2 + lVar4 + 4);
      if (uVar1 < 5) {
        if (local_40 == 0) goto LAB_00cb36f4;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 8);
        lVar7 = 0;
        if (uVar6 != 0) {
          lVar7 = *(long *)((long)param_2 + lVar2 + uVar3 + uVar6 + 4);
        }
        if (lVar7 == local_40) {
LAB_00cb36f4:
          if ((uVar1 < 7) || (uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 10), uVar6 == 0)) {
            if (lStack_38 == 0) goto LAB_00cb3794;
          }
          else if (*(long *)((long)param_2 + lVar2 + uVar3 + uVar6 + 4) == lStack_38) {
LAB_00cb3794:
            if (((0x12 < uVar1) &&
                (uVar6 = (ulong)*(ushort *)((long)param_2 + lVar4 + 0x16), uVar6 != 0)) &&
               (uVar5 = (ulong)*(uint *)((long)param_2 + lVar2 + uVar6 + uVar3 + 4),
               ((-uVar5 - uVar6) + -4) - (uVar3 + (long)param_2) != lVar2)) goto LAB_00cb37d0;
            break;
          }
        }
      }
      lVar2 = lVar2 + 4;
    } while ((ulong)*param_2 * 4 != lVar2);
  }
  if (*param_3 != 0) {
    lVar2 = 0;
    do {
      uVar3 = (ulong)*(uint *)((long)param_3 + lVar2 + 4);
      lVar4 = lVar2 + (uVar3 - (long)*(int *)((long)param_3 + lVar2 + uVar3 + 4));
      uVar1 = *(ushort *)((long)param_3 + lVar4 + 4);
      if (uVar1 < 5) {
        if (local_40 == 0) goto LAB_00cb3840;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 8);
        lVar7 = 0;
        if (uVar6 != 0) {
          lVar7 = *(long *)((long)param_3 + lVar2 + uVar3 + uVar6 + 4);
        }
        if (lVar7 == local_40) {
LAB_00cb3840:
          if ((uVar1 < 7) || (uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 10), uVar6 == 0)) {
            if (lStack_38 == 0) goto LAB_00cb3898;
          }
          else if (*(long *)((long)param_3 + lVar2 + uVar3 + uVar6 + 4) == lStack_38) {
LAB_00cb3898:
            if (uVar1 < 0x13) {
              return 0;
            }
            uVar6 = (ulong)*(ushort *)((long)param_3 + lVar4 + 0x16);
            if (uVar6 == 0) {
              return 0;
            }
            lVar4 = uVar6 + *(uint *)((long)param_3 + lVar2 + uVar6 + uVar3 + 4) + uVar3;
LAB_00cb38c0:
            lVar4 = (long)param_3 + lVar4;
            goto LAB_00cb38c4;
          }
        }
      }
      lVar2 = lVar2 + 4;
    } while ((ulong)*param_3 * 4 != lVar2);
  }
  return 0;
LAB_00cb37d0:
  lVar4 = (long)param_2 + uVar6 + uVar5 + uVar3;
LAB_00cb38c4:
  return lVar4 + lVar2 + 4;
}


