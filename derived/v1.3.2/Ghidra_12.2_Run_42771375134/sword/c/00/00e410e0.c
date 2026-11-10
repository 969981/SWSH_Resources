/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e410e0; name: FUN_00e410e0
 */


void FUN_00e410e0(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_50 [16];
  
  FUN_00dbdb70();
  if ((((char)param_1[0x9d] == '\0') || (param_1[0x9c] == 0)) ||
     (*(int *)(param_1[0x9c] + 0x54) == 0)) {
    return;
  }
  if ((param_1[0x9c] != 0) &&
     (puVar6 = *(undefined8 **)(param_1[0x9c] + 0x60), puVar6 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    if (((*PTR_DAT_0271ed88 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar3 != 0)) {
      uVar5 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271ed90 = uVar5;
      __cxa_guard_release(PTR_DAT_0271ed88);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_0271ed90) {
        plVar4 = puVar6 + -10;
        goto LAB_00e41164;
      }
    }
  }
  plVar4 = (long *)0x0;
LAB_00e41164:
  if (*(char *)((long)param_1 + 0x644) != '\0') {
    FUN_00e417f0(param_1,plVar4);
  }
  plVar1 = plVar4 + 0x14;
  FUN_007101c0(plVar1);
  local_50 = FUN_00a92cd0(extraout_var,*(undefined4 *)((long)param_1 + 0x57c),extraout_var_00);
  auVar9 = FUN_0075e7d0(0x3f000000,plVar1,local_50);
  *(undefined1 (*) [16])(plVar4 + 0x14) = auVar9;
  *(undefined1 *)(plVar4 + 0x18) = 1;
  local_50 = auVar9;
  fVar7 = (float)(**(code **)(*plVar4 + 0x178))(0,plVar4,PTR_DAT_0271e870);
  if (fVar7 == *(float *)PTR_DAT_0271ecd0) {
    fVar7 = 1.0;
    if (*(float *)(param_1 + 0xb0) != 0.0) {
      fVar7 = *(float *)(param_1 + 0xb0);
    }
    (**(code **)(*plVar4 + 0x180))(fVar7,plVar4,PTR_DAT_0271e8b0);
  }
  param_1[0x17] = plVar4[0x17];
  param_1[0x16] = plVar4[0x16];
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x15] = plVar4[0x15];
  param_1[0x14] = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  puVar2 = PTR_DAT_0271e8a8;
  fVar8 = (float)(**(code **)(*param_1 + 0x178))(0,param_1,PTR_DAT_0271e8a8);
  fVar10 = *(float *)((long)param_1 + 0x57c) *
           (*(float *)PTR_FloatDegree180_027194f0 / *(float *)PTR_FloatPi_02715160);
  fVar12 = *(float *)PTR_DAT_0271f808;
  fVar7 = fVar12;
  if (fVar10 <= fVar12) {
    fVar7 = fVar10;
  }
  fVar11 = -fVar12;
  if (-fVar12 <= fVar10) {
    fVar11 = fVar7;
  }
  (**(code **)(*plVar4 + 0x180))(fVar8 + (-fVar11 - fVar8) * 0.5,plVar4,puVar2);
  return;
}


