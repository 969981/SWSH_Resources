/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042feb0; name: FUN_0042feb0
 */


undefined8 FUN_0042feb0(ulong param_1,float *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0xffffffffffffffdf < param_1) {
    return 2;
  }
  if ((~(uint)param_2[6] & 0x7f800000) == 0) {
    return 0x1f;
  }
  if ((~(uint)param_2[7] & 0x7f800000) == 0) {
    return 0x1f;
  }
  if ((~(uint)param_2[8] & 0x7f800000) == 0) {
    return 0x1f;
  }
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  uVar6 = 0x1f;
  fVar11 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
  if ((DAT_01d4bee0 < fVar11) && (fVar11 < DAT_01d4bcb8)) {
    fVar11 = param_2[3];
    fVar12 = param_2[4];
    fVar13 = param_2[5];
    fVar14 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
    uVar6 = 0x1f;
    if ((DAT_01d4bee0 < fVar14) && (fVar14 < DAT_01d4bcb8)) {
      fVar8 = fVar11 * fVar8 + fVar9 * fVar12 + fVar10 * fVar13;
      if (DAT_01d4bec4 <= fVar8 * fVar8) {
        uVar6 = 0x1f;
      }
      else {
        uVar5 = FUN_004358f0(0x1f);
        puVar4 = PTR_DAT_02712de0;
        lVar7 = FUN_004361b0(*(undefined8 *)PTR_DAT_02712de0,0xd,uVar5);
        *(ulong *)(lVar7 + 4) = param_1;
        memcpy((void *)(lVar7 + 0xc),param_2,0x24);
        piVar1 = (int *)(*(long *)puVar4 + 0x94);
        uVar6 = 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
  }
  return uVar6;
}


