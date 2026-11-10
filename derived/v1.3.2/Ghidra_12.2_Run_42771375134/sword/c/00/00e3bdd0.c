/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3bdd0; name: FUN_00e3bdd0
 */


void FUN_00e3bdd0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0150e0a0(lVar6);
  if (((uVar4 & 1) == 0) && (*(char *)(param_1 + 0x469) == '\0')) {
    uVar4 = FUN_01020290(uVar3,0x20);
    if ((uVar4 & 1) == 0) goto LAB_00e3be34;
    iVar5 = *(int *)(param_1 + 0x464);
    if (iVar5 < 1) {
      iVar2 = *(int *)(param_1 + 0x4e8);
      iVar5 = *(int *)(param_1 + 0x460) + 1;
      *(int *)(param_1 + 0x460) = iVar5;
      if (iVar2 <= iVar5) {
        *(int *)(param_1 + 0x460) = iVar5 - iVar2;
        iVar5 = iVar5 - iVar2;
      }
      if (iVar2 < 2) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (float)iVar5 / (float)(iVar2 + -1);
      }
      *(undefined8 *)(param_1 + 0x438) = *(undefined8 *)(param_1 + 0x418);
      *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_1 + 0x410);
      fVar8 = (float)*(undefined8 *)(param_1 + 0x4b0);
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x4b0) >> 0x20);
      fVar10 = (float)*(undefined8 *)(param_1 + 0x4b8);
      fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x4b8) >> 0x20);
      *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x408);
      *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_1 + 0x400);
      iVar5 = *(int *)(param_1 + 0x4e0);
      *(float *)(param_1 + 0x440) =
           *(float *)(param_1 + 0x4a0) +
           fVar7 * (*(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x4a0));
      *(int *)(param_1 + 0x464) = iVar5;
      *(ulong *)(param_1 + 0x458) =
           CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d8) >> 0x20) - fVar11) *
                             fVar7,
                    fVar10 + ((float)*(undefined8 *)(param_1 + 0x4d8) - fVar10) * fVar7);
      *(ulong *)(param_1 + 0x450) =
           CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)(param_1 + 0x4d0) >> 0x20) - fVar9) *
                            fVar7,fVar8 + ((float)*(undefined8 *)(param_1 + 0x4d0) - fVar8) * fVar7)
      ;
      goto joined_r0x00e3be3c;
    }
  }
  else {
LAB_00e3be34:
    iVar5 = *(int *)(param_1 + 0x464);
joined_r0x00e3be3c:
    if (iVar5 < 1) goto LAB_00e3bf40;
  }
  uVar1 = iVar5 - 1U & ((int)(iVar5 - 1U) >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x464) = uVar1;
  if (*(int *)(param_1 + 0x4e0) < 1) {
    fVar7 = 0.0;
  }
  else if (*(uint *)(param_1 + 0x4e4) == 0xffffffff) {
    fVar7 = 1.0;
  }
  else {
    fVar7 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x4e4) * 8))
                             (1.0 - (float)(int)uVar1 / (float)*(int *)(param_1 + 0x4e0));
  }
  fVar9 = (float)*(undefined8 *)(param_1 + 0x430);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 0x438);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20);
  fVar8 = *(float *)(param_1 + 0x420) +
          fVar7 * (*(float *)(param_1 + 0x440) - *(float *)(param_1 + 0x420));
  *(float *)(param_1 + 0x400) = fVar8;
  *(ulong *)(param_1 + 0x418) =
       CONCAT44(fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 0x458) >> 0x20) - fVar12) * fVar7
                ,fVar11 + ((float)*(undefined8 *)(param_1 + 0x458) - fVar11) * fVar7);
  *(ulong *)(param_1 + 0x410) =
       CONCAT44(fVar10 + ((float)((ulong)*(undefined8 *)(param_1 + 0x450) >> 0x20) - fVar10) * fVar7
                ,fVar9 + ((float)*(undefined8 *)(param_1 + 0x450) - fVar9) * fVar7);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x410);
  *(ulong *)(param_1 + 0x3b8) = (ulong)(uint)fVar8;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
LAB_00e3bf40:
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3bf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


