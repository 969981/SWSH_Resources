/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043a190; name: FUN_0043a190
 */


void FUN_0043a190(long param_1,long *param_2,long param_3,uint param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 0x50);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    plVar4 = (long *)0x0;
    if (param_2 == (long *)0x0) {
      do {
        lVar5 = plVar7[2];
        plVar1 = (long *)FUN_0043e8c0(*(undefined8 *)(lVar5 + 8));
        if (((param_3 == 0) || (*(long *)(lVar5 + 0x40) == param_3)) &&
           ((param_5 == 0 || (*(int *)(lVar5 + 0x30) == param_5)))) {
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            goto LAB_0043a27c;
          }
          FUN_0043aba0(param_1,lVar5);
          plVar2 = (long *)*plVar7;
          plVar3 = plVar6;
          if (*(long **)(param_1 + 0x50) != plVar7) {
            plVar3 = plVar4;
          }
          *plVar3 = (long)plVar2;
          if (*(long **)(param_1 + 0x58) == plVar7) {
            *(long **)(param_1 + 0x58) = plVar4;
          }
          *plVar7 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar7;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        else {
LAB_0043a27c:
          plVar2 = (long *)*plVar7;
          plVar4 = plVar7;
        }
        plVar7 = plVar2;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      } while (plVar7 != (long *)0x0);
    }
    else {
      do {
        lVar5 = plVar7[2];
        plVar1 = (long *)FUN_0043e8c0(*(undefined8 *)(lVar5 + 8));
        if (plVar1 == (long *)0x0) {
LAB_0043a394:
          plVar2 = (long *)*plVar7;
          plVar4 = plVar7;
        }
        else {
          if (plVar1 != param_2) {
            plVar3 = (long *)plVar1[0x10];
            for (plVar2 = (long *)plVar1[0xf]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[0xf])
            {
              while( true ) {
                if (plVar2 == param_2) goto LAB_0043a35c;
                if (plVar3 == (long *)0x0) break;
                plVar2 = (long *)plVar2[0xf];
                if (plVar2 == (long *)0x0) goto joined_r0x0043a344;
              }
              plVar3 = (long *)plVar2[0x10];
            }
joined_r0x0043a344:
            do {
              if (plVar3 == (long *)0x0) goto LAB_0043a394;
              if (plVar3 == param_2) break;
              plVar3 = (long *)plVar3[0x10];
            } while( true );
          }
LAB_0043a35c:
          if (((param_3 != 0) && (*(long *)(lVar5 + 0x40) != param_3)) ||
             ((param_5 != 0 && (*(int *)(lVar5 + 0x30) != param_5)))) goto LAB_0043a394;
          if (((param_4 & 1) == 0) && (*(int *)(lVar5 + 0x34) != 0)) {
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + -1;
            goto LAB_0043a394;
          }
          FUN_0043aba0(param_1,lVar5);
          plVar2 = (long *)*plVar7;
          plVar3 = plVar6;
          if (*(long **)(param_1 + 0x50) != plVar7) {
            plVar3 = plVar4;
          }
          *plVar3 = (long)plVar2;
          if (*(long **)(param_1 + 0x58) == plVar7) {
            *(long **)(param_1 + 0x58) = plVar4;
          }
          *plVar7 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar7;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        }
        plVar7 = plVar2;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      } while (plVar7 != (long *)0x0);
    }
  }
  FUN_0043bac0(param_1,param_2,param_3,0,param_5);
  return;
}


