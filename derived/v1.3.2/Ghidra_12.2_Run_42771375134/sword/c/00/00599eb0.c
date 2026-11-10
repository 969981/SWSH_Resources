/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00599eb0; name: FUN_00599eb0
 */


void FUN_00599eb0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar5 = (undefined8 *)param_1[0xf];
  *param_1 = (long)(PTR_DAT_02713cb0 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar5 + 1);
    *(int *)(puVar5 + 1) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar7 = *(undefined8 *)PTR_PTR_02713988;
      (**(code **)*puVar5)(puVar5);
      FUN_005b9b10(uVar7,puVar5);
    }
    param_1[0xf] = 0;
  }
  puVar2 = PTR_PTR_02713988;
  lVar3 = param_1[0xc];
  lVar4 = param_1[0xd];
  if (0 < (int)((ulong)(lVar4 - lVar3) >> 3)) {
    lVar8 = 0;
    do {
      lVar6 = *(long *)(lVar3 + lVar8 * 8);
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)puVar2;
        FUN_00551380(lVar6 + 8);
        FUN_005b9b10(uVar7,lVar6);
        *(undefined8 *)(param_1[0xc] + lVar8 * 8) = 0;
        lVar3 = param_1[0xc];
        lVar4 = param_1[0xd];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)((ulong)(lVar4 - lVar3) >> 3));
  }
  if (lVar3 != 0) {
    param_1[0xd] = lVar3;
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
  }
  FUN_005464f0(param_1);
  return;
}


