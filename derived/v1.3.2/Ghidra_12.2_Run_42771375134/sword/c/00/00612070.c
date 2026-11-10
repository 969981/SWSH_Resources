/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00612070; name: FUN_00612070
 */


int FUN_00612070(uint *param_1,int param_2,int param_3,undefined8 param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int local_64;
  int local_58;
  int local_54;
  
  if (param_3 < 0) {
    bVar4 = param_3 != -0x15;
    if (bVar4) {
      param_3 = 0;
    }
    iVar10 = 0;
    param_2 = param_3 + param_2;
    uVar7 = 3;
    if (bVar4) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
    iVar10 = param_3;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = 0xffffffff;
  }
  uVar2 = *param_1;
  lVar6 = *(long *)(param_1 + 2);
  uVar11 = 0;
  if (uVar2 != 0) {
    piVar8 = (int *)(lVar6 + 4);
    do {
      if ((piVar8[-1] == param_2) && (*piVar8 == iVar10)) goto LAB_00612154;
      uVar11 = uVar11 + 1;
      piVar8 = piVar8 + 3;
    } while (uVar11 < uVar2);
  }
  uVar3 = param_1[1];
  uVar1 = uVar2 + 1;
  if ((uVar3 <= uVar1) && (local_64 = 0, uVar3 < uVar1)) {
    uVar2 = uVar2 + 8 & 0xfffffff8;
    lVar6 = FUN_006029c0(param_4,0xc,uVar3,uVar2,lVar6,&local_64);
    *(long *)(param_1 + 2) = lVar6;
    if (local_64 != 0) {
      return local_64;
    }
    param_1[1] = uVar2;
  }
  lVar6 = lVar6 + (ulong)uVar1 * 0xc;
  *param_1 = uVar1;
  *(int *)(lVar6 + -0xc) = param_2;
  *(int *)(lVar6 + -8) = iVar10;
  *(undefined4 *)(lVar6 + -4) = uVar7;
LAB_00612154:
  if (param_1[4] == 0) {
    if (param_1[5] == 0) {
      local_58 = 0;
      puVar9 = (uint *)FUN_006029c0(param_4,0x18,0,8,*(undefined8 *)(param_1 + 6),&local_58);
      *(uint **)(param_1 + 6) = puVar9;
      if (local_58 != 0) {
        return local_58;
      }
      param_1[5] = 8;
    }
    else {
      puVar9 = *(uint **)(param_1 + 6);
    }
    *puVar9 = 0;
    puVar9[4] = 0;
    param_1[4] = 1;
    uVar2 = *puVar9;
  }
  else {
    puVar9 = (uint *)(*(long *)(param_1 + 6) + (ulong)param_1[4] * 0x18 + -0x18);
    uVar2 = *puVar9;
  }
  if (uVar2 <= uVar11) {
    local_54 = 0;
    uVar2 = puVar9[1] + 7 >> 3;
    uVar1 = uVar11 + 8 >> 3;
    if (uVar2 < uVar1) {
      uVar1 = uVar1 + 7 & 0x3ffffff8;
      uVar5 = FUN_006029c0(param_4,1,uVar2,uVar1,*(undefined8 *)(puVar9 + 2),&local_54);
      *(undefined8 *)(puVar9 + 2) = uVar5;
      if (local_54 != 0) {
        return local_54;
      }
      puVar9[1] = uVar1 << 3;
    }
    *puVar9 = uVar11 + 1;
  }
  *(byte *)(*(long *)(puVar9 + 2) + (ulong)(uVar11 >> 3)) =
       *(byte *)(*(long *)(puVar9 + 2) + (ulong)(uVar11 >> 3)) | (byte)(0x80 >> (ulong)(uVar11 & 7))
  ;
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar11;
  }
  return 0;
}


