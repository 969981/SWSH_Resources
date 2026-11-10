/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1160; name: FUN_00de1160
 */


long FUN_00de1160(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  
  if (param_1 <= 0.0) {
    return param_2;
  }
  if (*(float *)(param_2 + 0x80) <= param_1) {
    return param_2;
  }
  lVar5 = *(long *)(param_2 + 8);
  uVar6 = *(long *)(param_2 + 0x10) - lVar5;
  lVar4 = param_2 + 8;
  uVar7 = (long)uVar6 >> 5;
  if ((int)(uVar6 >> 5) < 2) {
    uVar6 = 0;
    if (uVar7 == 1) {
      return lVar4;
    }
  }
  else {
    uVar8 = 0;
    pfVar9 = (float *)(lVar5 + 0x10);
    do {
      if (uVar7 <= uVar8) goto LAB_00de1334;
      if (param_1 <= *pfVar9) break;
      param_1 = param_1 - *pfVar9;
      uVar8 = uVar8 + 1;
      pfVar9 = pfVar9 + 8;
    } while ((long)uVar8 < (long)(uVar6 * 0x8000000 + -0x100000000) >> 0x20);
    uVar6 = (ulong)(int)uVar8;
    if (uVar7 - 1 <= uVar6) {
      return lVar4;
    }
  }
  if ((uVar6 < uVar7) && (uVar8 = uVar6 + 1, uVar8 < uVar7)) {
    lVar1 = lVar5 + uVar6 * 0x20;
    if (param_1 <= 0.0) {
      return lVar4;
    }
    lVar2 = lVar5 + uVar8 * 0x20;
    if (*(float *)(lVar1 + 0x10) <= param_1) {
      return lVar4;
    }
    if (*(float *)(lVar1 + 0x10) <= 0.0) {
      iVar3 = *(int *)(param_2 + 0x84);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x84);
    }
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        return lVar4;
      }
      return lVar4;
    }
    if ((int)uVar6 < 1) {
      lVar4 = param_2 + 0x40;
    }
    else {
      if (uVar7 <= uVar6 - 1) goto LAB_00de1334;
      lVar4 = lVar5 + (uVar6 - 1) * 0x20;
    }
    if (uVar7 - 1 <= uVar8) {
      lVar5 = FUN_00dd65a0(lVar4,lVar1,lVar2,param_2 + 0x60);
      return lVar5;
    }
    uVar6 = (ulong)((int)uVar6 + 2);
    if (uVar6 < uVar7) {
      lVar5 = FUN_00dd65a0(lVar4,lVar1,lVar2,lVar5 + uVar6 * 0x20);
      return lVar5;
    }
  }
LAB_00de1334:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}


