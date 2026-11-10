/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040bee0; name: FUN_0040bee0
 */


void FUN_0040bee0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined8 local_158;
  long local_78;
  long *local_38;
  
  *(int *)(*(long *)(param_1 + 0x10) + 0x48) = *(int *)(*(long *)(param_1 + 0x10) + 0x48) + 1;
  lVar2 = *(long *)(param_1 + 0x10);
  if (((*(byte *)(lVar2 + 0x5a) >> 4 & 1) != 0) || ((*(byte *)(lVar2 + 0x5a) & 3) == 0))
  goto LAB_0040c0f8;
  FUN_00418860(&local_180,lVar2,0);
  if (local_78 == 0) {
    plVar3 = (long *)0x0;
    FUN_004188d0(&local_180);
  }
  else {
    plVar1 = (long *)FUN_004188e0(&local_180,&local_190);
    plVar3 = local_190;
    if (plVar1 != (long *)0x0) {
      plVar3 = plVar1;
    }
    FUN_004188d0(&local_180);
    if ((plVar3 != (long *)0x0) && (*(char *)(param_1 + 0x50) == '\0')) {
      pfVar5 = (float *)(param_1 + 0x4c);
      fVar9 = *pfVar5;
      if (*(char *)(param_1 + 0x51) != '\0') {
        FUN_00409670(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
      local_170 = 0;
      local_160 = 0xff;
      local_168 = 0xff;
      local_158 = 0;
      local_180 = *(undefined8 *)(param_1 + 0x30);
      local_178 = *(undefined4 *)(param_1 + 0x2c);
      (**(code **)(*plVar3 + 0x280))(plVar3,pfVar5,&local_180);
      fVar6 = *(float *)(param_1 + 0x4c);
      fVar8 = 4.0;
      if (fVar6 <= 4.0) {
        fVar8 = fVar6;
      }
      fVar7 = 0.25;
      if (0.25 <= fVar6) {
        fVar7 = fVar8;
      }
      fVar7 = fVar7 * (float)param_2;
      fVar8 = 0.5;
      if (fVar7 <= 0.0) {
        fVar8 = -0.5;
      }
      fVar8 = (float)(uint)(int)(fVar8 + fVar7) / (float)param_2;
      *pfVar5 = fVar8;
      if (fVar8 - fVar9 != 0.0) {
        FUN_00409660(*(undefined8 *)(param_1 + 0x10),0x36);
      }
      *(undefined2 *)(param_1 + 0x50) = 1;
    }
  }
  fVar9 = *(float *)(param_1 + 0x4c) * (float)param_2;
  fVar8 = 0.5;
  if (fVar9 <= 0.0) {
    fVar8 = -0.5;
  }
  iVar4 = (int)(fVar8 + fVar9);
  *(int *)(param_1 + 0x48) = iVar4;
  local_190 = (long *)0x0;
  local_188 = 0;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x88))
            (*(long **)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),iVar4,&local_190);
  FUN_004e1750(*(undefined4 *)(param_1 + 0x4c),param_1 + 0x58,iVar4);
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + (ulong)*(uint *)(param_1 + 0x48);
  FUN_00409050(*(undefined8 *)(param_1 + 0x10));
  FUN_00418860(&local_180,*(undefined8 *)(param_1 + 0x10),0);
  if (local_78 == 0) {
    FUN_004188d0(&local_180);
    if (plVar3 != (long *)0x0) goto LAB_0040c0f0;
  }
  else {
    plVar1 = (long *)FUN_004188e0(&local_180,&local_38);
    if (plVar1 != (long *)0x0) {
      local_38 = plVar1;
    }
    FUN_004188d0(&local_180);
    if (local_38 != plVar3) {
LAB_0040c0f0:
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
  }
  lVar2 = *(long *)(param_1 + 0x10);
LAB_0040c0f8:
  FUN_00408b50(lVar2);
  return;
}


