/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cae40; name: FUN_004cae40
 */


void FUN_004cae40(float param_1,long *param_2,long *param_3,float *param_4,long param_5,long param_6
                 ,undefined2 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  uint local_78;
  
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)(param_3 + 1);
  local_78 = uVar2 - (uVar2 >> 0xf & 1) & 0xff;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    uVar1 = uVar3 - (uVar3 >> 0xf & 1) & 0xff;
    if (uVar1 != 0) {
      uVar10 = 0;
      lVar11 = (ulong)((uVar3 & 0xff) + 3 & 0x1fc) * 4;
      lVar7 = param_5;
      lVar6 = param_6;
      do {
        lVar5 = *param_2;
        uVar4 = *(ushort *)(param_2 + 2);
        lVar9 = 0;
        uVar8 = (ulong)uVar1;
        do {
          fVar12 = *param_4 * *(float *)(lVar7 + lVar9);
          FUN_004cb940(fVar12,(param_4[1] * *(float *)(lVar6 + lVar9) - fVar12) * param_1,
                       lVar5 + uVar10 * uVar4 * 4,*param_3 + lVar9 * (ulong)*(ushort *)(param_3 + 2)
                       ,param_7);
          lVar9 = lVar9 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        uVar10 = uVar10 + 1;
        lVar6 = lVar6 + lVar11;
        lVar7 = lVar7 + lVar11;
      } while (uVar10 != local_78);
      uVar2 = *(uint *)(param_2 + 1);
    }
  }
  if (((uVar2 >> 0xf & 1) != 0) && ((*(uint *)(param_3 + 1) >> 0xf & 1) != 0)) {
    lVar6 = (ulong)((*(uint *)(param_3 + 1) & 0xff) - 1) * 4;
    lVar7 = (ulong)(local_78 * ((uVar3 & 0xff) + 3 & 0x1fc)) * 4;
    fVar12 = *param_4 * *(float *)(param_5 + lVar7 + lVar6);
    FUN_004cb940(fVar12,(param_4[1] * *(float *)(param_6 + lVar7 + lVar6) - fVar12) * param_1,
                 *param_2 + (ulong)((uVar2 & 0xff) - 1) * (ulong)*(ushort *)(param_2 + 2) * 4,
                 *param_3 + lVar6 * (ulong)*(ushort *)(param_3 + 2),param_7);
  }
  *(undefined2 *)((long)param_3 + 0x12) = param_7;
  return;
}


