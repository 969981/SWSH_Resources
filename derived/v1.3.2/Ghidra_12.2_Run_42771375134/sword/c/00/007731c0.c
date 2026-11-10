/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007731c0; name: FUN_007731c0
 */


void FUN_007731c0(long param_1,byte param_2)

{
  int *piVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  
  bVar3 = param_2 & 1;
  if (*(byte *)(param_1 + 0x1f0) == (param_2 & 1)) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x68);
  *(byte *)(param_1 + 0x1f0) = param_2 & 1;
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      pbVar8 = PTR_DAT_02715078;
      puVar10 = PTR_DAT_02715080;
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*pbVar8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(pbVar8), pbVar8 = PTR_DAT_02715078,
             puVar10 = PTR_DAT_02715080, iVar6 != 0)) {
            uVar7 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar7;
            __cxa_guard_release(PTR_DAT_02715078);
            pbVar8 = PTR_DAT_02715078;
            puVar10 = PTR_DAT_02715080;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_007732e0;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar6;
          if (iVar6 == 0) goto LAB_007732e0;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar2 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          bVar3 = *(byte *)(param_1 + 0x1f0);
          goto joined_r0x00773370;
        }
        iVar11 = iVar6;
      } while (iVar6 != 0);
    }
LAB_007732e0:
    bVar3 = *(byte *)(param_1 + 0x1f0);
  }
  lVar2 = 0;
joined_r0x00773370:
  if (bVar3 == 0) {
    *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(param_1 + 0x220);
    *(undefined1 *)(lVar2 + 0xc0) = 1;
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(param_1 + 0x230);
    *(undefined1 *)(lVar2 + 0xc0) = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(lVar2 + 0xa8);
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(lVar2 + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00773358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


