/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01017750; name: FUN_01017750
 */


void FUN_01017750(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (param_2 == 0) {
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar1,param_1[1] << 3,0x10);
    }
    param_1[1] = 0;
    return;
  }
  lVar1 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,0x10);
  if (lVar1 == 0) {
    (**(code **)(*(long *)param_1[2] + 0xb8))();
  }
  lVar2 = *param_1;
  *param_1 = lVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar2,param_1[1] << 3,0x10);
  }
  uVar5 = param_2 - 1;
  uVar3 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar5 < 3) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    do {
      lVar2 = lVar1 * 8;
      lVar1 = lVar1 + 4;
      *(undefined8 *)(*param_1 + lVar2) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
    } while (param_2 - uVar3 != lVar1);
  }
  if (uVar3 != 0) {
    lVar1 = lVar1 << 3;
    lVar2 = -uVar3;
    do {
      *(undefined8 *)(*param_1 + lVar1) = 0;
      lVar1 = lVar1 + 8;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0);
  }
  plVar6 = param_1 + 5;
  plVar4 = (long *)*plVar6;
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar3 = plVar4[1];
  if ((uVar5 & param_2) == 0) {
    uVar3 = uVar3 & uVar5;
  }
  else if (param_2 <= uVar3) {
    uVar8 = 0;
    if (param_2 != 0) {
      uVar8 = uVar3 / param_2;
    }
    uVar3 = uVar3 - uVar8 * param_2;
    *(long **)(*param_1 + uVar3 * 8) = plVar6;
    plVar6 = (long *)*plVar4;
    goto joined_r0x010178c8;
  }
  *(long **)(*param_1 + uVar3 * 8) = plVar6;
  plVar6 = (long *)*plVar4;
joined_r0x010178c8:
  if (plVar6 != (long *)0x0) {
    if ((uVar5 & param_2) == 0) {
      do {
        while (uVar8 = plVar6[1] & uVar5, uVar8 != uVar3) {
          plVar7 = plVar6;
          if (*(long *)(*param_1 + uVar8 * 8) != 0) {
            do {
              plVar9 = plVar7;
              plVar7 = (long *)*plVar9;
              if (plVar7 == (long *)0x0) break;
            } while (plVar6[2] == plVar7[2]);
            *plVar4 = (long)plVar7;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
            plVar7 = (long *)*plVar4;
            plVar6 = plVar4;
            goto joined_r0x010179e4;
          }
          *(long **)(*param_1 + uVar8 * 8) = plVar4;
          plVar7 = (long *)*plVar6;
          plVar4 = plVar6;
          uVar3 = uVar8;
          plVar6 = plVar7;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar7 = (long *)*plVar6;
joined_r0x010179e4:
        plVar4 = plVar6;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar5 = plVar6[1];
          if (param_2 <= uVar5) {
            uVar8 = 0;
            if (param_2 != 0) {
              uVar8 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar8 * param_2;
          }
          if (uVar5 != uVar3) break;
          plVar7 = (long *)*plVar6;
joined_r0x01017950:
          plVar4 = plVar6;
          plVar6 = plVar7;
          if (plVar7 == (long *)0x0) {
            return;
          }
        }
        plVar7 = plVar6;
        if (*(long *)(*param_1 + uVar5 * 8) != 0) {
          do {
            plVar9 = plVar7;
            plVar7 = (long *)*plVar9;
            if (plVar7 == (long *)0x0) break;
          } while (plVar6[2] == plVar7[2]);
          *plVar4 = (long)plVar7;
          *plVar9 = **(long **)(*param_1 + uVar5 * 8);
          **(undefined8 **)(*param_1 + uVar5 * 8) = plVar6;
          plVar7 = (long *)*plVar4;
          plVar6 = plVar4;
          goto joined_r0x01017950;
        }
        *(long **)(*param_1 + uVar5 * 8) = plVar4;
        plVar7 = (long *)*plVar6;
        plVar4 = plVar6;
        uVar3 = uVar5;
        plVar6 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


