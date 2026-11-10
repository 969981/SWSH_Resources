/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ed7da0; name: FUN_00ed7da0
 */


void FUN_00ed7da0(long param_1)

{
  undefined1 auVar1 [16];
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_38;
  
  plVar6 = *(long **)(param_1 + 0x70);
  if ((((long *)plVar6[0x83] != (long *)plVar6[0x84]) && (lVar5 = *(long *)plVar6[0x83], lVar5 != 0)
      ) && (puVar7 = *(undefined8 **)(lVar5 + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_00c781c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar5) {
        puVar7 = puVar7 + -10;
        goto LAB_00ed7e0c;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_00ed7e0c:
  local_38 = FUN_0069d2b0(puVar7);
  iVar4 = *(int *)(param_1 + 0xe0);
  if (iVar4 == 2) {
LAB_00ed7ee8:
    uVar3 = FUN_006b94c0(&local_38);
    if ((uVar3 & 1) != 0) {
      return;
    }
    plVar2 = (long *)FUN_006b92e0(&local_38);
    if (*plVar2 == 0x305fb82128551508) {
      (**(code **)(*plVar6 + 400))(plVar6,PTR_DAT_0271ed28,*(undefined4 *)PTR_DAT_0271ed20);
      (**(code **)(*plVar6 + 0x1b0))(plVar6,PTR_DAT_0271ed30);
      return;
    }
    uVar3 = FUN_00e45920(plVar6);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 0) {
        return;
      }
      uVar3 = FUN_006b94c0(&local_38);
      if ((uVar3 & 1) != 0) {
        return;
      }
      uVar3 = FUN_00e45920(plVar6);
      if ((uVar3 & 1) == 0) {
        return;
      }
      (**(code **)(*plVar6 + 400))(plVar6,PTR_DAT_0271ed28,*(undefined4 *)PTR_DAT_0271ed20);
      (**(code **)(*plVar6 + 0x1b0))(plVar6,PTR_DAT_0271ed30);
      iVar4 = *(int *)(param_1 + 0xe0) + 1;
      goto LAB_00ed7f70;
    }
    uVar3 = FUN_006b94c0(&local_38);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x81) == '\x06') {
      fVar8 = (float)*(undefined8 *)(param_1 + 0xb0) - *(float *)(param_1 + 0x90);
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) - *(float *)(param_1 + 0x94);
      fVar10 = (float)*(undefined8 *)(param_1 + 0xb8) - *(float *)(param_1 + 0x98);
      fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) - *(float *)(param_1 + 0x9c);
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      auVar12._4_4_ = fVar9;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = fVar10;
      auVar12._12_4_ = fVar11;
      auVar1._4_4_ = fVar9;
      auVar1._0_4_ = fVar8;
      auVar1._8_4_ = fVar10;
      auVar1._12_4_ = fVar11;
      auVar12 = NEON_ext(auVar12,auVar1,8,1);
      if (auVar12._0_4_ + fVar8 + auVar12._4_4_ + fVar9 <= DAT_01d4c4d4) {
        return;
      }
    }
    uVar3 = FUN_00e45920(plVar6);
    if ((uVar3 & 1) == 0) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      goto LAB_00ed7ee8;
    }
  }
  iVar4 = -1;
LAB_00ed7f70:
  *(int *)(param_1 + 0xe0) = iVar4;
  return;
}


