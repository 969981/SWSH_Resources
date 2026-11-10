/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a2c90; name: FUN_005a2c90
 */


void FUN_005a2c90(uint param_1,uint *param_2,uint param_3,long param_4,long param_5,uint param_6,
                 float *param_7,int param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  ulong uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = (param_3 ^ param_3 >> 0x1e) * 0x6c078965 + 1;
  param_2[0xf] = param_9;
  param_2[4] = 0;
  param_2[5] = 0;
  *(long *)(param_2 + 6) = param_4;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_2[2] = uVar1;
  param_2[3] = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  uVar1 = param_2[10];
  uVar6 = (ulong)uVar1;
  param_2[0x10] = param_1;
  fVar5 = DAT_01d4c18c;
  if (0 < (int)uVar1) {
    fVar9 = *param_7;
    if (fVar9 == DAT_01d4c18c) {
      fVar9 = *(float *)(*(long *)(param_2 + 8) + 0xc);
    }
    fVar9 = fVar9 + 0.0;
    param_2[0xb] = (uint)fVar9;
    if (1 < (int)uVar1) {
      if (param_7[1] == fVar5) {
        fVar9 = fVar9 + *(float *)(*(long *)(param_2 + 8) + 0x1c);
        param_2[0xc] = (uint)fVar9;
      }
      else {
        fVar9 = fVar9 + param_7[1];
        param_2[0xc] = (uint)fVar9;
      }
      if (2 < (int)uVar1) {
        if (param_7[2] == fVar5) {
          fVar9 = fVar9 + *(float *)(*(long *)(param_2 + 8) + 0x2c);
          param_2[0xd] = (uint)fVar9;
        }
        else {
          fVar9 = fVar9 + param_7[2];
          param_2[0xd] = (uint)fVar9;
        }
        if (3 < (int)uVar1) {
          fVar10 = param_7[3];
          if (fVar10 == fVar5) {
            fVar10 = *(float *)(*(long *)(param_2 + 8) + 0x3c);
          }
          fVar9 = fVar9 + fVar10;
          param_2[0xe] = (uint)fVar9;
          if (4 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("i >= 0 && i < ELMS","../include\\PPFX/ppfxTypes.h",0x4619,"v");
          }
        }
      }
    }
    if (0 < (int)uVar1) {
      pfVar7 = (float *)(param_2 + 0xb);
      do {
        uVar6 = uVar6 - 1;
        *pfVar7 = *pfVar7 / fVar9;
        pfVar7 = pfVar7 + 1;
      } while (uVar6 != 0);
    }
  }
  if (0 < (int)param_6) {
    uVar6 = (ulong)param_6;
    do {
      FUN_005a2ed0(param_2,param_5);
      param_5 = param_5 + 0x74;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar1 = param_3 * 0x1f + 1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  iVar4 = param_8 - param_6;
  if (iVar4 <= param_8) {
    param_8 = iVar4;
  }
  iVar8 = 0;
  if (-1 < iVar4) {
    iVar8 = param_8;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  if (0 < iVar8) {
    do {
      FUN_005a2ed0(param_2,0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(uint *)(param_4 + 0x1b00) = param_2[4];
  return;
}


