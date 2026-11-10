/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543270; name: FUN_00543270
 */


void FUN_00543270(long *param_1,ulong param_2)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar11 = param_1[1];
    bVar2 = uVar11 < 3;
    if (1 < uVar11) goto LAB_005432dc;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar11 = param_1[1];
    bVar2 = uVar11 <= param_2;
    if (param_2 <= uVar11) {
LAB_005432dc:
      if (bVar2) {
        return;
      }
      uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar11 < 3 || (uVar11 - 1 & uVar11) != 0) {
        uVar3 = std::__next_prime(uVar3);
        if (uVar3 <= param_2) {
          uVar3 = param_2;
        }
      }
      else {
        if (1 < uVar3) {
          uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
        }
        if (uVar3 <= param_2) {
          uVar3 = param_2;
        }
      }
      param_2 = uVar3;
      if (uVar11 <= param_2) {
        return;
      }
    }
  }
  puVar1 = PTR_PTR_02713988;
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    }
    param_1[1] = 0;
    return;
  }
  lVar4 = FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,param_2 << 3,
                       "../src/GPU/GPUMemoryAllocator.h",0x1b8,0);
  lVar5 = *param_1;
  *param_1 = lVar4;
  if (lVar5 != 0) {
    FUN_005b9b10(*(undefined8 *)puVar1);
  }
  uVar3 = param_2 - 1;
  uVar11 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar3 < 3) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      lVar5 = lVar4 * 8;
      lVar4 = lVar4 + 4;
      *(undefined8 *)(*param_1 + lVar5) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
    } while (param_2 - uVar11 != lVar4);
  }
  if (uVar11 != 0) {
    lVar4 = lVar4 << 3;
    lVar5 = -uVar11;
    do {
      *(undefined8 *)(*param_1 + lVar4) = 0;
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
  }
  plVar7 = param_1 + 2;
  plVar6 = (long *)*plVar7;
  if (plVar6 == (long *)0x0) {
    return;
  }
  uVar11 = plVar6[1];
  if ((uVar3 & param_2) == 0) {
    uVar11 = uVar11 & uVar3;
  }
  else if (param_2 <= uVar11) {
    uVar9 = 0;
    if (param_2 != 0) {
      uVar9 = uVar11 / param_2;
    }
    uVar11 = uVar11 - uVar9 * param_2;
    *(long **)(*param_1 + uVar11 * 8) = plVar7;
    plVar7 = (long *)*plVar6;
    goto joined_r0x005434d4;
  }
  *(long **)(*param_1 + uVar11 * 8) = plVar7;
  plVar7 = (long *)*plVar6;
joined_r0x005434d4:
  if (plVar7 != (long *)0x0) {
    if ((uVar3 & param_2) == 0) {
      do {
        while (uVar9 = plVar7[1] & uVar3, uVar9 != uVar11) {
          plVar8 = plVar7;
          if (*(long *)(*param_1 + uVar9 * 8) == 0) {
            *(long **)(*param_1 + uVar9 * 8) = plVar6;
            uVar11 = uVar9;
            plVar8 = (long *)*plVar7;
            plVar6 = plVar7;
          }
          else {
            do {
              plVar10 = plVar8;
              plVar8 = (long *)*plVar10;
              if (plVar8 == (long *)0x0) break;
            } while (plVar7[2] == plVar8[2]);
            *plVar6 = (long)plVar8;
            *plVar10 = **(long **)(*param_1 + uVar9 * 8);
            **(undefined8 **)(*param_1 + uVar9 * 8) = plVar7;
            plVar8 = (long *)*plVar6;
          }
          plVar7 = plVar8;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar8 = (long *)*plVar7;
        plVar6 = plVar7;
        plVar7 = plVar8;
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar3 = plVar7[1];
          if (param_2 <= uVar3) {
            uVar9 = 0;
            if (param_2 != 0) {
              uVar9 = uVar3 / param_2;
            }
            uVar3 = uVar3 - uVar9 * param_2;
          }
          if (uVar3 != uVar11) break;
          plVar8 = (long *)*plVar7;
joined_r0x0054355c:
          plVar6 = plVar7;
          plVar7 = plVar8;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        plVar8 = plVar7;
        if (*(long *)(*param_1 + uVar3 * 8) != 0) {
          do {
            plVar10 = plVar8;
            plVar8 = (long *)*plVar10;
            if (plVar8 == (long *)0x0) break;
          } while (plVar7[2] == plVar8[2]);
          *plVar6 = (long)plVar8;
          *plVar10 = **(long **)(*param_1 + uVar3 * 8);
          **(undefined8 **)(*param_1 + uVar3 * 8) = plVar7;
          plVar8 = (long *)*plVar6;
          plVar7 = plVar6;
          goto joined_r0x0054355c;
        }
        *(long **)(*param_1 + uVar3 * 8) = plVar6;
        plVar8 = (long *)*plVar7;
        plVar6 = plVar7;
        uVar11 = uVar3;
        plVar7 = plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


