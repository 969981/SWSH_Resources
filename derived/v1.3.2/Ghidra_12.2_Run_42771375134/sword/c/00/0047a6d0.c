/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047a6d0; name: FUN_0047a6d0
 */


undefined8 FUN_0047a6d0(long *param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  plVar8 = *(long **)(param_2 + 0x18);
  uVar1 = *(uint *)(plVar8 + 1);
  uVar6 = *(uint *)((long)plVar8 + 0xc);
  if (uVar6 <= uVar1) {
    uVar2 = FUN_0047a9a0(plVar8,2);
    if ((uVar2 & 1) == 0) goto LAB_0047a7f0;
    uVar6 = *(uint *)((long)plVar8 + 0xc);
  }
  if (uVar1 < uVar6) {
    uVar2 = (ulong)*(uint *)(plVar8 + 1);
    lVar10 = *plVar8;
    *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) + 1;
    if (lVar10 + uVar2 * 0x28 != 0) {
      FUN_0045b3c0();
      lVar9 = *(long *)(param_3 + 0x88);
      if (*(long *)(lVar9 + 0x18) == 0) {
        uVar3 = FUN_0045b630();
        lVar4 = *(long *)(lVar9 + 0x18);
        *(undefined8 *)(lVar9 + 0x18) = uVar3;
        if (lVar4 != 0) {
          FUN_0045b680();
        }
      }
      if (*(long *)(*(long *)(param_3 + 0x88) + 0x18) != 0) {
        plVar8 = (long *)(lVar10 + uVar2 * 0x28 + 0x20);
        *plVar8 = *param_4;
        if (param_1 != (long *)0x0) {
          (**(code **)(*param_1 + 0x10))(param_1);
        }
        lVar9 = lVar10 + uVar2 * 0x28;
        plVar5 = *(long **)(lVar9 + 0x18);
        *(long **)(lVar9 + 0x18) = param_1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))();
        }
        plVar5 = *(long **)(*(long *)(param_3 + 0x88) + 0x18);
        if ((int)plVar5[1] == 0) {
          lVar10 = lVar10 + uVar2 * 0x28;
          *(byte *)(lVar10 + 0x12) = *(byte *)(lVar10 + 0x12) & 0xfc;
          *(undefined2 *)(lVar10 + 0x10) = 1;
          lVar10 = *plVar8;
        }
        else {
          lVar9 = *plVar5;
          lVar10 = lVar10 + uVar2 * 0x28;
          *(undefined1 *)(lVar10 + 0x12) = *(undefined1 *)(lVar9 + 0x12);
          *(undefined2 *)(lVar10 + 0x10) = *(undefined2 *)(lVar9 + 0x10);
          lVar10 = *plVar8;
        }
        if ((lVar10 == 0) || (lVar9 = FUN_0047a090(param_1 + 0x19,lVar10), lVar9 == 0)) {
          return 1;
        }
        iVar7 = *(int *)(lVar9 + 8);
        if (iVar7 == 0) {
          FUN_0045b670(lVar10);
          iVar7 = *(int *)(lVar9 + 8);
        }
        *(int *)(lVar9 + 8) = iVar7 + 1;
        return 1;
      }
    }
  }
LAB_0047a7f0:
  lVar10 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (lVar10 != 0) {
    FUN_0045b680();
  }
  return 0x34;
}


