/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00528fb0; name: FUN_00528fb0
 */


long FUN_00528fb0(long param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  
  cVar1 = *(char *)(param_1 + 0xbce);
  if (((*(char *)(param_1 + 0x96c) != '\0') && (*(int *)(param_1 + 0x970) != 0)) && (cVar1 != '\0'))
  {
    iVar5 = *(int *)(param_1 + 0x518);
    if (iVar5 - 2U < 0x28) {
      uVar3 = (uint)(0xc0000c4011 >> ((ulong)(iVar5 - 2U) & 0x3f)) & 1;
    }
    else {
      uVar3 = 0;
    }
    if (((0x39 < iVar5 - 10U) || ((1L << ((ulong)(iVar5 - 10) & 0x3f) & 0x200100001000001U) == 0))
       && ((iVar5 != 0x1a && uVar3 == 0 &&
           ((*(int *)PTR_DAT_02713970 != 0 && (*(int *)PTR_DAT_027139c0 != 0)))))) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x41ce)
      ;
      FUN_00517ae0(
                  "CPostEffect::GetEffectiveFeedbackEnable(): The feedback result will be clamped because the feedback buffer format is not floating point. Use PFXOETA_IMMEDIATE_IMPLICIT oetf or set floating point format to PFX_INITPARAM::m_eFeedbackFormat.\n"
                  );
    }
  }
  if (cVar1 != '\0') {
    if (*(long *)(param_1 + 0x260) == 0) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x260) + (long)*(int *)(param_1 + 0x298) * 8);
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4) & 1;
    if (*(int *)(lVar2 + 0x30) <= (int)uVar4) {
      return 0;
    }
    goto LAB_0052906c;
  }
  iVar5 = *(int *)(param_1 + 0xf30);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0xf2c);
    iVar6 = *(int *)(param_1 + 0x66c);
    lVar2 = *(long *)(param_1 + 400);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x66c);
    lVar2 = *(long *)(param_1 + 400);
  }
  if (iVar6 == -1) {
    iVar6 = *(int *)(lVar2 + 0x90);
  }
  lVar7 = *(long *)(*(long *)(lVar2 + 0x38) + (long)iVar6 * 8);
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x1168) + 0x4c));
  if (*(int *)(lVar7 + 0x54) == (int)(*(float *)(param_1 + 0x5a4) * fVar8)) {
    if ((iVar5 < 1) ||
       (fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x1168) + 0x50)),
       *(int *)(lVar7 + 0x58) == (int)(*(float *)(param_1 + 0x5a8) * fVar8))) goto LAB_00529190;
LAB_00529160:
    if ((*(char *)(param_1 + 0x96c) != '\0') || (*(int *)PTR_DAT_02713a80 != 0)) {
      if ((*(char *)(param_1 + 0x96c) == '\0') || (*(int *)(param_1 + 0x970) == 0))
      goto LAB_00529190;
      goto LAB_005291a4;
    }
  }
  else {
    if (0 < iVar5) goto LAB_00529160;
LAB_00529190:
    if (*(char *)(param_1 + 0x10d6) == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x96c) != '\0') {
LAB_005291a4:
      if (*(int *)(param_1 + 0x970) != 0) {
        iVar5 = *(int *)(param_1 + 0x670);
        if (iVar5 == -1) {
          iVar5 = *(int *)(lVar2 + 0x90);
        }
        if (iVar5 < *(int *)(lVar2 + 0x30)) {
          return *(long *)(*(long *)(lVar2 + 0x38) + (long)iVar5 * 8);
        }
        return 0;
      }
    }
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    return *(long *)(param_1 + 0x278);
  }
  if (*(long *)(param_1 + 0x260) == 0) {
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x260) + (long)*(int *)(param_1 + 0x298) * 8);
  uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0x290) + (long)*(int *)(param_1 + 0x298) * 4) & 1;
  if (*(int *)(lVar2 + 0x30) <= (int)uVar4) {
    return 0;
  }
LAB_0052906c:
  return *(long *)(*(long *)(lVar2 + 0x38) + uVar4 * 8);
}


