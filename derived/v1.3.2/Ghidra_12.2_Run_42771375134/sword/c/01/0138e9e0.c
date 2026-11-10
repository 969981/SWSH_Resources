/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0138e9e0; name: FUN_0138e9e0
 */


void FUN_0138e9e0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if ((param_1[0xd] == 0) ||
     (puVar9 = *(undefined8 **)(param_1[0xd] + 0x60), puVar9 == (undefined8 *)0x0)) {
    lVar6 = FUN_01394400(0,auStack_60);
  }
  else {
    puVar4 = (undefined8 *)(**(code **)*puVar9)(puVar9);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_02715078), iVar3 != 0)) {
      uVar8 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar8;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_02715080) {
          puVar5 = puVar9 + -10;
          goto LAB_0138ea68;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      puVar5 = (undefined8 *)0x0;
    }
LAB_0138ea68:
    lVar6 = FUN_01394400(puVar5,auStack_60);
  }
  if (lVar6 != 0) {
    uVar2 = *(uint *)((long)param_1 + 0x51c);
    lVar7 = FUN_01392ce0(param_1[0x8d],auStack_50);
    fVar12 = *(float *)(lVar7 + 0x114);
    lVar7 = FUN_01392f90(param_1[0x8d],auStack_48);
    fVar13 = *(float *)(lVar7 + 0x94);
    FUN_013879c0(param_1[0x8e],auStack_58);
    fVar10 = (float)FUN_013899a0();
    uVar1 = 0;
    if ((int)((fVar12 + fVar13 + fVar10) / 3.0) < 1) {
      uVar1 = uVar2;
    }
    lVar7 = FUN_01392ce0(param_1[0x8d],auStack_50);
    fVar12 = *(float *)(lVar7 + 0x114);
    lVar7 = FUN_01392f90(param_1[0x8d],auStack_48);
    fVar13 = *(float *)(lVar7 + 0x94);
    FUN_013879c0(param_1[0x8e],auStack_58);
    fVar10 = (float)FUN_013899a0();
    if (5 < (int)((fVar12 + fVar13 + fVar10) / 3.0)) {
      uVar1 = 1;
    }
    lVar7 = FUN_01392ce0(param_1[0x8d],auStack_50);
    fVar12 = *(float *)(lVar7 + 0x114);
    lVar7 = FUN_01392f90(param_1[0x8d],auStack_48);
    fVar13 = *(float *)(lVar7 + 0x94);
    FUN_013879c0(param_1[0x8e],auStack_58);
    fVar10 = (float)FUN_013899a0();
    uVar2 = 2;
    if ((int)((fVar12 + fVar13 + fVar10) / 3.0) < 0xb) {
      uVar2 = uVar1;
    }
    lVar7 = FUN_01392ce0(param_1[0x8d],auStack_50);
    fVar12 = *(float *)(lVar7 + 0x114);
    lVar7 = FUN_01392f90(param_1[0x8d],auStack_48);
    fVar13 = *(float *)(lVar7 + 0x94);
    FUN_013879c0(param_1[0x8e],auStack_58);
    fVar10 = (float)FUN_013899a0();
    uVar1 = 3;
    if ((int)((fVar12 + fVar13 + fVar10) / 3.0) < 0x15) {
      uVar1 = uVar2;
    }
    lVar7 = FUN_01392ce0(param_1[0x8d],auStack_50);
    fVar12 = *(float *)(lVar7 + 0x114);
    lVar7 = FUN_01392f90(param_1[0x8d],auStack_48);
    fVar13 = *(float *)(lVar7 + 0x94);
    FUN_013879c0(param_1[0x8e],auStack_58);
    fVar10 = (float)FUN_013899a0();
    uVar2 = 4;
    if ((int)((fVar12 + fVar13 + fVar10) / 3.0) < 0x1f) {
      uVar2 = uVar1;
    }
    if (*(uint *)((long)param_1 + 0x51c) < uVar2) {
      FUN_01395700(lVar6,uVar2);
      *(uint *)((long)param_1 + 0x51c) = uVar2;
    }
    fVar10 = (float)(**(code **)(*param_1 + 0xb8))(param_1);
    if (0.0 < fVar10) {
      uVar11 = (**(code **)(*param_1 + 0xb8))(param_1);
      *(undefined4 *)(lVar6 + 0x340) = uVar11;
      if (*(char *)(lVar6 + 0x33c) == '\0') {
        fVar10 = (float)(**(code **)(*param_1 + 0xb8))(param_1);
        if (DAT_01d4be10 < fVar10) {
          FUN_013952a0(lVar6);
        }
        if (*(char *)(lVar6 + 0x33c) == '\0') {
          return;
        }
      }
      fVar10 = (float)(**(code **)(*param_1 + 0xb8))(param_1);
      if (fVar10 < DAT_01d4be10) {
        FUN_013956f0(lVar6);
      }
    }
  }
  return;
}


