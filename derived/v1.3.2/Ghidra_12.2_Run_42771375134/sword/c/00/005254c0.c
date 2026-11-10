/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005254c0; name: FUN_005254c0
 */


undefined8
FUN_005254c0(float param_1,float param_2,long param_3,int param_4,long param_5,long param_6,
            int param_7)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  *(undefined1 *)(param_3 + 0x895) = 1;
  bVar3 = param_5 == 0;
  bVar4 = param_6 == 0;
  if (param_4 == 9) {
    if (bVar3 && bVar4) {
      param_4 = 3;
      if (*(char *)(param_3 + 0x548) != '\0') {
        param_4 = 8;
      }
    }
    else {
      puVar1 = (uint *)(param_5 + 0x38);
      if (param_5 == 0) {
        puVar1 = (uint *)(param_6 + 0x44);
      }
      param_4 = 3;
      if ((*puVar1 < 0x38) && ((1L << ((ulong)*puVar1 & 0x3f) & 0x80210000100000U) != 0)) {
        param_4 = 0;
      }
    }
  }
  if (param_7 == 5) {
    if (bVar3 && bVar4) {
      param_7 = 0;
      if (param_4 != 8) {
        param_7 = 2;
      }
      goto LAB_00525600;
    }
    puVar1 = (uint *)(param_5 + 0x38);
    if (param_5 == 0) {
      puVar1 = (uint *)(param_6 + 0x44);
    }
    iVar5 = 0;
    if ((1L << ((ulong)*puVar1 & 0x3f) & 0x80210000100000U) == 0) {
      iVar5 = 2;
    }
    param_7 = 2;
    if (*puVar1 < 0x38) {
      param_7 = iVar5;
    }
    cVar2 = *(char *)(param_3 + 0x594);
  }
  else {
    if (bVar3 && bVar4) goto LAB_00525600;
    cVar2 = *(char *)(param_3 + 0x594);
  }
  if (cVar2 == '\0') {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp(%d) : PPFX ERROR: ",0xa00d);
      FUN_00517ae0(
                  "CPostEffect::SetDepthFactorSource(): Initialize() with PFXINIT_DEPTHFACTORSOURCETEXTURE flag for user depth factor texture.\n"
                  );
    }
    return 0xfffffffc;
  }
LAB_00525600:
  *(int *)(param_3 + 0x58) = param_4;
  *(int *)(param_3 + 0x5c) = param_7;
  if (bVar3 && bVar4 || param_4 == 8) {
    param_5 = 0;
  }
  *(long *)(param_3 + 0x50) = param_5;
  if (bVar3 && bVar4 || param_4 == 8) {
    param_1 = 1.0;
    param_2 = 0.0;
  }
  *(float *)(param_3 + 0x60) = param_1;
  *(float *)(param_3 + 100) = param_2;
  *(float *)(param_3 + 0x68) = 1.0 / param_1;
  *(float *)(param_3 + 0x6c) = -param_2 / param_1;
  return 0;
}


