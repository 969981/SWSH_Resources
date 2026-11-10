/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043be30; name: FUN_0043be30
 */


void FUN_0043be30(ulong param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)(param_1 + 0x50);
  plVar5 = (long *)*plVar4;
  if (plVar5 != (long *)0x0) {
    if (param_2 == 0) {
      uVar1 = param_1;
      plVar6 = (long *)0x0;
LAB_0043bf38:
      do {
        lVar3 = plVar5[2];
        if (((param_5 == 0) || (*(int *)(lVar3 + 0x30) == param_5)) &&
           (uVar1 = FUN_0043b440(uVar1,*(undefined8 *)(lVar3 + 8),param_3), (uVar1 & 1) == 0)) {
          if (((param_4 & 1) != 0) || (*(int *)(lVar3 + 0x34) == 0)) {
            uVar1 = FUN_0043aba0(param_1,lVar3);
            plVar2 = (long *)*plVar5;
            plVar7 = plVar4;
            if (*(long **)(param_1 + 0x50) != plVar5) {
              plVar7 = plVar6;
            }
            *plVar7 = (long)plVar2;
            if (*(long **)(param_1 + 0x58) == plVar5) {
              *(long **)(param_1 + 0x58) = plVar6;
            }
            *plVar5 = *(long *)(param_1 + 0x60);
            *(long **)(param_1 + 0x60) = plVar5;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
            plVar5 = plVar2;
            if (plVar2 == (long *)0x0) break;
            goto LAB_0043bf38;
          }
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        }
        plVar7 = (long *)*plVar5;
        plVar6 = plVar5;
        plVar5 = plVar7;
      } while (plVar7 != (long *)0x0);
    }
    else if (param_5 == 0) {
      uVar1 = param_1;
      plVar6 = (long *)0x0;
      do {
        while ((lVar3 = plVar5[2], *(long *)(lVar3 + 0x40) != param_2 ||
               (uVar1 = FUN_0043b440(uVar1,*(undefined8 *)(lVar3 + 8),param_3), (uVar1 & 1) != 0)))
        {
LAB_0043c018:
          plVar7 = (long *)*plVar5;
          plVar6 = plVar5;
          plVar5 = plVar7;
          if (plVar7 == (long *)0x0) goto LAB_0043c080;
        }
        if (((param_4 & 1) == 0) && (*(int *)(lVar3 + 0x34) != 0)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
          goto LAB_0043c018;
        }
        uVar1 = FUN_0043aba0(param_1,lVar3);
        plVar2 = (long *)*plVar5;
        plVar7 = plVar4;
        if (*(long **)(param_1 + 0x50) != plVar5) {
          plVar7 = plVar6;
        }
        *plVar7 = (long)plVar2;
        if (*(long **)(param_1 + 0x58) == plVar5) {
          *(long **)(param_1 + 0x58) = plVar6;
        }
        *plVar5 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar5;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        plVar5 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      uVar1 = param_1;
      plVar6 = (long *)0x0;
LAB_0043be7c:
      do {
        plVar7 = plVar5;
        lVar3 = plVar7[2];
        if (((*(long *)(lVar3 + 0x40) == param_2) && (*(int *)(lVar3 + 0x30) == param_5)) &&
           (uVar1 = FUN_0043b440(uVar1,*(undefined8 *)(lVar3 + 8),param_3), (uVar1 & 1) == 0)) {
          if (((param_4 & 1) != 0) || (*(int *)(lVar3 + 0x34) == 0)) {
            uVar1 = FUN_0043aba0(param_1,lVar3);
            plVar5 = (long *)*plVar7;
            plVar2 = plVar4;
            if (*(long **)(param_1 + 0x50) != plVar7) {
              plVar2 = plVar6;
            }
            *plVar2 = (long)plVar5;
            if (*(long **)(param_1 + 0x58) == plVar7) {
              *(long **)(param_1 + 0x58) = plVar6;
            }
            *plVar7 = *(long *)(param_1 + 0x60);
            *(long **)(param_1 + 0x60) = plVar7;
            *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
            if (plVar5 == (long *)0x0) break;
            goto LAB_0043be7c;
          }
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
        }
        plVar5 = (long *)*plVar7;
        plVar6 = plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
LAB_0043c080:
  uVar1 = *(ulong *)PTR_DAT_02712de0;
  plVar5 = *(long **)(uVar1 + 0x28);
  if (plVar5 != (long *)0x0) {
    if (param_2 == 0) {
      if (param_5 == 0) {
        do {
          lVar3 = *(long *)(plVar5[2] + 8);
          uVar1 = FUN_0043b440(uVar1,lVar3,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar1 = FUN_00441dc0(lVar3);
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          if (*(int *)(plVar5[2] + 0x30) == param_5) {
            lVar3 = *(long *)(plVar5[2] + 8);
            uVar1 = FUN_0043b440(uVar1,lVar3,param_3);
            if (((uVar1 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
              uVar1 = FUN_00441dc0(lVar3);
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
    else if (param_5 == 0) {
      do {
        if (*(long *)(plVar5[2] + 0x40) == param_2) {
          lVar3 = *(long *)(plVar5[2] + 8);
          uVar1 = FUN_0043b440(uVar1,lVar3,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar1 = FUN_00441dc0(lVar3);
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    else {
      do {
        lVar3 = plVar5[2];
        if ((*(long *)(lVar3 + 0x40) == param_2) && (*(int *)(lVar3 + 0x30) == param_5)) {
          lVar3 = *(long *)(lVar3 + 8);
          uVar1 = FUN_0043b440(uVar1,lVar3,param_3);
          if (((uVar1 & 1) == 0) && (*(short *)(lVar3 + 0x34) == 0x503)) {
            uVar1 = FUN_00441dc0(lVar3);
          }
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  return;
}


