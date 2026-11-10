/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041ad60; name: FUN_0041ad60
 */


void FUN_0041ad60(long param_1,long param_2,int param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar1 = PTR_DAT_02712bf8 + 0x10;
    lVar7 = *(long *)(param_1 + 0x30);
    do {
      lVar8 = *(long *)(lVar7 + 8);
      if ((((*(byte *)(lVar7 + 0x5a) & 0xe) == 0) &&
          (*(long *)(lVar7 + 0x80) == *(long *)(param_2 + 0x10))) &&
         (uVar5 = FUN_0041dfb0(param_2,*(undefined4 *)(lVar7 + 0x88)), (uVar5 & 1) == 0)) {
        plVar9 = *(long **)(param_1 + 0x70);
        if (plVar9 != (long *)0x0) {
          plVar6 = (long *)0x0;
          do {
            while ((iVar4 = (**(code **)(*plVar9 + 0x10))(plVar9), iVar4 == 1 &&
                   (plVar9[3] == lVar7))) {
              if ((int)plVar9[2] <= param_3) goto LAB_0041aed4;
              plVar10 = (long *)plVar9[1];
              plVar2 = (long *)(param_1 + 0x70);
              if (*(long **)(param_1 + 0x70) != plVar9) {
                plVar2 = plVar6 + 1;
              }
              *plVar2 = (long)plVar10;
              if (*(long **)(param_1 + 0x68) == plVar9) {
                *(long **)(param_1 + 0x68) = plVar6;
              }
              uVar3 = *(undefined4 *)PTR_DAT_02712a90;
              (**(code **)*plVar9)(plVar9);
              FUN_00404870(uVar3,plVar9);
              plVar9 = plVar10;
              if (plVar10 == (long *)0x0) goto LAB_0041ae8c;
            }
            plVar2 = plVar9 + 1;
            plVar6 = plVar9;
            plVar9 = (long *)*plVar2;
          } while ((long *)*plVar2 != (long *)0x0);
        }
LAB_0041ae8c:
        plVar9 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
        if (plVar9 != (long *)0x0) {
          *(int *)(plVar9 + 2) = param_3;
          plVar9[3] = lVar7;
          *plVar9 = (long)puVar1;
          *(int *)(plVar9 + 5) = (int)param_4[1];
          plVar9[4] = *param_4;
          FUN_0041b2a0(param_1 + 0x60,plVar9);
        }
      }
LAB_0041aed4:
      lVar7 = lVar8;
    } while (lVar8 != 0);
  }
  return;
}


