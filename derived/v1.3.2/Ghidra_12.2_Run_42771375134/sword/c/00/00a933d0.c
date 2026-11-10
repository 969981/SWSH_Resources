/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a933d0; name: FUN_00a933d0
 */


void FUN_00a933d0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  float extraout_var;
  undefined1 auVar6 [16];
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  fVar11 = param_4._12_4_;
  fVar9 = param_4._8_4_;
  fVar14 = param_4._4_4_;
  fVar7 = param_4._0_4_;
  uVar13 = param_3._8_8_;
  uVar12 = param_3._0_8_;
  uVar10 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  lVar3 = *(long *)(param_5 + 0x730);
  if (lVar3 != 0) {
    if (*(uint *)(param_5 + 0x72c) == 0xff) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_5 + 8) + (ulong)*(uint *)(param_5 + 0x72c) * 8 + 0x580);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        lVar3 = *(long *)(param_5 + 0x730);
      }
    }
    lVar1 = *(long *)(lVar3 + 0x120);
    iVar2 = *(int *)(*(long *)(lVar3 + 0x128) + 0x40);
    FUN_00723030(lVar1,iVar2);
    lVar3 = *(long *)(lVar1 + 0x1b8);
    auVar6 = FUN_00ac7650(lVar4);
    lVar3 = lVar3 + (long)iVar2 * 0x130;
    uVar16 = *(undefined8 *)(lVar3 + 0xd0);
    fVar15 = (float)uVar16;
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    fVar18 = (float)*(undefined8 *)(lVar3 + 0xd8);
    fVar7 = fVar7 + auVar6._0_4_ * fVar15 + (float)uVar8 * fVar17 + (float)uVar12 * fVar18;
    fVar9 = fVar9 + auVar6._8_4_ * fVar15 + (float)uVar10 * fVar17 + (float)uVar13 * fVar18;
    fVar11 = fVar11 + auVar6._12_4_ * fVar15 + (float)((ulong)uVar10 >> 0x20) * fVar17 +
                      (float)((ulong)uVar13 >> 0x20) * fVar18;
    if (*(char *)(param_5 + 0x750) != '\0') {
      fVar7 = (float)FUN_00ac5a80(lVar4);
      FUN_00ac5a80(lVar4);
      fVar11 = 0.0;
      fVar9 = extraout_var;
    }
    *(ulong *)(param_5 + 0x98) =
         CONCAT44(fVar11 + (float)((ulong)*(undefined8 *)(param_5 + 0x748) >> 0x20),
                  fVar9 + (float)*(undefined8 *)(param_5 + 0x748));
    *(ulong *)(param_5 + 0x90) =
         CONCAT44(fVar14 + auVar6._4_4_ * fVar15 + (float)((ulong)uVar8 >> 0x20) * fVar17 +
                           (float)((ulong)uVar12 >> 0x20) * fVar18 +
                  (float)((ulong)*(undefined8 *)(param_5 + 0x740) >> 0x20),
                  fVar7 + (float)*(undefined8 *)(param_5 + 0x740));
    FUN_00a91240(param_5);
    lVar3 = *(long *)(*(long *)(param_5 + 8) + 0x540);
    if (lVar3 == 0) {
      FUN_015f6150(0,0);
      *(undefined8 *)(param_5 + 0x730) = 0;
    }
    else {
      plVar5 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      FUN_015f6150(lVar3,0);
      (**(code **)(*plVar5 + 0x18))(plVar5);
      *(undefined8 *)(param_5 + 0x730) = 0;
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a9350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      return;
    }
  }
  return;
}


