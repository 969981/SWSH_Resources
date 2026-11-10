/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6270; name: FUN_004c6270
 */


undefined8 FUN_004c6270(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (((*(byte *)(param_1 + 0x60) & 1) != 0) && (iVar2 = FUN_004db4a0(param_1), iVar2 != 1)) {
    FUN_00468b10(param_1,1);
    return 2;
  }
  FUN_004c6440(param_1);
  puVar1 = PTR_DAT_02713500;
  if (*(long *)(PTR_DAT_02713500 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(long *)(puVar1 + 0x10) = param_1;
  }
  else {
    lVar7 = *(long *)(PTR_DAT_02713500 + 0x10);
    lVar8 = 0;
    do {
      lVar6 = lVar7;
      if ((*(long **)(lVar6 + 0x70) == (long *)0x0) ||
         (iVar2 = (**(code **)(**(long **)(lVar6 + 0x70) + 0xd8))(), iVar2 < 0)) {
        iVar2 = 0;
        plVar5 = *(long **)(lVar6 + 0x78);
      }
      else {
        iVar2 = (**(code **)(**(long **)(lVar6 + 0x70) + 0xd8))();
        plVar5 = *(long **)(lVar6 + 0x78);
      }
      if ((plVar5 != (long *)0x0) && (iVar3 = (**(code **)(*plVar5 + 0xd8))(), iVar2 <= iVar3)) {
        iVar2 = (**(code **)(**(long **)(lVar6 + 0x78) + 0xd8))();
      }
      if ((*(long **)(param_1 + 0x70) == (long *)0x0) ||
         (iVar3 = (**(code **)(**(long **)(param_1 + 0x70) + 0xd8))(), iVar3 < 0)) {
        iVar3 = 0;
        plVar5 = *(long **)(param_1 + 0x78);
      }
      else {
        iVar3 = (**(code **)(**(long **)(param_1 + 0x70) + 0xd8))();
        plVar5 = *(long **)(param_1 + 0x78);
      }
      if ((plVar5 != (long *)0x0) && (iVar4 = (**(code **)(*plVar5 + 0xd8))(), iVar3 <= iVar4)) {
        iVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 0xd8))();
      }
      lVar7 = lVar6;
      if (iVar3 <= iVar2) goto LAB_004c63b8;
      lVar7 = *(long *)(lVar6 + 0x68);
      lVar8 = lVar6;
    } while (lVar7 != 0);
    lVar6 = 0;
LAB_004c63b8:
    *(long *)(param_1 + 0x68) = lVar7;
    if (lVar8 == 0) {
      *(long *)(puVar1 + 0x10) = param_1;
    }
    else {
      *(long *)(lVar8 + 0x68) = param_1;
    }
    if (lVar6 != 0) goto LAB_004c63e8;
  }
  *(long *)(puVar1 + 8) = param_1;
LAB_004c63e8:
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return 1;
}


