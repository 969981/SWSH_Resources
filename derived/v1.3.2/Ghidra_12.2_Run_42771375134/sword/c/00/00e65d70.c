/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65d70; name: FUN_00e65d70
 */


undefined1  [16] FUN_00e65d70(long param_1)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    return ZEXT816(0);
  }
  if (*(char *)(param_1 + 0x4f0) == '\0') {
    bVar2 = true;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x4f8) + *(float *)(param_1 + 0x4f4);
    *(float *)(param_1 + 0x4f4) = fVar3;
    if (1.0 <= fVar3) {
      fVar3 = *(float *)(param_1 + 0x500);
      *(float *)(param_1 + 0x490) = fVar3;
      if (fVar3 <= 0.0) {
        *(undefined1 *)(param_1 + 0x4b0) = 0;
      }
      bVar2 = 0.0 < fVar3;
      *(undefined4 *)(param_1 + 0x4f4) = 0x3f800000;
      *(undefined1 *)(param_1 + 0x4f0) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x504) == 1) {
        fVar3 = 1.0 - (1.0 - fVar3) * (1.0 - fVar3);
      }
      *(float *)(param_1 + 0x490) =
           *(float *)(param_1 + 0x4fc) +
           fVar3 * (*(float *)(param_1 + 0x500) - *(float *)(param_1 + 0x4fc));
      bVar2 = true;
    }
  }
  fVar3 = *(float *)(param_1 + 0x4e4) + *(float *)(param_1 + 0x4e0);
  *(float *)(param_1 + 0x4e0) = fVar3;
  if (((*(char *)(param_1 + 0x4a4) == '\0') &&
      (*(uint *)(param_1 + 0x4a0) <= *(uint *)(param_1 + 0x4e8))) && (bVar2)) {
    *(undefined4 *)(param_1 + 0x4ec) = 1;
  }
  fVar4 = 1.0;
  if (1.0 < fVar3) {
    iVar1 = *(int *)(param_1 + 0x4ec);
    if (iVar1 == 2) {
      *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x4d8);
      *(undefined1 *)(param_1 + 0x4b0) = 0;
      *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x4d0);
    }
    else {
      *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x4d8);
      *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x4d0);
      if (iVar1 == 1) {
        *(undefined8 *)(param_1 + 0x4d0) = 0;
        *(undefined8 *)(param_1 + 0x4d8) = 0;
        *(undefined4 *)(param_1 + 0x4ec) = 2;
      }
      else if (iVar1 == 0) {
        fVar8 = *(float *)(param_1 + 0x490);
        *(ulong *)(param_1 + 0x4d8) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20) * fVar8,
                      (float)*(undefined8 *)(param_1 + 0x488) * fVar8);
        *(ulong *)(param_1 + 0x4d0) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20) * fVar8,
                      (float)*(undefined8 *)(param_1 + 0x480) * fVar8);
      }
    }
    *(float *)(param_1 + 0x4e0) = fVar3 + -1.0;
    *(ulong *)(param_1 + 0x488) =
         CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x488) >> 0x20),
                  -(float)*(undefined8 *)(param_1 + 0x488));
    *(ulong *)(param_1 + 0x480) =
         CONCAT44(-(float)((ulong)*(undefined8 *)(param_1 + 0x480) >> 0x20),
                  -(float)*(undefined8 *)(param_1 + 0x480));
  }
  if (*(uint *)(param_1 + 0x4a8) != 0xffffffff) {
    fVar4 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x4a8) * 8))();
  }
  fVar3 = (float)*(undefined8 *)(param_1 + 0x4c0);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x4c0) >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x4c8);
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x4c8) >> 0x20);
  *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + 1;
  auVar5._0_4_ = fVar3 + ((float)*(undefined8 *)(param_1 + 0x4d0) - fVar3) * fVar4;
  auVar5._4_4_ = fVar8 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d0) >> 0x20) - fVar8) * fVar4;
  auVar5._8_4_ = fVar6 + ((float)*(undefined8 *)(param_1 + 0x4d8) - fVar6) * fVar4;
  auVar5._12_4_ = fVar7 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d8) >> 0x20) - fVar7) * fVar4
  ;
  return auVar5;
}


