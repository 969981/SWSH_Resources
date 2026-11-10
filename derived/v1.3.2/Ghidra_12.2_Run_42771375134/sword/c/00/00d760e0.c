/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d760e0; name: FUN_00d760e0
 */


void FUN_00d760e0(long param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 2);
  plVar8 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)param_2;
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    if (*(long *)(lVar9 + 0x58) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x60))();
      *(undefined8 *)(lVar9 + 0x58) = uVar7;
    }
    piVar1 = (int *)(lVar9 + 0x54);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar6 = *(undefined8 *)(plVar8[0x35] + 0xf8);
  uVar7 = *(undefined8 *)(plVar8[0x35] + 0xf0);
  fVar10 = (float)uVar7 - *param_2;
  fVar11 = (float)((ulong)uVar7 >> 0x20) - param_2[1];
  fVar12 = (float)uVar6 - param_2[2];
  fVar13 = (float)((ulong)uVar6 >> 0x20) - param_2[3];
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  fVar13 = fVar13 * fVar13;
  auVar14._4_4_ = fVar11;
  auVar14._0_4_ = fVar10;
  auVar14._8_4_ = fVar12;
  auVar14._12_4_ = fVar13;
  auVar5._4_4_ = fVar11;
  auVar5._0_4_ = fVar10;
  auVar5._8_4_ = fVar12;
  auVar5._12_4_ = fVar13;
  auVar14 = NEON_ext(auVar14,auVar5,8,1);
  fVar10 = auVar14._0_4_ + fVar10;
  fVar11 = auVar14._4_4_ + fVar11;
  fVar12 = fVar10 + fVar11;
  fVar10 = fVar10 + fVar11;
  auVar15._0_8_ = CONCAT44(SQRT(fVar10),SQRT(fVar12));
  auVar15._8_4_ = SQRT(fVar12);
  auVar15._12_4_ = SQRT(fVar10);
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar1 = (int *)(lVar9 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))(plVar8);
      auVar15._8_8_ = auVar15._8_8_;
    }
  }
  *(float *)(param_1 + 0x180) = auVar15._0_4_ / 6.0;
  return;
}


