/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef6fc0; name: FUN_00ef6fc0
 */


void FUN_00ef6fc0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  
  plVar10 = *(long **)(param_1 + 0x70);
  uVar5 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar6 = FUN_0150e0a0(lVar9);
  if ((uVar6 & 1) == 0) {
    pfVar7 = (float *)FUN_01020300(uVar5);
    fVar13 = *pfVar7;
  }
  else {
    pfVar7 = (float *)FUN_01020310(uVar5);
    fVar13 = *pfVar7;
  }
  if ((fVar13 == 0.0) && (pfVar7[1] == 0.0)) {
    (**(code **)(*plVar10 + 0x180))(*(undefined4 *)PTR_DAT_0271ecd0,plVar10,PTR_DAT_0271e870);
    lVar11 = *(long *)(param_1 + 0xa0);
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
      piVar1 = (int *)(lVar11 + 0x54);
      iVar12 = *(int *)(lVar11 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar11 + 0x58);
          lVar8 = FUN_00c781c0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ef7154;
            if (plVar10 == (long *)lVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x60);
            if (lVar11 != 0) {
              FUN_0069c580(lVar11 + -0x50,0);
              (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
              goto joined_r0x00ef714c;
            }
            goto LAB_00ef7154;
          }
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_00ef7154;
        }
        ClearExclusiveLocal();
        iVar12 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00ef7154:
    FUN_0069c580(0,0);
  }
  else {
    (**(code **)(*plVar10 + 0x180))(*(undefined4 *)PTR_DAT_0271ecc8,plVar10,PTR_DAT_0271e870);
  }
joined_r0x00ef714c:
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


