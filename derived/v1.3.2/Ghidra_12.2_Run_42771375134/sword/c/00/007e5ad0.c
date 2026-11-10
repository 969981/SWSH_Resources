/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e5ad0; name: FUN_007e5ad0
 */


void FUN_007e5ad0(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  string *psVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  
  puVar2 = PTR_DAT_02716d10;
  psVar4 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar2) {
    FUN_009b58d0();
    iVar8 = *(int *)((long)param_1 + 0x2c);
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar4);
    iVar8 = *(int *)((long)param_1 + 0x2c);
  }
  if (0 < iVar8) {
    lVar9 = 0;
    lVar3 = 0;
    do {
      lVar6 = param_1[6];
      piVar7 = *(int **)(param_2 + 0x30);
      if (piVar7 == (int *)0x0) {
        iVar8 = *(int *)(param_2 + 0x2c);
LAB_007e5b94:
        FUN_00824290(param_2 + 0x20,iVar8 + 1);
        piVar7 = *(int **)(param_2 + 0x30);
        iVar8 = *piVar7;
LAB_007e5ba8:
        *piVar7 = iVar8 + 1;
        uVar5 = FUN_007f7ef0(0,*(undefined8 *)(param_2 + 0x20));
        iVar8 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar8 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar8 * 8 + 8) = uVar5;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x28);
        iVar8 = *piVar7;
        if (iVar8 <= iVar1) {
          if (iVar8 == *(int *)(param_2 + 0x2c)) goto LAB_007e5b94;
          goto LAB_007e5ba8;
        }
        *(int *)(param_2 + 0x28) = iVar1 + 1;
        uVar5 = *(undefined8 *)(piVar7 + (long)iVar1 * 2 + 2);
      }
      FUN_007e6410(lVar6 + lVar9,uVar5);
      lVar3 = lVar3 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar3 < *(int *)((long)param_1 + 0x2c));
  }
  lVar9 = param_1[4];
  lVar3 = FUN_0084fe30();
  if (lVar9 == lVar3) {
    return;
  }
  pvVar10 = *(void **)(param_2 + 0x38);
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
  if (pvVar10 == (void *)0x0) {
    pvVar10 = operator_new(0x58);
    FUN_008582a0();
    *(void **)(param_2 + 0x38) = pvVar10;
  }
  FUN_00858c50(pvVar10,param_1[4]);
  return;
}


