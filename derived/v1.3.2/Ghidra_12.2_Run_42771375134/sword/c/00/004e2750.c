/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2750; name: FUN_004e2750
 */


void FUN_004e2750(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  double dVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 local_80;
  char *local_78;
  
  if ((*(byte *)(param_1 + 0x17c) & 1) == 0) {
    FUN_004c2cc0(param_1);
    iVar1 = *(int *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0x174) = 0;
    puVar6 = PTR_DAT_02712b38;
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_DAT_02712b38);
    uVar2 = *(uint *)(param_1 + 0x178);
    if ((float)(param_3 - iVar1) / (fVar9 * DAT_01d4c6ac) != 0.0) {
      bVar3 = *(byte *)(param_1 + 0x17c);
      local_80 = 0;
      local_78 = (char *)0x0;
      FUN_004e3770(param_1 + 0xf0,&local_80);
      puVar5 = PTR_DAT_02712a90;
      dVar4 = DAT_01cd5288;
      if (local_78 != (char *)0x0) {
        pcVar8 = local_78;
        if (uVar2 == 0xffffffff) {
          do {
            local_78 = *(char **)(pcVar8 + 0x10);
            if (local_78 == (char *)0x0) {
              local_80 = 0;
              local_78 = (char *)0x0;
            }
            dVar10 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
            dVar10 = (double)*(float *)(pcVar8 + 4) * dVar4 * dVar10;
            dVar11 = 0.5;
            if (dVar10 <= 0.0) {
              dVar11 = -0.5;
            }
            if (((*pcVar8 != -0x70) || ((bVar3 >> 1 & 1) == 0)) || (pcVar8[3] == '\0')) {
              FUN_004c2b30(param_1,param_2,pcVar8,iVar1 + (int)(dVar11 + dVar10),
                           *(undefined4 *)(pcVar8 + 8),*(byte *)(param_1 + 0x17c) >> 1 & 1,
                           *(byte *)(param_1 + 0x17c) >> 2 & 1);
              *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfb;
            }
            FUN_00404870(*(undefined4 *)puVar5,pcVar8);
            pcVar8 = local_78;
          } while (local_78 != (char *)0x0);
        }
        else {
          do {
            local_78 = *(char **)(pcVar8 + 0x10);
            if (local_78 == (char *)0x0) {
              local_80 = 0;
              local_78 = (char *)0x0;
            }
            dVar10 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
            dVar10 = (double)*(float *)(pcVar8 + 4) * dVar4 * dVar10;
            dVar11 = 0.5;
            if (dVar10 <= 0.0) {
              dVar11 = -0.5;
            }
            uVar7 = (uint)(dVar11 + dVar10);
            if ((*pcVar8 != -0x70) || (uVar7 < uVar2 || pcVar8[3] == '\0')) {
              FUN_004c2b30(param_1,param_2,pcVar8,iVar1 + uVar7,*(undefined4 *)(pcVar8 + 8),
                           *(byte *)(param_1 + 0x17c) >> 1 & 1,*(byte *)(param_1 + 0x17c) >> 2 & 1);
              *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfb;
            }
            FUN_00404870(*(undefined4 *)puVar5,pcVar8);
            pcVar8 = local_78;
          } while (local_78 != (char *)0x0);
        }
      }
    }
    if (uVar2 != 0xffffffff) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      if ((*(byte *)(param_1 + 0x17c) >> 1 & 1) == 0) {
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 2;
        FUN_004c2ce0(param_1);
      }
    }
    FUN_004c2ce0(param_1);
  }
  return;
}


