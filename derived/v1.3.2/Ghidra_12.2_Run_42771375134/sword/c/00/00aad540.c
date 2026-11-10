/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aad540; name: FUN_00aad540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aad540(long param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = FUN_00aad1c0();
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x4c8) = 0x3f8000003f800000;
    return;
  }
  fVar3 = (float)FUN_00773540(lVar1,1);
  fVar3 = fVar3 * DAT_01d4c4d4;
  *(float *)(param_1 + 0x4c8) = fVar3;
  fVar3 = (fVar3 + -1.0) * 0.5 + 1.0;
  *(float *)(param_1 + 0x4cc) = fVar3;
  if (*(int *)(param_1 + 0x4ec) == 0) goto LAB_00aad6c0;
  fVar4 = (float)FUN_00773540(lVar1,1);
  fVar5 = (float)FUN_00773540(lVar1,0);
  fVar3 = 1.0;
  if (*(long *)(param_1 + 0x4f8) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x4f8) + 0x270);
    if (lVar1 == 0) {
      fVar3 = _DAT_00000070;
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      fVar3 = *(float *)(lVar1 + 0x70);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  fVar5 = fVar5 * (fVar4 / fVar5) * fVar3;
  fVar3 = DAT_01d4bd60;
  fVar4 = DAT_01d4bc08;
  if (DAT_01d4bf64 <= fVar5) {
    if (DAT_01d4c17c <= fVar5) {
      if (DAT_01d4c614 <= fVar5) {
        fVar6 = 1.0;
        goto LAB_00aad6a0;
      }
      fVar3 = 1.0;
      fVar6 = DAT_01d4bb18;
      fVar7 = DAT_01d4c618;
    }
    else {
      fVar6 = DAT_01d4c258;
      fVar7 = DAT_01d4be3c;
      fVar4 = 1.0;
    }
    fVar6 = (fVar5 + fVar7) / fVar6;
  }
  else {
    fVar6 = 0.0;
  }
LAB_00aad6a0:
  fVar5 = (float)(**(code **)(PTR_PTR_02718e90 + 0x40))(fVar6);
  fVar3 = fVar3 + (fVar4 - fVar3) * fVar5;
  *(float *)(param_1 + 0x4cc) = fVar3;
LAB_00aad6c0:
  *(float *)(param_1 + 0x4c8) = fVar3;
  return;
}


