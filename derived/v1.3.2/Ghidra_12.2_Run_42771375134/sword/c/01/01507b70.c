/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01507b70; name: FUN_01507b70
 */


undefined8 FUN_01507b70(long param_1,uint *param_2,uint *param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  plVar1 = (long *)(param_1 + 0x50a60);
  if (*plVar1 != 0) {
    uVar2 = FUN_01509eb0();
    if (uVar2 != 0) {
      uVar3 = *param_3;
      uVar7 = *param_2;
      uVar12 = 0;
      do {
        if (uVar2 <= uVar7) {
          uVar7 = 0;
        }
        if (uVar3 < 0x1e) {
          if (uVar7 < 0x20) {
            lVar9 = param_1 + 0x60 + (ulong)uVar7 * 0x2850 + (ulong)uVar3 * 0x158;
            uVar4 = (ulong)uVar3;
            do {
              lVar10 = *param_4;
              if (lVar10 == 0) {
                FUN_008664b0(0,lVar9);
                uVar5 = FUN_008787d0(0);
              }
              else {
                plVar11 = (long *)(lVar10 + 0x48);
                (**(code **)(*plVar11 + 0x10))(plVar11);
                (**(code **)(*plVar11 + 0x10))(plVar11);
                FUN_008664b0(lVar10,lVar9);
                (**(code **)(*plVar11 + 0x18))(plVar11);
                uVar5 = FUN_008787d0(lVar10);
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
              if ((uVar5 & 1) != 0) {
                uVar3 = (uint)uVar4;
                goto LAB_01507f74;
              }
              uVar4 = uVar4 + 1;
              lVar9 = lVar9 + 0x158;
            } while (uVar4 < 0x1e);
          }
          else {
            do {
              lVar9 = *param_4;
              if (lVar9 == 0) {
                uVar4 = FUN_008787d0(0);
              }
              else {
                plVar11 = (long *)(lVar9 + 0x48);
                (**(code **)(*plVar11 + 0x10))(plVar11);
                (**(code **)(*plVar11 + 0x10))(plVar11);
                (**(code **)(*plVar11 + 0x18))(plVar11);
                uVar4 = FUN_008787d0(lVar9);
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
              if ((uVar4 & 1) != 0) {
LAB_01507f74:
                *param_2 = uVar7;
                *param_3 = uVar3;
                return 1;
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < 0x1e);
          }
        }
        uVar12 = uVar12 + 1;
        uVar3 = 0;
        uVar7 = uVar7 + 1;
      } while (uVar12 < uVar2);
    }
    if (*param_3 != 0) {
      uVar4 = 0;
      lVar9 = param_1 + 0x60;
      do {
        uVar3 = *param_2;
        lVar10 = *param_4;
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0x48);
          (**(code **)(*plVar11 + 0x10))(plVar11);
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        if ((uVar4 < 0x1e) && (uVar3 < 0x20)) {
          FUN_008664b0(lVar10,lVar9 + (ulong)uVar3 * 0x2850);
        }
        if (lVar10 == 0) {
          uVar5 = FUN_008787d0(0);
        }
        else {
          plVar11 = (long *)(lVar10 + 0x48);
          (**(code **)(*plVar11 + 0x18))(plVar11);
          uVar5 = FUN_008787d0(lVar10);
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          *param_3 = (uint)uVar4;
          return 1;
        }
        uVar4 = uVar4 + 1;
        lVar9 = lVar9 + 0x158;
      } while (uVar4 < *param_3);
    }
    uVar3 = FUN_0150b1c0(*plVar1);
    if (uVar2 < uVar3) {
      uVar4 = (ulong)uVar2;
      lVar9 = param_1 + (ulong)uVar2 * 0x2850 + 0x60;
      do {
        if (uVar4 < 0x20) {
          uVar5 = 0;
          lVar10 = lVar9;
          do {
            lVar8 = *param_4;
            if (lVar8 == 0) {
              FUN_008664b0(0,lVar10);
              uVar6 = FUN_008787d0(0);
            }
            else {
              plVar11 = (long *)(lVar8 + 0x48);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              FUN_008664b0(lVar8,lVar10);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              uVar6 = FUN_008787d0(lVar8);
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
            if ((uVar6 & 1) != 0) goto LAB_01507fb4;
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0x158;
          } while (uVar5 < 0x1e);
        }
        else {
          uVar5 = 0;
          do {
            lVar10 = *param_4;
            if (lVar10 == 0) {
              uVar6 = FUN_008787d0(0);
            }
            else {
              plVar11 = (long *)(lVar10 + 0x48);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              (**(code **)(*plVar11 + 0x18))(plVar11);
              uVar6 = FUN_008787d0(lVar10);
              (**(code **)(*plVar11 + 0x18))(plVar11);
            }
            if ((uVar6 & 1) != 0) {
LAB_01507fb4:
              *param_2 = (uint)uVar4;
              *param_3 = (uint)uVar5;
              return 1;
            }
            uVar2 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar2;
          } while (uVar2 < 0x1e);
        }
        uVar4 = uVar4 + 1;
        uVar5 = FUN_0150b1c0(*plVar1);
        lVar9 = lVar9 + 0x2850;
      } while (uVar4 < (uVar5 & 0xffffffff));
    }
  }
  return 0;
}


