/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa3020; name: FUN_00fa3020
 */


bool FUN_00fa3020(long *param_1,long *param_2,int param_3,byte param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  long local_68;
  
  lVar10 = *param_1;
  if (lVar10 == 0) {
LAB_00fa30c4:
    lVar5 = 0;
    iVar12 = iRam00000000000008a4;
joined_r0x00fa3350:
    if (iVar12 != 0) goto LAB_00fa30cc;
LAB_00fa3274:
    if (param_3 < 1) {
      bVar8 = false;
      goto LAB_00fa3308;
    }
    bVar8 = false;
    lVar10 = 1;
    plVar9 = param_2 + 1;
    do {
      lVar7 = *plVar9;
      bVar8 = (bool)(bVar8 | lVar7 == *(long *)(lVar5 + 0x1a0));
      if (param_3 <= lVar10) break;
      lVar10 = lVar10 + 1;
      plVar9 = plVar9 + 2;
    } while (lVar7 != *(long *)(lVar5 + 0x1a0));
    if (bVar8) goto LAB_00fa30cc;
    bVar8 = false;
  }
  else {
    if (*(int *)(lVar10 + 0x54) != 0) {
      piVar1 = (int *)(lVar10 + 0x54);
      iVar12 = *(int *)(lVar10 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar10 + 0x58);
          lVar5 = FUN_0156b630();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00fa30c4;
            if (plVar9 == (long *)lVar5) break;
            plVar9 = (long *)*plVar9;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar12) break;
          cVar4 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar5 = 0;
            if (*(long *)(lVar10 + 0x60) != 0) {
              lVar5 = *(long *)(lVar10 + 0x60) + -0x50;
            }
            iVar12 = *(int *)(lVar5 + 0x8a4);
            goto joined_r0x00fa3350;
          }
          iVar12 = iVar3;
          if (iVar3 == 0) goto LAB_00fa30c4;
        }
        ClearExclusiveLocal();
        iVar12 = iVar3;
      } while (iVar3 != 0);
      goto LAB_00fa30c4;
    }
    lVar5 = 0;
    iVar12 = iRam00000000000008a4;
    if (iRam00000000000008a4 == 0) goto LAB_00fa3274;
LAB_00fa30cc:
    if ((param_4 & 1) == 0) {
      lVar10 = *(long *)PTR_DAT_027194d8;
      lVar7 = *param_1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      puVar2 = *(undefined8 **)(lVar10 + 0xb8);
      bVar8 = false;
      for (puVar11 = *(undefined8 **)(lVar10 + 0xb0); puVar11 != puVar2; puVar11 = puVar11 + 1) {
        while( true ) {
          plVar13 = (long *)*puVar11;
          plVar9 = plVar13 + 10;
          plVar9 = (long *)(**(code **)*plVar9)(plVar9);
          lVar10 = FUN_0156b630();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00fa3154;
            if (plVar9 == (long *)lVar10) break;
            plVar9 = (long *)*plVar9;
          }
          if (bVar8) break;
          (**(code **)(*plVar13 + 0x10))(&local_68);
          lVar10 = local_68;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          if (lVar7 == lVar10) {
            uVar6 = (**(code **)(*(long *)*puVar11 + 0x88))();
            if ((uVar6 & 1) == 0) {
              (**(code **)(*(long *)*puVar11 + 0x80))();
            }
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          puVar11 = puVar11 + 1;
          if (puVar11 == puVar2) goto LAB_00fa31e4;
        }
LAB_00fa3154:
      }
LAB_00fa31e4:
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
    }
    else {
      bVar8 = false;
    }
    if (((iVar12 == 0) && (bVar8 || (param_4 & 1) != 0)) && (0 < param_3)) {
      lVar10 = 0;
      do {
        if (((*param_2 != 0) && (*(int *)(*param_2 + 0x54) != 0)) &&
           (lVar7 = *param_2, lVar7 == *param_1)) {
          *param_2 = 0;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
          }
          param_2[1] = -0x340d631b7bddd9bb;
          if ((!bVar8 & param_4) != 0) {
            bVar8 = true;
          }
          break;
        }
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 2;
      } while (lVar10 < param_3);
    }
  }
  if (lVar5 == 0) {
    return bVar8;
  }
LAB_00fa3308:
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return bVar8;
}


