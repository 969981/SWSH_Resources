/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053a1b0; name: FUN_0053a1b0
 */


undefined8
FUN_0053a1b0(long param_1,uint param_2,ulong param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  if (param_2 == 0) {
    uVar2 = 0;
    goto LAB_0053a290;
  }
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 == 0) {
LAB_0053a208:
    local_28 = 0;
LAB_0053a20c:
    uVar2 = FUN_00527cc0(param_1,param_3,param_4,param_5,param_6,0,&local_28);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
    lVar3 = param_1 + 0x110;
    do {
      bVar1 = *(ulong *)(lVar4 + 0x20) < param_3;
      if (!bVar1) {
        lVar3 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar1 * 8);
    } while (lVar4 != 0);
    if ((lVar3 == param_1 + 0x110) || (param_3 < *(ulong *)(lVar3 + 0x20))) goto LAB_0053a208;
    local_28 = *(long *)(lVar3 + 0x28);
    if (local_28 == 0) goto LAB_0053a20c;
  }
  if (5 < param_2) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0x98e1);
      FUN_00517ae0(
                  "CPostEffect::SetGlareModulatorSource(): Argument eGlareModulatorSource is invalid.\n"
                  );
    }
    return 0xfffffffa;
  }
  *(uint *)(param_1 + 0xc0) = param_2;
  if (*(char *)(param_1 + 0x1cc) != '\0') {
    *(long *)(param_1 + 0xb8) = local_28;
    return 0;
  }
  if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX WARNING: ",0x98f9);
    FUN_00517ae0(
                "CPostEffect::SetGlareModulatorSource(): Initialize() with PFXINIT_GLAREMODULATOR flag for glare modulation.\n"
                );
  }
  uVar2 = 1;
LAB_0053a290:
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return uVar2;
}


