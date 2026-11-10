/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfb240; name: FUN_00dfb240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfb240(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  byte *pbVar12;
  long *plVar13;
  long local_18;
  
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((*(char *)(param_2 + 0x68) == '\0') || (*(long *)(param_2 + 0x58) == 0)) ||
     (*(int *)(*(long *)(param_2 + 0x58) + 0x54) == 0)) {
    if ((*(long *)(param_2 + 0x50) != 0) && (*(int *)(*(long *)(param_2 + 0x50) + 0x54) != 0)) {
      FUN_00a658b0(&local_18);
      uVar7 = *(undefined8 *)(local_18 + 0x3c8);
      uVar9 = *(undefined8 *)(local_18 + 0x3d8);
      uVar10 = *(undefined8 *)(local_18 + 0x3d0);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(local_18 + 0x3e0);
      param_1[3] = uVar7;
      param_1[4] = uVar10;
      param_1[5] = uVar9;
      uVar7 = *(undefined8 *)(local_18 + 0x3b0);
      uVar9 = *(undefined8 *)(local_18 + 0x3c0);
      param_1[1] = *(undefined8 *)(local_18 + 0x3b8);
      param_1[2] = uVar9;
      *param_1 = uVar7;
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
      }
    }
    return;
  }
  lVar6 = *(long *)(param_2 + 0x58);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    puVar8 = PTR_DAT_0271ee58;
    pbVar12 = PTR_DAT_0271ee50;
    iVar11 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar6 + 0x58);
        if (((*pbVar12 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ee50), pbVar12 = PTR_DAT_0271ee50,
           puVar8 = PTR_DAT_0271ee58, iVar5 != 0)) {
          uVar7 = FUN_00a89c30();
          *(undefined8 *)PTR_DAT_0271ee58 = uVar7;
          __cxa_guard_release(PTR_DAT_0271ee50);
          pbVar12 = PTR_DAT_0271ee50;
          puVar8 = PTR_DAT_0271ee58;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00dfb438;
          if (plVar13 == (long *)puVar8) break;
          plVar13 = (long *)*plVar13;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar5;
        if (iVar5 == 0) goto LAB_00dfb438;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          uVar7 = *(undefined8 *)(lVar6 + 0x360);
          uVar9 = *(undefined8 *)(lVar6 + 0x370);
          param_1[1] = *(undefined8 *)(lVar6 + 0x368);
          param_1[2] = uVar9;
          *param_1 = uVar7;
          uVar7 = *(undefined8 *)(lVar6 + 0x378);
          uVar9 = *(undefined8 *)(lVar6 + 0x380);
          uVar10 = *(undefined8 *)(lVar6 + 0x388);
          *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar6 + 0x390);
          param_1[3] = uVar7;
          param_1[4] = uVar9;
          param_1[5] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00dfb434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          return;
        }
        break;
      }
      iVar11 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00dfb438:
  param_1[1] = _DAT_000003b8;
  uVar4 = _DAT_000003e0;
  uVar7 = _DAT_000003c8;
  param_1[5] = _DAT_000003d8;
  param_1[3] = uVar7;
  uVar7 = _DAT_000003b0;
  param_1[2] = _DAT_000003c0;
  *param_1 = uVar7;
  uVar7 = _DAT_000003d0;
  *(undefined4 *)(param_1 + 6) = uVar4;
  param_1[4] = uVar7;
  return;
}


