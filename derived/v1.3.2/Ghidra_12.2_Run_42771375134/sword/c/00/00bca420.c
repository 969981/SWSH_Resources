/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bca420; name: FUN_00bca420
 */


undefined8 FUN_00bca420(long param_1)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  if ((ulong)*(ushort *)(param_1 + 0x6d8) != 0) {
    lVar6 = *(long *)(param_1 + 0x6d0);
    lVar11 = 0;
    uVar7 = 0;
    do {
      if (*(int *)(lVar6 + lVar11) == 2) {
        uVar8 = (uint)((ulong)uVar4 >> 0x20);
        uVar2 = uVar8 - 2;
        if (uVar8 < 2) {
LAB_00bca570:
          *(undefined4 *)(lVar6 + lVar11) = 2;
          *(undefined2 *)(*(long *)(param_1 + 0x6d0) + lVar11 + 4) = 0xffff;
          uVar3 = 0xffff;
        }
        else {
          if ((int)uVar4 == 0) {
            if (5 < (int)uVar2) goto LAB_00bca570;
            *(undefined4 *)(lVar6 + lVar11) = 1;
            *(short *)(*(long *)(param_1 + 0x6d0) + lVar11 + 4) =
                 (short)*(undefined4 *)(param_1 + 0x614);
            uVar4 = 1;
            iVar5 = 0;
          }
          else {
            if (4 < uVar2) goto LAB_00bca570;
            *(undefined4 *)(lVar6 + lVar11) = 0;
            lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
            }
            lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
            if (lVar9 == 0) {
              uVar3 = FUN_0150b350(0);
            }
            else {
              plVar10 = (long *)(lVar9 + 0x48);
              (**(code **)(*plVar10 + 0x10))(plVar10);
              uVar3 = FUN_0150b350(lVar9);
              (**(code **)(*plVar10 + 0x18))(plVar10);
            }
            if (lVar6 != 0) {
              (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
            }
            iVar5 = (int)uVar4 + -1;
            uVar4 = 0;
            *(undefined2 *)(*(long *)(param_1 + 0x6d0) + lVar11 + 4) = uVar3;
          }
          uVar3 = FUN_00bcfb20(uVar4,iVar5,uVar2);
        }
        *(undefined2 *)(*(long *)(param_1 + 0x6d0) + lVar11 + 6) = uVar3;
        *(short *)(param_1 + 0x6da) = *(short *)(param_1 + 0x6da) + 1;
        FUN_00bca320(param_1);
        piVar1 = (int *)(*(long *)(param_1 + 0x6d0) + lVar11);
        if (*piVar1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 3;
        }
        FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),uVar4,*(undefined2 *)((long)piVar1 + 6),4);
        return 1;
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 8;
    } while (uVar7 < *(ushort *)(param_1 + 0x6d8));
  }
  return 0;
}


