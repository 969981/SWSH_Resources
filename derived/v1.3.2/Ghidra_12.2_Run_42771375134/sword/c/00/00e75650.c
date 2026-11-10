/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e75650; name: FUN_00e75650
 */


undefined1  [16] FUN_00e75650(undefined1 param_1 [16],long param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  ulong uVar7;
  undefined2 uVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  
  uVar15 = param_1._8_8_;
  uVar14 = param_1._0_8_;
  lVar9 = *(long *)(param_2 + 0x88);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        uVar7 = FUN_00e75e30(*(undefined8 *)(lVar9 + 0x58));
        if ((uVar7 & 1) == 0) goto LAB_00e75774;
        iVar3 = *piVar1;
        if (iVar3 != iVar10) break;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            uVar2 = *(uint *)(lVar9 + 0x358);
            fVar13 = param_1._0_4_;
            if (uVar2 < 2) {
              if (*(char *)(param_2 + 0x9c) == '\0') {
                fVar11 = *(float *)(lVar9 + 0x3e0);
                uVar7 = (ulong)(uint)fVar11;
                fVar6 = fVar13;
                if (fVar11 <= fVar13) {
                  fVar6 = fVar11;
                }
                uVar15 = 0;
                uVar14 = (ulong)(uint)fVar6;
                if ((fVar13 < fVar11) || (uVar2 != 1)) goto LAB_00e75750;
                uVar8 = 0x101;
              }
              else {
                uVar7 = 0;
                uVar14 = uVar14 & 0xffffffff;
                if (fVar13 <= 0.0) {
                  uVar14 = 0;
                }
                uVar15 = 0;
                if ((0.0 < fVar13) || (uVar8 = 1, uVar2 != 1)) goto LAB_00e75750;
              }
              *(undefined2 *)(param_2 + 0x9e) = uVar8;
              uVar15 = 0;
              uVar14 = uVar7;
            }
            else if (uVar2 == 2) {
              if (*(char *)(param_2 + 0x9c) == '\0') {
                uVar14 = uVar14 & 0xffffffff;
                uVar15 = 0;
                if (*(float *)(lVar9 + 0x3e0) <= fVar13) {
                  uVar14 = (ulong)(uint)(fVar13 - *(float *)(lVar9 + 0x3e0));
                  uVar15 = 0;
                }
              }
              else if (fVar13 <= 0.0) {
                uVar14 = (ulong)(uint)(*(float *)(lVar9 + 0x3e0) + fVar13);
                uVar15 = 0;
              }
            }
LAB_00e75750:
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            auVar12._8_8_ = uVar15;
            auVar12._0_8_ = uVar14;
            return auVar12;
          }
          goto LAB_00e75774;
        }
        iVar10 = iVar3;
        if (iVar3 == 0) goto LAB_00e75774;
      }
      ClearExclusiveLocal();
      iVar10 = iVar3;
    } while (iVar3 != 0);
  }
LAB_00e75774:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


