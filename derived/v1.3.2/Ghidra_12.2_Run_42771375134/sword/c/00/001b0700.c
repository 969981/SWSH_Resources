/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b0700; name: FUN_001b0700
 */


void FUN_001b0700(long *param_1,float *param_2,float *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  float __x;
  float fVar6;
  float fVar7;
  float fVar8;
  float __x_00;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *param_1 = (long)param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  __x = *param_2 * *param_3;
  lVar4 = *(long *)(param_3 + 4);
  lVar1 = *(long *)(param_3 + 6);
  fVar6 = param_2[3] * *param_3;
  fVar8 = param_2[2] * param_3[2];
  __x_00 = param_2[5] * param_3[2];
  fVar7 = fVar6;
  if (0.0 <= *(float *)(lVar1 + 0x14)) {
    fVar7 = __x;
    __x = fVar6;
  }
  uVar5 = *(int *)(lVar4 + 0x38) - 1;
  fVar9 = (float)uVar5;
  fVar6 = fVar8;
  if (0.0 <= *(float *)(lVar1 + 0x18)) {
    fVar6 = __x_00;
  }
  if (fVar9 < fVar7) goto LAB_001b08d0;
  if (0.0 <= *(float *)(lVar1 + 0x18)) {
    __x_00 = fVar8;
  }
  if ((((float)(*(int *)(lVar4 + 0x3c) - 1) < __x_00) || (__x < 0.0)) || (fVar6 < 0.0))
  goto LAB_001b08d0;
  fVar8 = param_2[1];
  fVar10 = param_2[4];
  fVar11 = param_3[1];
  if (0.0 <= fVar7) {
    uVar3 = *(int *)(lVar4 + 0x38) - 2;
    if (fVar7 <= (float)uVar3) {
      fVar7 = floorf(fVar7);
      lVar4 = *(long *)(*param_1 + 0x10);
      uVar5 = *(int *)(lVar4 + 0x38) - 1;
      fVar9 = (float)uVar5;
      *(int *)((long)param_1 + 0xc) = (int)fVar7;
      goto joined_r0x001b0844;
    }
    *(uint *)((long)param_1 + 0xc) = uVar3;
    if (__x <= fVar9) goto LAB_001b0848;
LAB_001b0808:
    *(uint *)(param_1 + 2) = uVar5;
    iVar2 = *(int *)(lVar4 + 0x3c);
    if (__x_00 < 0.0) goto LAB_001b0818;
LAB_001b086c:
    uVar5 = iVar2 - 2;
    if (__x_00 <= (float)uVar5) {
      fVar7 = floorf(__x_00);
      uVar5 = (uint)fVar7;
      iVar2 = *(int *)(*(long *)(*param_1 + 0x10) + 0x3c);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
joined_r0x001b0844:
    if (fVar9 < __x) goto LAB_001b0808;
LAB_001b0848:
    fVar7 = ceilf(__x);
    lVar4 = *(long *)(*param_1 + 0x10);
    *(int *)(param_1 + 2) = (int)fVar7;
    iVar2 = *(int *)(lVar4 + 0x3c);
    if (0.0 <= __x_00) goto LAB_001b086c;
LAB_001b0818:
    uVar5 = 0;
  }
  uVar3 = iVar2 - 1;
  *(uint *)((long)param_1 + 0x14) = uVar5;
  if (fVar6 <= (float)uVar3) {
    fVar7 = ceilf(fVar6);
    uVar3 = (uint)fVar7;
  }
  *(uint *)(param_1 + 3) = uVar3;
  if ((*(int *)((long)param_1 + 0xc) != (int)param_1[2]) &&
     (*(uint *)((long)param_1 + 0x14) != uVar3)) {
    *(float *)((long)param_1 + 0x1c) = fVar8 * fVar11;
    *(float *)(param_1 + 4) = fVar10 * fVar11;
    *(bool *)((long)param_1 + 0x24) =
         ((*(uint *)(lVar1 + 0x18) ^ *(uint *)(lVar1 + 0x14)) & 0x80000000) !=
         (uint)(0.0 < *(float *)(*(long *)(*param_1 + 0x10) + 0x58));
    return;
  }
LAB_001b08d0:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


