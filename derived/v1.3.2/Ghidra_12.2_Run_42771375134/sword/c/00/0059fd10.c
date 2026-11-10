/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059fd10; name: FUN_0059fd10
 */


int FUN_0059fd10(long param_1,int param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar3 = PTR_PTR_02713988;
  if ((param_2 != 0) && (param_3 != 0)) {
    plVar5 = *(long **)(param_1 + 0x38);
    plVar1 = (long *)(param_1 + 0x30);
    if (plVar1 != plVar5) {
      if (0 < param_2) {
        iVar6 = 0;
LAB_0059fd68:
        do {
          lVar9 = plVar5[2];
          lVar4 = 0;
          do {
            plVar7 = *(long **)(param_3 + lVar4 * 8);
            if (((plVar7 != (long *)0x0) && (*(long **)(lVar9 + 8) == plVar7)) &&
               (iVar2 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar2, iVar2 == 0)) {
              uVar8 = *(undefined8 *)puVar3;
              (**(code **)(*plVar7 + 0x20))(plVar7);
              FUN_005b9b10(uVar8,plVar7);
              *(undefined8 *)(lVar9 + 8) = 0;
              iVar6 = iVar6 + 1;
              if (plVar5[2] != 0) {
                FUN_005b9b10(*(undefined8 *)puVar3);
              }
              plVar7 = (long *)plVar5[1];
              plVar5[2] = 0;
              *(long **)(*plVar5 + 8) = plVar7;
              *(long *)plVar5[1] = *plVar5;
              *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
              FUN_005b9b10(*(undefined8 *)puVar3,plVar5);
              plVar5 = plVar7;
              if (plVar1 == plVar7) {
                return iVar6;
              }
              goto LAB_0059fd68;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < param_2);
          if (plVar1 != plVar5) {
            plVar5 = (long *)plVar5[1];
          }
          if (plVar1 == plVar5) {
            return iVar6;
          }
        } while( true );
      }
      do {
        if (plVar1 != plVar5) {
          plVar5 = (long *)plVar5[1];
        }
      } while (plVar1 != plVar5);
    }
  }
  return 0;
}


