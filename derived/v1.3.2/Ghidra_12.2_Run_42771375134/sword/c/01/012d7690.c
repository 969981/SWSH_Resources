/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d7690; name: FUN_012d7690
 */


undefined8 FUN_012d7690(long param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_50 [24];
  long local_38;
  
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    return 0;
  }
  uVar5 = *param_2;
  uVar8 = *(ulong *)(param_1 + 0x1d8);
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar9 & uVar8) == 0) {
      uVar6 = uVar9 & uVar5;
      plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar8 <= uVar5) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar5 / uVar8;
        }
        uVar6 = uVar5 - uVar6 * uVar8;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x1d0) + uVar6 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar9 & uVar8) == 0) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 != uVar5 && (uVar8 & uVar9) != uVar6) break;
          if ((uVar8 == uVar5) && (plVar7[2] == uVar5)) goto LAB_012d786c;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar7[1];
          if (uVar9 == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_012d786c;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_012d7788:
  uVar8 = *(ulong *)(param_1 + 0x230);
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar9 & uVar8) == 0) {
      uVar6 = uVar9 & uVar5;
      plVar7 = *(long **)(*(long *)(param_1 + 0x228) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar8 <= uVar5) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar5 / uVar8;
        }
        uVar6 = uVar5 - uVar6 * uVar8;
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x228) + uVar6 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if ((uVar9 & uVar8) != 0) {
        do {
          uVar9 = plVar7[1];
          if (uVar9 == uVar5) {
            if (plVar7[2] == uVar5) goto LAB_012d78d0;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar4 * uVar8;
            }
            if (uVar9 != uVar6) {
              return 0;
            }
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      while (uVar8 = plVar7[1], uVar8 == uVar5 || (uVar8 & uVar9) == uVar6) {
        if ((uVar8 == uVar5) && (plVar7[2] == uVar5)) {
LAB_012d78d0:
          lVar1 = plVar7[3];
          lVar3 = plVar7[4];
          lVar2 = plVar7[5];
          *(long *)(param_1 + 0x298) = plVar7[6];
          *(long *)(param_1 + 0x290) = lVar2;
          *(long *)(param_1 + 0x288) = lVar3;
          *(long *)(param_1 + 0x280) = lVar1;
          lVar1 = plVar7[7];
          lVar3 = plVar7[8];
          lVar2 = plVar7[9];
          *(long *)(param_1 + 0x2b8) = plVar7[10];
          *(long *)(param_1 + 0x2b0) = lVar2;
          *(long *)(param_1 + 0x2a8) = lVar3;
          *(long *)(param_1 + 0x2a0) = lVar1;
          *(long *)(param_1 + 0x2c0) = plVar7[0xb];
          *(long *)(param_1 + 0x2c8) = plVar7[0xc];
          *(long *)(param_1 + 0x2d0) = plVar7[0xd];
          return 1;
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
      }
    }
  }
  return 0;
LAB_012d786c:
  if (*(char *)plVar7[4] != '\0') {
    uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xc0) + 0x78);
    FUN_006cf0a0(auStack_50,plVar7 + 3);
    FUN_00895ec0(uVar10,param_1 + 0x138,auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_00895fd0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xc0) + 0x78),param_1 + 0x158
                );
    return 1;
  }
  goto LAB_012d7788;
}


