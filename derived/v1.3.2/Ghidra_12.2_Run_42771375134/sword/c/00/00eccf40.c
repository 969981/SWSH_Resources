/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eccf40; name: FUN_00eccf40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eccf40(long param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) {
    lVar10 = *param_2;
    uVar4 = _DAT_00000438;
    if ((lVar10 != 0) && (*(int *)(lVar10 + 0x54) != 0)) {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar11 = *(int *)(lVar10 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar10 + 0x58);
          lVar8 = FUN_00ecd7b0();
          while( true ) {
            uVar4 = _DAT_00000438;
            if (plVar12 == (long *)0x0) goto joined_r0x00eccffc;
            if (plVar12 == (long *)lVar8) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar11) break;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar11 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          uVar4 = _DAT_00000438;
          if (cVar6 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 != 0) {
              uVar4 = *(uint *)(lVar10 + 1000);
              (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
            }
            goto joined_r0x00eccffc;
          }
          iVar11 = iVar5;
          if (iVar5 == 0) goto joined_r0x00eccffc;
        }
        ClearExclusiveLocal();
        iVar11 = iVar5;
      } while (iVar5 != 0);
    }
joined_r0x00eccffc:
    if ((uVar4 < 10) &&
       (*(float *)(param_3 + 4) < *(float *)(param_1 + (long)(int)uVar4 * 0x70 + 0xa0))) {
      param_1 = param_1 + (long)(int)uVar4 * 0x70;
      *(undefined8 *)(param_1 + 0x80) = *param_3;
      uVar9 = param_3[3];
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_3 + 4);
      *(undefined8 *)(param_1 + 0x90) = uVar3;
      *(undefined8 *)(param_1 + 0x98) = uVar9;
      *(undefined8 *)(param_1 + 0x88) = uVar2;
      lVar10 = *param_2;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(param_1 + 0x50);
      *(long *)(param_1 + 0x50) = lVar10;
      if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ecd09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
        return;
      }
    }
  }
  return;
}


