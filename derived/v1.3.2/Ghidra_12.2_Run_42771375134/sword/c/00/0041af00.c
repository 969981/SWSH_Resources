/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041af00; name: FUN_0041af00
 */


void FUN_0041af00(long param_1,long param_2,int param_3,undefined4 param_4,undefined8 *param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ushort *puVar11;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar11 = *(ushort **)(param_2 + 0x18);
    puVar1 = PTR_DAT_02712be8 + 0x10;
    do {
      plVar9 = *(long **)(param_1 + 0x70);
      uVar8 = (uint)*puVar11;
      if (plVar9 != (long *)0x0) {
        plVar6 = (long *)0x0;
        do {
          while (((iVar4 = (**(code **)(*plVar9 + 0x10))(plVar9), iVar4 != 0 ||
                  (plVar9[3] != *(long *)(param_2 + 0x10))) || (*(uint *)(plVar9 + 4) != uVar8))) {
            plVar2 = plVar9 + 1;
            plVar6 = plVar9;
            plVar9 = (long *)*plVar2;
            if ((long *)*plVar2 == (long *)0x0) goto LAB_0041b014;
          }
          if ((int)plVar9[2] <= param_3) goto LAB_0041b0c4;
          plVar7 = (long *)plVar9[1];
          plVar2 = (long *)(param_1 + 0x70);
          if (*(long **)(param_1 + 0x70) != plVar9) {
            plVar2 = plVar6 + 1;
          }
          *plVar2 = (long)plVar7;
          if (*(long **)(param_1 + 0x68) == plVar9) {
            *(long **)(param_1 + 0x68) = plVar6;
          }
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*plVar9)(plVar9);
          FUN_00404870(uVar3,plVar9);
          plVar9 = plVar7;
        } while (plVar7 != (long *)0x0);
      }
LAB_0041b014:
      plVar9 = *(long **)(param_2 + 0x10);
      lVar10 = *(long *)(param_1 + 0x30);
      if (lVar10 != 0) {
        do {
          if (((*(long **)(lVar10 + 0x80) == plVar9) && (*(uint *)(lVar10 + 0x88) == uVar8)) &&
             (((*(byte *)(lVar10 + 0x5a) & 0xe) == 0 &&
              (uVar5 = FUN_004096a0(lVar10), (uVar5 & 1) == 0)))) goto LAB_0041b0c4;
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != 0);
        plVar9 = *(long **)(param_2 + 0x10);
      }
      plVar6 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
      if (plVar6 != (long *)0x0) {
        *(int *)(plVar6 + 2) = param_3;
        plVar6[3] = (long)plVar9;
        *(uint *)(plVar6 + 4) = uVar8;
        *plVar6 = (long)puVar1;
        *(undefined4 *)((long)plVar6 + 0x2c) = *(undefined4 *)(param_5 + 1);
        *(undefined8 *)((long)plVar6 + 0x24) = *param_5;
        *(undefined4 *)(plVar6 + 6) = param_4;
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0041b2a0(param_1 + 0x60,plVar6);
      }
LAB_0041b0c4:
      puVar11 = puVar11 + 1;
    } while (puVar11 != (ushort *)(*(long *)(param_2 + 0x18) + (ulong)*(uint *)(param_2 + 0x20) * 2)
            );
  }
  return;
}


