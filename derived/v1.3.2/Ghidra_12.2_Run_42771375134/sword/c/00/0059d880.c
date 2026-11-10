/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059d880; name: FUN_0059d880
 */


undefined8
FUN_0059d880(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_02713cf0;
  puVar3 = PTR_DAT_02713ca0;
  puVar2 = PTR_DAT_02713aa0;
  if (*PTR_DAT_02713aa0 != '\0') {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return 0xfffffffd;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: ",0x11ec);
    FUN_00517ae0(
                "CRenderTexture::BeginTiling(): CRenderTexture::BeginTiling() has already been called.\nYou have to call EndTiling() before next BeginTiling().\n"
                );
    return 0xfffffffd;
  }
  lVar7 = *(long *)PTR_DAT_02713ca0;
  lVar9 = *(long *)(PTR_DAT_02713ca0 + 8);
  uVar10 = (uint)(lVar7 != 0);
  *(uint *)PTR_DAT_02713cf0 = (uint)(lVar7 != 0);
  if (lVar9 == 0) {
    uVar8 = 0;
    lVar11 = *(long *)(puVar3 + 0x10);
    lVar9 = lVar7;
  }
  else {
    uVar8 = (uint)(lVar7 == 0);
    uVar10 = 1;
    if (lVar7 != 0) {
      uVar10 = 2;
      lVar9 = lVar7;
    }
    *(uint *)puVar4 = uVar10;
    lVar11 = *(long *)(puVar3 + 0x10);
  }
  lVar7 = lVar9;
  if (lVar11 != 0) {
    uVar10 = uVar10 + 1;
    lVar7 = lVar11;
    uVar5 = 2;
    if (lVar9 != 0) {
      lVar7 = lVar9;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    *(uint *)puVar4 = uVar10;
  }
  lVar9 = lVar7;
  if (*(long *)(puVar3 + 0x18) != 0) {
    uVar10 = uVar10 + 1;
    lVar9 = *(long *)(puVar3 + 0x18);
    uVar5 = 3;
    if (lVar7 != 0) {
      lVar9 = lVar7;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    *(uint *)puVar4 = uVar10;
  }
  lVar7 = lVar9;
  if (*(long *)(puVar3 + 0x20) != 0) {
    uVar10 = uVar10 + 1;
    lVar7 = *(long *)(puVar3 + 0x20);
    uVar5 = 4;
    if (lVar9 != 0) {
      lVar7 = lVar9;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    *(uint *)puVar4 = uVar10;
  }
  lVar9 = lVar7;
  if (*(long *)(puVar3 + 0x28) != 0) {
    uVar10 = uVar10 + 1;
    lVar9 = *(long *)(puVar3 + 0x28);
    uVar5 = 5;
    if (lVar7 != 0) {
      lVar9 = lVar7;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    *(uint *)puVar4 = uVar10;
  }
  lVar7 = lVar9;
  if (*(long *)(puVar3 + 0x30) != 0) {
    uVar10 = uVar10 + 1;
    lVar7 = *(long *)(puVar3 + 0x30);
    uVar5 = 6;
    if (lVar9 != 0) {
      lVar7 = lVar9;
      uVar5 = uVar8;
    }
    uVar8 = uVar5;
    *(uint *)puVar4 = uVar10;
  }
  lVar9 = *(long *)(puVar3 + 0x38);
  if (lVar9 == 0) {
    if (uVar10 == 0) {
      if (*(int *)PTR_DAT_02713970 == 0) {
        return 0xfffffffd;
      }
      if (*(int *)PTR_DAT_02713980 == 0) {
        return 0xfffffffd;
      }
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: ",0x1205
                  );
      FUN_00517ae0("CRenderTexture::BeginTiling(): Any render target textures not found.\n");
      return 0xfffffffd;
    }
    iVar1 = *(int *)(lVar7 + 0x2c);
    lVar9 = lVar7;
    uVar10 = uVar8;
  }
  else {
    *(uint *)puVar4 = uVar10 + 1;
    uVar10 = 7;
    if (lVar7 != 0) {
      lVar9 = lVar7;
      uVar10 = uVar8;
    }
    iVar1 = *(int *)(lVar9 + 0x2c);
  }
  if ((iVar1 < 0) ||
     (*(long *)(*(long *)(lVar9 + (long)*(int *)(lVar9 + 0xa0) * 8 + 0xe0) +
               (ulong)*(uint *)(PTR_DAT_02713ca8 + (ulong)uVar10 * 4) * 8) == 0)) {
    uVar6 = 0xfffffffd;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTexture.cpp(%d) : PPFX ERROR: ",0x1211
                  );
      FUN_00517ae0(
                  "CRenderTexture::BeginTiling(): Current render texture(s) must have tiling informations.\n"
                  );
      return 0xfffffffd;
    }
  }
  else {
    *(undefined4 *)PTR_DAT_02713cf8 = param_2;
    puVar3 = PTR_DAT_02713d00;
    if (param_3 == (undefined8 *)0x0) {
      *(undefined8 *)PTR_DAT_02713d00 = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
    }
    else {
      uVar6 = param_3[1];
      *(undefined8 *)PTR_DAT_02713d00 = *param_3;
      *(undefined8 *)(puVar3 + 8) = uVar6;
    }
    puVar3 = PTR_DAT_02713d10;
    uVar6 = 0;
    *(undefined4 *)PTR_DAT_02713d08 = param_1;
    *(undefined4 *)puVar3 = param_4;
    *puVar2 = 1;
  }
  return uVar6;
}


