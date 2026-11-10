/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca8c80; name: FUN_00ca8c80
 */


void FUN_00ca8c80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_0271bef8;
  puVar1 = PTR_DAT_0271bee0;
  if (0 < *(int *)(param_1 + 8)) {
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x48) == 0) {
LAB_00ca8d50:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_0271bef8 + 8);
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x38) + 0x40);
    *puVar5 = *(undefined8 *)(*(long *)PTR_DAT_0271bee0 + 8);
    puVar5[1] = uVar7;
    if (1 < *(int *)(param_1 + 8)) {
      if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) < 2) goto LAB_00ca8d50;
      lVar3 = *(long *)puVar1;
      lVar4 = *(long *)puVar2;
      uVar7 = *(undefined8 *)(lVar4 + 0x28);
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
      *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar6 + 0x30) = uVar7;
      if (2 < *(int *)(param_1 + 8)) {
        if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) < 3) goto LAB_00ca8d50;
        uVar7 = *(undefined8 *)(lVar4 + 0x48);
        lVar6 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
        *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(lVar3 + 0x48);
        *(undefined8 *)(lVar6 + 0x58) = uVar7;
        if (3 < *(int *)(param_1 + 8)) {
          if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) < 4) goto LAB_00ca8d50;
          uVar7 = *(undefined8 *)(lVar4 + 0x68);
          lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x40);
          *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + 0x68);
          *(undefined8 *)(lVar4 + 0x80) = uVar7;
        }
      }
    }
  }
  return;
}


