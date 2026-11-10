/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3770; name: FUN_004e3770
 */


void FUN_004e3770(float param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  
  fVar11 = *(float *)(param_2 + 0x68) + param_1 * *(float *)(param_2 + 0x58);
  iVar5 = *(int *)(param_2 + 100);
  *(float *)(param_2 + 0x68) = fVar11 - (float)(int)fVar11;
  *(int *)(param_2 + 100) = iVar5 + (int)fVar11;
  do {
    if ((*(long *)(param_2 + 0x38) == 0) && ((*(byte *)(param_2 + 0x6c) >> 2 & 1) == 0)) {
      return;
    }
    if (*(uint *)(param_2 + 100) <= *(uint *)(param_2 + 0x60)) {
      return;
    }
    if ((((*(long *)(param_2 + 0x38) != 0) && ((*(byte *)(param_2 + 0x6c) >> 1 & 1) != 0)) &&
        (bVar6 = *(byte *)(param_2 + 0x44), (bVar6 & 0xf0) != 0xf0)) && ((char)bVar6 < '\0')) {
      uVar10 = (uint)bVar6;
      uVar1 = uVar10 & 0xf0;
      if (0xef < uVar10) {
        uVar1 = uVar10;
      }
      bVar6 = *(byte *)(param_2 + 0x45);
      bVar7 = *(byte *)(param_2 + 0x46);
      puVar8 = (uint *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
      if (puVar8 != (uint *)0x0) {
        uVar2 = 0;
        if (uVar1 != 0x90 || bVar7 != 0) {
          uVar2 = (uint)bVar7 << 0x18;
        }
        uVar3 = 0x80;
        if (uVar1 != 0x90 || bVar7 != 0) {
          uVar3 = uVar1;
        }
        *puVar8 = (uVar10 & 0xf) << 8 | (uint)bVar6 << 0x10 | uVar2 | uVar3;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[1] = (uint)(*(float *)(param_2 + 0x54) *
                          (float)(uint)(*(int *)(param_2 + 0x60) - iVar5));
        puVar8[2] = *(uint *)(param_2 + 0x5c);
        puVar8[4] = 0;
        puVar8[5] = 0;
        plVar4 = param_3 + 1;
        if (param_3[1] != 0) {
          plVar4 = (long *)(*param_3 + 0x10);
        }
        *plVar4 = (long)puVar8;
        *param_3 = (long)puVar8;
      }
    }
    uVar9 = FUN_004e31a0(param_2);
  } while ((uVar9 & 1) != 0);
  return;
}


