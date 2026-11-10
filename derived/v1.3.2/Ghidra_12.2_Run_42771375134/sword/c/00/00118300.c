/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00118300; name: FUN_00118300
 */


void FUN_00118300(long param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_70;
  uint uStack_6c;
  int local_68;
  int iStack_64;
  
  uVar3 = *(uint *)(param_1 + 0x1e0);
  uVar10 = (ulong)uVar3;
  lVar6 = *(long *)(param_1 + 0x1e8);
  iStack_64 = 0;
  while( true ) {
    uVar11 = param_2 >> 0xb & 0x1fffff;
    local_70 = (uint)param_2;
    uVar8 = 1 << (ulong)(local_70 >> 6 & 0x1f);
    uVar4 = local_70 >> 6;
    if ((*(uint *)(lVar6 + uVar11 * 4) & uVar8) != 0) {
      bVar5 = *(int *)(*(long *)(param_1 + 0xf0) + (ulong)uVar4 * 4) != -1;
      uVar8 = *(uint *)(param_1 + 0x1e0);
      goto joined_r0x00118430;
    }
    if (uVar4 == ((uint)(param_3 >> 6) & 0x3ffffff)) break;
    uStack_6c = *(uint *)(param_1 + 0x1e0);
    local_68 = uStack_6c - 1;
    iVar1 = iStack_64 + 1;
    if (uStack_6c < (*(uint *)(param_1 + 0x1e4) & 0x7fffffff)) {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x1d8) + (ulong)uStack_6c * 0x10);
      puVar2[1] = CONCAT44(iStack_64,local_68);
      *puVar2 = CONCAT44(uStack_6c,local_70);
      *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
    }
    else {
      FUN_0011b640((long *)(param_1 + 0x1d8),&local_70);
    }
    *(undefined4 *)(*(long *)(param_1 + 0xf0) + (ulong)uVar4 * 4) = 0xffffffff;
    lVar6 = *(long *)(param_1 + 0x1e8);
    lVar9 = uVar11 * 4;
    *(uint *)(lVar6 + lVar9) = *(uint *)(lVar6 + lVar9) | uVar8;
    uVar8 = *(uint *)(*(long *)(param_1 + 0xe0) + (ulong)uVar4 * 4);
    param_2 = (ulong)uVar8;
    iStack_64 = iVar1;
    if (0xffffffbf < uVar8) {
      bVar5 = false;
      uVar8 = *(uint *)(param_1 + 0x1e0);
joined_r0x00118430:
      if (uVar3 < uVar8) {
        lVar9 = *(long *)(param_1 + 0xf0);
        puVar7 = (uint *)(*(long *)(param_1 + 0x1d8) + uVar10 * 0x10);
        uVar11 = uVar10;
        do {
          *(undefined4 *)(lVar9 + (ulong)(*puVar7 >> 6) * 4) = param_4;
          uVar8 = *(uint *)(param_1 + 0x1e0);
          uVar11 = uVar11 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar11 < uVar8);
      }
      if (!bVar5) {
        if (uVar3 < uVar8) {
          puVar7 = (uint *)(*(long *)(param_1 + 0x1d8) + uVar10 * 0x10);
          do {
            lVar9 = (ulong)(*puVar7 >> 0xb) * 4;
            *(uint *)(lVar6 + lVar9) =
                 *(uint *)(lVar6 + lVar9) & (1 << (ulong)(*puVar7 >> 6 & 0x1f) ^ 0xffffffffU);
            uVar10 = uVar10 + 1;
            puVar7 = puVar7 + 4;
          } while (uVar10 < *(uint *)(param_1 + 0x1e0));
        }
        *(uint *)(param_1 + 0x1e0) = uVar3;
      }
      return;
    }
  }
  bVar5 = true;
  uVar8 = *(uint *)(param_1 + 0x1e0);
  goto joined_r0x00118430;
}


