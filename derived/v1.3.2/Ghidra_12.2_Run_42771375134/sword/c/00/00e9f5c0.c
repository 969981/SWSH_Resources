/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9f5c0; name: FUN_00e9f5c0
 */


void FUN_00e9f5c0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_30;
  float fStack_2c;
  undefined8 uStack_28;
  float local_18;
  float local_14;
  
  if ((*(char *)(param_1 + 0x630) != '\0') && (*(long *)(param_1 + 0x628) != 0)) {
    iVar3 = *(int *)(param_1 + 0x638);
    fVar5 = (float)iVar3;
    if (*(int *)(param_1 + 0x634) < iVar3) {
      iVar3 = *(int *)(param_1 + 0x634) + 1;
    }
    *(int *)(param_1 + 0x634) = iVar3;
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar4 = (ulong)(((float)iVar3 / fVar5) * DAT_01d4bef8 *
                   (fVar6 / *(float *)PTR_FloatDegree180_027194f0));
    local_30 = 0.0;
    local_18 = 1.0;
    local_14 = (*(float *)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10) +
                *(float *)((long)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10) +
                          8) * (float)((uint)uVar4 & 0xffffff) * DAT_01d4bc78 + 1.0) * 0.5;
    pfVar1 = &local_18;
    if (local_14 <= 1.0) {
      pfVar1 = &local_14;
    }
    pfVar2 = &local_30;
    if (0.0 <= local_14) {
      pfVar2 = pfVar1;
    }
    local_14 = *pfVar2;
    uVar4 = FUN_00e9f720(*(float *)(param_1 + 0x63c) +
                         (*(float *)(param_1 + 0x640) - *(float *)(param_1 + 0x63c)) * local_14,
                         param_1,&local_30);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(ulong *)(param_1 + 0xb8) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) +
                    (float)((ulong)uStack_28 >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0xb8) + (float)uStack_28);
      *(ulong *)(param_1 + 0xb0) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x20) + fStack_2c,
                    (float)*(undefined8 *)(param_1 + 0xb0) + local_30);
      if (*(int *)(param_1 + 0x638) <= *(int *)(param_1 + 0x634)) {
        *(undefined4 *)(param_1 + 0x634) = 0;
      }
    }
  }
  return;
}


