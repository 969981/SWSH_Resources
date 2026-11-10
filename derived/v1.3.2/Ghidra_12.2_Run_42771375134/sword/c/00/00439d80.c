/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00439d80; name: FUN_00439d80
 */


void FUN_00439d80(long param_1,long *param_2,long param_3,ulong param_4,int param_5)

{
  ushort uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        lVar9 = plVar8[2];
        lVar7 = *(long *)(lVar9 + 8);
        plVar2 = (long *)FUN_0043e8c0(lVar7);
        uVar1 = *(ushort *)(lVar7 + 0x34);
        if ((((uVar1 & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
           ((param_3 == 0 || (*(long *)(lVar9 + 0x40) == param_3)))) {
          if ((uVar1 != 0x1820) && (param_5 == 0 || *(int *)(lVar9 + 0x30) == param_5)) {
            *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
          }
        }
        plVar8 = (long *)*plVar8;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))();
        }
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          lVar9 = plVar8[2];
          lVar7 = *(long *)(lVar9 + 8);
          plVar2 = (long *)FUN_0043e8c0(lVar7);
          if (plVar2 == (long *)0x0) break;
          if (plVar2 != param_2) {
            plVar3 = (long *)plVar2[0x10];
            for (plVar5 = (long *)plVar2[0xf]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0xf])
            {
              while( true ) {
                if (plVar5 == param_2) goto LAB_00439e24;
                if (plVar3 == (long *)0x0) break;
                plVar5 = (long *)plVar5[0xf];
                if (plVar5 == (long *)0x0) goto joined_r0x00439e0c;
              }
              plVar3 = (long *)plVar5[0x10];
            }
joined_r0x00439e0c:
            do {
              if (plVar3 == (long *)0x0) goto LAB_00439e7c;
              if (plVar3 == param_2) break;
              plVar3 = (long *)plVar3[0x10];
            } while( true );
          }
LAB_00439e24:
          uVar1 = *(ushort *)(lVar7 + 0x34);
          if ((((uVar1 & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
             ((param_3 == 0 || (*(long *)(lVar9 + 0x40) == param_3)))) {
            if ((uVar1 != 0x1820) && (param_5 == 0 || *(int *)(lVar9 + 0x30) == param_5)) {
              *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
            }
          }
LAB_00439e7c:
          plVar8 = (long *)*plVar8;
          (**(code **)(*plVar2 + 0x18))();
          if (plVar8 == (long *)0x0) goto LAB_00439f24;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_00439f24:
  plVar2 = (long *)(param_1 + 0x28);
  plVar8 = (long *)*plVar2;
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)0x0;
      do {
        lVar7 = plVar8[2];
        lVar9 = *(long *)(lVar7 + 8);
        plVar3 = (long *)FUN_0043e8c0(lVar9);
        if ((((*(ushort *)(lVar9 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
           ((param_3 != 0 && (*(long *)(lVar7 + 0x40) != param_3)))) {
LAB_0043a14c:
          plVar6 = (long *)*plVar8;
          plVar5 = plVar8;
        }
        else {
          if ((*(ushort *)(lVar9 + 0x34) == 0x1820) ||
             (param_5 != 0 && *(int *)(lVar7 + 0x30) != param_5)) goto LAB_0043a14c;
          FUN_0043a7c0(param_1,*(undefined4 *)(lVar9 + 0x30),lVar7,0);
          plVar6 = (long *)*plVar8;
          plVar4 = plVar2;
          if (*(long **)(param_1 + 0x28) != plVar8) {
            plVar4 = plVar5;
          }
          *plVar4 = (long)plVar6;
          if (*(long **)(param_1 + 0x30) == plVar8) {
            *(long **)(param_1 + 0x30) = plVar5;
          }
          *plVar8 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar8;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        plVar8 = plVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      } while (plVar8 != (long *)0x0);
    }
    else {
      plVar5 = (long *)0x0;
      do {
        lVar7 = plVar8[2];
        lVar9 = *(long *)(lVar7 + 8);
        plVar3 = (long *)FUN_0043e8c0(lVar9);
        if (plVar3 == (long *)0x0) {
LAB_0043a058:
          plVar6 = (long *)*plVar8;
          plVar5 = plVar8;
        }
        else {
          if (plVar3 != param_2) {
            plVar4 = (long *)plVar3[0x10];
            for (plVar6 = (long *)plVar3[0xf]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0xf])
            {
              while( true ) {
                if (plVar6 == param_2) goto LAB_0043a034;
                if (plVar4 == (long *)0x0) break;
                plVar6 = (long *)plVar6[0xf];
                if (plVar6 == (long *)0x0) goto joined_r0x0043a01c;
              }
              plVar4 = (long *)plVar6[0x10];
            }
joined_r0x0043a01c:
            do {
              if (plVar4 == (long *)0x0) goto LAB_0043a058;
              if (plVar4 == param_2) break;
              plVar4 = (long *)plVar4[0x10];
            } while( true );
          }
LAB_0043a034:
          if ((((*(ushort *)(lVar9 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
             ((param_3 != 0 && (*(long *)(lVar7 + 0x40) != param_3)))) goto LAB_0043a058;
          if ((*(ushort *)(lVar9 + 0x34) == 0x1820) ||
             (param_5 != 0 && *(int *)(lVar7 + 0x30) != param_5)) goto LAB_0043a058;
          FUN_0043a7c0(param_1,*(undefined4 *)(lVar9 + 0x30),lVar7,0);
          plVar6 = (long *)*plVar8;
          plVar4 = plVar2;
          if (*(long **)(param_1 + 0x28) != plVar8) {
            plVar4 = plVar5;
          }
          *plVar4 = (long)plVar6;
          if (*(long **)(param_1 + 0x30) == plVar8) {
            *(long **)(param_1 + 0x30) = plVar5;
          }
          *plVar8 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar8;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        plVar8 = plVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


