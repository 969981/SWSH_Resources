/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007932b0; name: FUN_007932b0
 */


void FUN_007932b0(long *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar10 = param_1[1];
    bVar1 = uVar10 < 3;
    if (1 < uVar10) goto LAB_0079331c;
  }
  else {
    if ((param_2 - 1 & param_2) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar10 = param_1[1];
    bVar1 = uVar10 <= param_2;
    if (param_2 <= uVar10) {
LAB_0079331c:
      if (bVar1) {
        return;
      }
      uVar2 = (ulong)((float)(ulong)param_1[9] / *(float *)(param_1 + 10));
      if (uVar10 < 3 || (uVar10 - 1 & uVar10) != 0) {
        uVar2 = std::__next_prime(uVar2);
        if (uVar2 <= param_2) {
          uVar2 = param_2;
        }
      }
      else {
        if (1 < uVar2) {
          uVar2 = 1L << (-LZCOUNT(uVar2 - 1) & 0x3fU);
        }
        if (uVar2 <= param_2) {
          uVar2 = param_2;
        }
      }
      param_2 = uVar2;
      if (uVar10 <= param_2) {
        return;
      }
    }
  }
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar3,param_1[1] << 3,8);
    }
    param_1[1] = 0;
    return;
  }
  lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar4 = *param_1;
  *param_1 = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar4,param_1[1] << 3,8);
  }
  uVar2 = param_2 - 1;
  uVar10 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar2 < 3) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 8;
      lVar3 = lVar3 + 4;
      *(undefined8 *)(*param_1 + lVar4) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
    } while (param_2 - uVar10 != lVar3);
  }
  if (uVar10 != 0) {
    lVar3 = lVar3 << 3;
    lVar4 = -uVar10;
    do {
      *(undefined8 *)(*param_1 + lVar3) = 0;
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
  }
  plVar6 = param_1 + 5;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar10 = plVar5[1];
  if ((uVar2 & param_2) == 0) {
    uVar10 = uVar10 & uVar2;
  }
  else if (param_2 <= uVar10) {
    uVar8 = 0;
    if (param_2 != 0) {
      uVar8 = uVar10 / param_2;
    }
    uVar10 = uVar10 - uVar8 * param_2;
    *(long **)(*param_1 + uVar10 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    goto joined_r0x00793538;
  }
  *(long **)(*param_1 + uVar10 * 8) = plVar6;
  plVar6 = (long *)*plVar5;
joined_r0x00793538:
  if (plVar6 != (long *)0x0) {
    if ((uVar2 & param_2) == 0) {
      do {
        while (uVar8 = plVar6[1] & uVar2, uVar8 != uVar10) {
          plVar7 = plVar6;
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar5;
            uVar10 = uVar8;
            plVar7 = (long *)*plVar6;
            plVar5 = plVar6;
          }
          else {
            do {
              plVar9 = plVar7;
              plVar7 = (long *)*plVar9;
              if (plVar7 == (long *)0x0) break;
            } while (plVar6[2] == plVar7[2]);
            *plVar5 = (long)plVar7;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
            plVar7 = (long *)*plVar5;
          }
          plVar6 = plVar7;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar2 = plVar6[1];
          if (param_2 <= uVar2) {
            uVar8 = 0;
            if (param_2 != 0) {
              uVar8 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar8 * param_2;
          }
          if (uVar2 != uVar10) break;
          plVar7 = (long *)*plVar6;
joined_r0x007935c0:
          plVar5 = plVar6;
          plVar6 = plVar7;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar7 = plVar6;
        if (*(long *)(*param_1 + uVar2 * 8) != 0) {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
            if (plVar7 == (long *)0x0) break;
          } while (plVar6[2] == plVar7[2]);
          *plVar5 = (long)plVar7;
          *plVar9 = **(long **)(*param_1 + uVar2 * 8);
          **(undefined8 **)(*param_1 + uVar2 * 8) = plVar6;
          plVar7 = (long *)*plVar5;
          plVar6 = plVar5;
          goto joined_r0x007935c0;
        }
        *(long **)(*param_1 + uVar2 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar10 = uVar2;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


