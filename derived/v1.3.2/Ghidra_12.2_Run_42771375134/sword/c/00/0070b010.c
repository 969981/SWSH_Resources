/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070b010; name: FUN_0070b010
 */


bool FUN_0070b010(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  switch((long)param_2 - (long)param_1 >> 4) {
  case 0:
  case 1:
    break;
  case 2:
    plVar2 = param_2 + -2;
    if (*(ulong *)(*plVar2 + 0xa0) == *(ulong *)(*param_1 + 0xa0)) {
      if ((ulong)param_2[-1] < (ulong)param_1[1]) {
LAB_0070b1f4:
        lVar3 = *param_1;
        lVar6 = param_1[1];
        lVar9 = param_2[-1];
        *param_1 = *plVar2;
        param_1[1] = lVar9;
        *plVar2 = lVar3;
        param_2[-1] = lVar6;
        return true;
      }
    }
    else if (*(ulong *)(*plVar2 + 0xa0) < *(ulong *)(*param_1 + 0xa0)) goto LAB_0070b1f4;
    break;
  case 3:
    FUN_0070ac10(param_1,param_1 + 2,param_2 + -2);
    break;
  case 4:
    FUN_0070ada0(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
    break;
  case 5:
    FUN_0070aeb0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    break;
  default:
    FUN_0070ac10(param_1,param_1 + 2,param_1 + 4);
    if (param_1 + 6 != param_2) {
      lVar3 = 0;
      iVar4 = 0;
      plVar2 = param_1 + 6;
      plVar7 = param_1 + 4;
      do {
        plVar5 = plVar2;
        lVar6 = *plVar5;
        if (*(ulong *)(lVar6 + 0xa0) == *(ulong *)(*plVar7 + 0xa0)) {
          uVar8 = plVar5[1];
          if (uVar8 < (ulong)plVar7[1]) {
LAB_0070b0e8:
            lVar9 = plVar7[1];
            *plVar5 = *plVar7;
            plVar5[1] = lVar9;
            if (plVar7 != param_1) {
              lVar9 = lVar3;
              do {
                uVar10 = *(ulong *)(*(long *)((long)param_1 + lVar9 + 0x10) + 0xa0);
                if (*(ulong *)(lVar6 + 0xa0) == uVar10) {
                  if (*(ulong *)((long)param_1 + lVar9 + 0x18) <= uVar8) {
                    *plVar7 = lVar6;
                    plVar7[1] = uVar8;
                    goto joined_r0x0070b17c;
                  }
                }
                else if (uVar10 <= *(ulong *)(lVar6 + 0xa0)) {
                  *(long *)((long)param_1 + lVar9 + 0x20) = lVar6;
                  *(ulong *)((long)param_1 + lVar9 + 0x28) = uVar8;
                  goto joined_r0x0070b17c;
                }
                plVar7 = plVar7 + -2;
                bVar1 = lVar9 != -0x10;
                *(undefined8 *)((long)param_1 + lVar9 + 0x20) =
                     *(undefined8 *)((long)param_1 + lVar9 + 0x10);
                *(undefined8 *)((long)param_1 + lVar9 + 0x28) =
                     *(undefined8 *)((long)param_1 + lVar9 + 0x18);
                lVar9 = lVar9 + -0x10;
              } while (bVar1);
            }
            *param_1 = lVar6;
            param_1[1] = uVar8;
joined_r0x0070b17c:
            iVar4 = iVar4 + 1;
            if (iVar4 == 8) {
              return plVar5 + 2 == param_2;
            }
          }
        }
        else if (*(ulong *)(lVar6 + 0xa0) < *(ulong *)(*plVar7 + 0xa0)) {
          uVar8 = plVar5[1];
          goto LAB_0070b0e8;
        }
        lVar3 = lVar3 + 0x10;
        plVar2 = plVar5 + 2;
        plVar7 = plVar5;
      } while (plVar5 + 2 != param_2);
    }
  }
  return true;
}


