/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043b0c0; name: FUN_0043b0c0
 */


void FUN_0043b0c0(ulong param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar4 = *(long **)(param_1 + 0x50);
  uVar1 = param_1;
  if (plVar4 != (long *)0x0) {
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
        do {
          lVar3 = plVar4[2];
          lVar6 = *(long *)(lVar3 + 8);
          if (((*(ushort *)(lVar6 + 0x34) & 0xff00) != 0x300) &&
             ((((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)) &&
               (uVar1 = FUN_0043b440(uVar1,lVar6,param_3), (uVar1 & 1) == 0)) &&
              (*(short *)(lVar6 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          lVar3 = plVar4[2];
          lVar6 = *(long *)(lVar3 + 8);
          if (((((*(ushort *)(lVar6 + 0x34) & 0xff00) != 0x300) &&
               (*(long *)(lVar3 + 0x40) == param_2)) &&
              ((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)))) &&
             ((uVar1 = FUN_0043b440(uVar1,lVar6,param_3), (uVar1 & 1) == 0 &&
              (*(short *)(lVar6 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else if (param_2 == 0) {
      do {
        lVar3 = plVar4[2];
        lVar6 = *(long *)(lVar3 + 8);
        if ((((param_5 == 0) || (*(int *)(lVar3 + 0x30) == param_5)) &&
            (uVar1 = FUN_0043b440(uVar1,lVar6,param_3), (uVar1 & 1) == 0)) &&
           (*(short *)(lVar6 + 0x34) != 0x1820)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        lVar6 = plVar4[2];
        if (((*(long *)(lVar6 + 0x40) == param_2) &&
            ((lVar3 = *(long *)(lVar6 + 8), param_5 == 0 || (*(int *)(lVar6 + 0x30) == param_5))))
           && ((uVar1 = FUN_0043b440(uVar1,lVar3,param_3), (uVar1 & 1) == 0 &&
               (*(short *)(lVar3 + 0x34) != 0x1820)))) {
          *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  plVar5 = (long *)(param_1 + 0x28);
  plVar4 = (long *)*plVar5;
  if (plVar4 != (long *)0x0) {
    if ((param_4 & 1) == 0) {
      plVar7 = (long *)0x0;
      do {
        while( true ) {
          lVar6 = plVar4[2];
          lVar3 = *(long *)(lVar6 + 8);
          if ((((*(ushort *)(lVar3 + 0x34) & 0xff00) != 0x300) &&
              ((param_2 == 0 || (*(long *)(lVar6 + 0x40) == param_2)))) &&
             (((param_5 == 0 || (*(int *)(lVar6 + 0x30) == param_5)) &&
              ((uVar1 = FUN_0043b440(uVar1,lVar3,param_3), (uVar1 & 1) == 0 &&
               (*(short *)(lVar3 + 0x34) != 0x1820)))))) break;
          plVar8 = (long *)*plVar4;
          plVar7 = plVar4;
          plVar4 = plVar8;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        uVar1 = FUN_0043a7c0(param_1,*(undefined4 *)(lVar3 + 0x30),lVar6,0);
        plVar2 = (long *)*plVar4;
        plVar8 = plVar5;
        if (*(long **)(param_1 + 0x28) != plVar4) {
          plVar8 = plVar7;
        }
        *plVar8 = (long)plVar2;
        if (*(long **)(param_1 + 0x30) == plVar4) {
          *(long **)(param_1 + 0x30) = plVar7;
        }
        *plVar4 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar4;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        plVar4 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
    else {
      plVar7 = (long *)0x0;
      do {
        while( true ) {
          lVar6 = plVar4[2];
          lVar3 = *(long *)(lVar6 + 8);
          if ((((param_2 == 0) || (*(long *)(lVar6 + 0x40) == param_2)) &&
              ((param_5 == 0 || (*(int *)(lVar6 + 0x30) == param_5)))) &&
             ((uVar1 = FUN_0043b440(uVar1,lVar3,param_3), (uVar1 & 1) == 0 &&
              (*(short *)(lVar3 + 0x34) != 0x1820)))) break;
          plVar8 = (long *)*plVar4;
          plVar7 = plVar4;
          plVar4 = plVar8;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        uVar1 = FUN_0043a7c0(param_1,*(undefined4 *)(lVar3 + 0x30),lVar6,0);
        plVar2 = (long *)*plVar4;
        plVar8 = plVar5;
        if (*(long **)(param_1 + 0x28) != plVar4) {
          plVar8 = plVar7;
        }
        *plVar8 = (long)plVar2;
        if (*(long **)(param_1 + 0x30) == plVar4) {
          *(long **)(param_1 + 0x30) = plVar7;
        }
        *plVar4 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar4;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        plVar4 = plVar2;
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}


