/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ade0; name: FUN_0059ade0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0059ade0(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  puVar5 = PTR_DAT_02713a88;
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 0x34);
  }
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0x54);
  }
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x58);
  }
  if (param_4 < 0) {
    param_4 = *(int *)(param_1 + 0x5c);
  }
  if (param_5 < 0) {
    param_5 = *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x30) < param_4 + param_2) {
      return 0xfffffffc;
    }
  }
  else if (*(int *)(param_1 + 0x30) < param_4 + param_2) {
    return 0xfffffffc;
  }
  if (*(int *)(param_1 + 0x34) < param_5 + param_3) {
    return 0xfffffffc;
  }
  if (((((*(long *)PTR_DAT_02713ca0 == param_1) || (*(long *)(PTR_DAT_02713ca0 + 8) == param_1)) ||
       (*(long *)(PTR_DAT_02713ca0 + 0x10) == param_1)) ||
      ((*(long *)(PTR_DAT_02713ca0 + 0x18) == param_1 ||
       (*(long *)(PTR_DAT_02713ca0 + 0x20) == param_1)))) ||
     ((*(long *)(PTR_DAT_02713ca0 + 0x28) == param_1 ||
      ((*(long *)(PTR_DAT_02713ca0 + 0x30) == param_1 ||
       (*(long *)(PTR_DAT_02713ca0 + 0x38) == param_1)))))) {
    return 0xfffffffd;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    *(int *)(param_1 + 0x54) = param_2;
    *(int *)(param_1 + 0x58) = param_3;
    uVar7 = 1;
    *(int *)(param_1 + 0x5c) = param_4;
    *(int *)(param_1 + 0x60) = param_5;
  }
  else {
    uVar2 = *(uint *)(PTR_DAT_02713a88 + 0x10);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    uVar3 = uVar3 - uVar4 * uVar2;
    uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
    uVar2 = *(uint *)(*(long *)(param_1 + 0x68) + uVar6);
    if (uVar2 <= *(uint *)(param_1 + 0x54)) {
      uVar2 = *(uint *)(param_1 + 0x54);
    }
    *(uint *)(*(long *)(param_1 + 0x68) + uVar6) = uVar2;
    uVar2 = *(uint *)(puVar5 + 0x10);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    lVar1 = *(long *)(param_1 + 0x68) + (long)(int)(uVar3 - uVar4 * uVar2) * 0x10;
    uVar2 = *(uint *)(lVar1 + 4);
    if (uVar2 <= *(uint *)(param_1 + 0x58)) {
      uVar2 = *(uint *)(param_1 + 0x58);
    }
    *(uint *)(lVar1 + 4) = uVar2;
    uVar2 = *(uint *)(puVar5 + 0x10);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    lVar1 = *(long *)(param_1 + 0x68) + (long)(int)(uVar3 - uVar4 * uVar2) * 0x10;
    uVar2 = *(uint *)(lVar1 + 8);
    if (uVar2 <= *(uint *)(param_1 + 0x5c)) {
      uVar2 = *(uint *)(param_1 + 0x5c);
    }
    *(uint *)(lVar1 + 8) = uVar2;
    uVar2 = *(uint *)(puVar5 + 0x10);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + 0x28);
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = uVar3 / uVar2;
    }
    lVar1 = *(long *)(param_1 + 0x68) + (long)(int)(uVar3 - uVar4 * uVar2) * 0x10;
    uVar2 = *(uint *)(lVar1 + 0xc);
    if (uVar2 <= *(uint *)(param_1 + 0x60)) {
      uVar2 = *(uint *)(param_1 + 0x60);
    }
    *(uint *)(lVar1 + 0xc) = uVar2;
    *(int *)(param_1 + 0x54) = param_2;
    *(int *)(param_1 + 0x58) = param_3;
    *(int *)(param_1 + 0x5c) = param_4;
    *(int *)(param_1 + 0x60) = param_5;
    uVar7 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      if ((*PTR_DAT_02713cc8 == '\0') || ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
        fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x80) + 8));
        fVar8 = 1.0 / fVar8;
        *(float *)(param_1 + 0x88) = fVar8;
        fVar9 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x80) + 0xc));
        fVar9 = 1.0 / fVar9;
      }
      else {
        fVar9 = 1.0;
        *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
        fVar8 = 1.0;
      }
      *(float *)(param_1 + 0x8c) = fVar9;
      *(float *)(param_1 + 0x90) = fVar8 * (float)(uint)(*(int *)(param_1 + 0x9c) + param_4);
      *(float *)(param_1 + 0x94) = fVar9 * (float)(uint)(param_5 + *(int *)(param_1 + 0x9c));
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return uVar7;
}


