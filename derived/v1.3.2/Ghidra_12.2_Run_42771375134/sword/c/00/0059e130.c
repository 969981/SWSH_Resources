/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059e130; name: FUN_0059e130
 */


undefined8 FUN_0059e130(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar8 = PTR_DAT_02713ca8;
  puVar7 = PTR_DAT_02713ca0;
  puVar6 = PTR_DAT_02713aa0;
  if (*PTR_DAT_02713aa0 == '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffd;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: ",0x1341);
    FUN_00517ae0(
                "CRenderTexture::EndTiling(): CRenderTexture::BeginTiling() was never called.\nEndTiling() must be called after BeginTiling().\n"
                );
    return 0xfffffffd;
  }
  lVar3 = *(long *)PTR_DAT_02713ca0;
  lVar4 = *(long *)(PTR_DAT_02713ca0 + 8);
  lVar2 = lVar4;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  uVar1 = (uint)(lVar3 == 0 && lVar4 != 0);
  if (lVar4 != 0) {
    lVar3 = lVar2;
  }
  lVar2 = *(long *)(PTR_DAT_02713ca0 + 0x10);
  uVar5 = 2;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (*(long *)(PTR_DAT_02713ca0 + 0x10) != 0) {
    lVar3 = lVar2;
    uVar1 = uVar5;
  }
  lVar2 = *(long *)(PTR_DAT_02713ca0 + 0x18);
  uVar5 = 3;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (*(long *)(PTR_DAT_02713ca0 + 0x18) != 0) {
    uVar1 = uVar5;
    lVar3 = lVar2;
  }
  lVar2 = *(long *)(PTR_DAT_02713ca0 + 0x20);
  uVar5 = 4;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (*(long *)(PTR_DAT_02713ca0 + 0x20) != 0) {
    uVar1 = uVar5;
    lVar3 = lVar2;
  }
  lVar4 = *(long *)(PTR_DAT_02713ca0 + 0x30);
  lVar2 = *(long *)(PTR_DAT_02713ca0 + 0x28);
  uVar5 = 5;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (*(long *)(PTR_DAT_02713ca0 + 0x28) != 0) {
    uVar1 = uVar5;
    lVar3 = lVar2;
  }
  lVar2 = lVar4;
  uVar5 = 6;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (lVar4 != 0) {
    uVar1 = uVar5;
  }
  if (lVar4 != 0) {
    lVar3 = lVar2;
  }
  lVar2 = *(long *)(PTR_DAT_02713ca0 + 0x38);
  uVar5 = 7;
  if (lVar3 != 0) {
    lVar2 = lVar3;
    uVar5 = uVar1;
  }
  if (*(long *)(PTR_DAT_02713ca0 + 0x38) != 0) {
    uVar1 = uVar5;
    lVar3 = lVar2;
  }
  if ((*(int *)(lVar3 + 0x2c) < 0) ||
     (*(long *)(*(long *)(lVar3 + (long)*(int *)(lVar3 + 0xa0) * 8 + 0xe0) +
               (ulong)*(uint *)(PTR_DAT_02713ca8 + (ulong)uVar1 * 4) * 8) == 0)) {
    uVar9 = 0xfffffffd;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: ",0x135f
                  );
      FUN_00517ae0(
                  "CRenderTexture::EndTiling(): Current render texture(s) must have tiling informations.\n"
                  );
      return 0xfffffffd;
    }
  }
  else {
    *(undefined8 *)(PTR_DAT_02713ca0 + 0x30) = 0;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    uVar9 = 0;
    *(undefined8 *)(puVar7 + 0x20) = 0;
    *(undefined8 *)(puVar7 + 0x28) = 0;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined8 *)(puVar7 + 0x18) = 0;
    *(undefined8 *)puVar7 = 0;
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined8 *)(puVar8 + 0x10) = 0;
    *(undefined8 *)(puVar8 + 0x18) = 0;
    *(undefined8 *)PTR_DAT_02713a70 = 0;
    *puVar6 = 0;
    *(undefined8 *)puVar8 = 0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined4 *)PTR_DAT_02713cf8 = 0;
  }
  return uVar9;
}


