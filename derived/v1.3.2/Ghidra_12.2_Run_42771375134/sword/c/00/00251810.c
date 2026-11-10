/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00251810; name: FUN_00251810
 */


uint FUN_00251810(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  uint local_8 [2];
  
  lVar9 = *(long *)(param_1 + 0x10);
  uVar4 = *(uint *)(lVar9 + 0x3c);
  uVar2 = param_2 % 3;
  uVar7 = 0;
  uVar10 = param_2 / 3;
  if (uVar4 != 0) {
    uVar7 = uVar10 / uVar4;
  }
  uVar6 = uVar10 - uVar7 * uVar4;
  if (uVar2 == 2) {
    if (uVar7 < *(int *)(lVar9 + 0x38) - 1U) {
      bVar8 = uVar10 != uVar7 * uVar4;
      if ((bool)bVar8) {
        local_8[0] = uVar10 * 2 - 1;
      }
      if (uVar4 - 1 <= uVar6) goto LAB_002518cc;
      local_8[bVar8] = uVar10 << 1;
LAB_002519d0:
      bVar8 = bVar8 + 1;
      goto LAB_002518cc;
    }
  }
  else {
    param_2 = param_2 / 3;
    if (uVar2 == 1) {
      if (uVar6 < uVar4 - 1 && uVar7 < *(int *)(lVar9 + 0x38) - 1U) {
        local_8[0] = param_2 << 1;
        local_8[1] = param_2 << 1 | 1;
        bVar8 = 2;
        goto LAB_002518cc;
      }
    }
    else if ((uVar2 == 0) && (uVar6 < uVar4 - 1)) {
      bVar8 = uVar4 <= param_2;
      if ((bool)bVar8) {
        local_8[0] = ((param_2 - uVar4) * 2 | 1) -
                     (uint)(*(byte *)(*(long *)(lVar9 + 0x50) + (ulong)(param_2 - uVar4) * 4 + 2) >>
                           7);
        iVar5 = *(int *)(lVar9 + 0x38);
      }
      else {
        iVar5 = *(int *)(lVar9 + 0x38);
      }
      if (iVar5 - 1U <= uVar7) goto LAB_002518cc;
      local_8[bVar8] =
           (uint)(*(byte *)(*(long *)(lVar9 + 0x50) + (ulong)uVar10 * 4 + 2) >> 7) | uVar10 << 1;
      goto LAB_002519d0;
    }
  }
  bVar8 = 0;
LAB_002518cc:
  lVar1 = *(long *)(lVar9 + 0x50) + (ulong)(local_8[0] >> 1) * 4;
  pbVar3 = (byte *)(lVar1 + 2);
  if ((local_8[0] & 1) != 0) {
    pbVar3 = (byte *)(lVar1 + 3);
  }
  if (bVar8 < 2) {
    if ((*pbVar3 & 0x7f) == 0x7f) {
      local_8[0] = 0xffffffff;
    }
  }
  else if ((*pbVar3 & 0x7f) == 0x7f) {
    lVar9 = *(long *)(lVar9 + 0x50) + (ulong)(local_8[1] >> 1) * 4;
    pbVar3 = (byte *)(lVar9 + 2);
    if ((local_8[1] & 1) != 0) {
      pbVar3 = (byte *)(lVar9 + 3);
    }
    if (((*pbVar3 ^ 0xff) & 0x7f) == 0) {
      local_8[1] = 0xffffffff;
    }
    return local_8[1];
  }
  return local_8[0];
}


