/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00132dd0; name: FUN_00132dd0
 */


void FUN_00132dd0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  uint *puVar11;
  ulong uVar10;
  long lVar12;
  long lVar13;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  
  lVar6 = *(long *)(param_1 + 0xb0);
  uVar2 = *param_2;
  local_58 = (ulong)uVar2;
  uVar3 = param_2[1];
  local_50 = (ulong)uVar3;
  uVar4 = *(uint *)(lVar6 + local_58 * 0x10 + 8);
  puVar8 = (ulong *)(lVar6 + local_50 * 0x10);
  uVar5 = (uint)puVar8[1];
  if ((uVar5 & uVar4) == 0xffffffff) {
    uVar10 = *(ulong *)(lVar6 + local_58 * 0x10);
    if ((0xf < uVar10) && (uVar9 = *puVar8, 0xf < uVar9)) {
      uVar10 = uVar10 & 0xf;
      uVar9 = uVar9 & 0xf;
      if ((uint)uVar9 <= (uint)uVar10) {
        uVar9 = uVar10;
      }
      param_1 = param_1 + uVar9 * 0x10;
      local_48 = 0;
      if (*(uint *)(param_1 + 400) < (*(uint *)(param_1 + 0x194) & 0x7fffffff)) {
        puVar8 = (ulong *)(*(long *)(param_1 + 0x188) + (ulong)*(uint *)(param_1 + 400) * 0x18);
        puVar8[2] = 0;
        puVar8[1] = local_50;
        *puVar8 = local_58;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      }
      else {
        FUN_00134310((long *)(param_1 + 0x188),&local_58);
      }
    }
  }
  else {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      uVar1 = uVar2;
      uVar2 = uVar3;
    }
    uVar3 = uVar1 & 0xffff | uVar2 << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    lVar12 = param_1 + 0x210;
    if (uVar5 != 0xffffffff && uVar4 != 0xffffffff) {
      lVar12 = param_1 + 0x248;
    }
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    puVar11 = (uint *)(*(long *)(lVar12 + 0x18) +
                      (ulong)(*(int *)(lVar12 + 0x24) - 1U & (uVar3 ^ uVar3 >> 0x10)) * 4);
    while ((uVar10 = (ulong)*puVar11, uVar1 != *(uint *)(*(long *)(lVar12 + 8) + uVar10 * 0x10) ||
           (lVar13 = *(long *)(lVar12 + 8) + uVar10 * 0x10, uVar2 != *(uint *)(lVar13 + 4)))) {
      puVar11 = (uint *)(*(long *)(lVar12 + 0x10) + uVar10 * 4);
    }
    lVar12 = *(long *)(lVar13 + 8);
    uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
    if (*(uint *)(lVar12 + 0x18) != 0) {
      lVar13 = 0;
      while( true ) {
        uVar10 = uVar10 - 1;
        local_58 = (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + lVar13) & 0x7fffffff;
        uVar9 = *(ulong *)(lVar6 + local_58 * 0x10);
        if (0xf < uVar9) {
          local_50 = (ulong)*(uint *)(*(long *)(lVar12 + 0x30) + lVar13 + 4) & 0x7fffffff;
          uVar7 = *(ulong *)(lVar6 + local_50 * 0x10);
          if (0xf < uVar7) {
            uVar9 = uVar9 & 0xf;
            uVar7 = uVar7 & 0xf;
            if ((uint)uVar7 <= (uint)uVar9) {
              uVar7 = uVar9;
            }
            lVar6 = param_1 + uVar7 * 0x10;
            local_48 = 0;
            if (*(uint *)(lVar6 + 400) < (*(uint *)(lVar6 + 0x194) & 0x7fffffff)) {
              puVar8 = (ulong *)(*(long *)(lVar6 + 0x188) + (ulong)*(uint *)(lVar6 + 400) * 0x18);
              puVar8[2] = 0;
              puVar8[1] = local_50;
              *puVar8 = local_58;
              *(int *)(lVar6 + 400) = *(int *)(lVar6 + 400) + 1;
            }
            else {
              FUN_00134310((long *)(lVar6 + 0x188),&local_58);
            }
          }
        }
        if (uVar10 == 0) break;
        lVar6 = *(long *)(param_1 + 0xb0);
        lVar13 = lVar13 + 8;
      }
    }
    *(undefined1 *)(lVar12 + 0x40) = 1;
  }
  return;
}


