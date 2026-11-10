/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105a260; name: FUN_0105a260
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0105a260(long *param_1,long param_2,long param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *local_48;
  long local_40;
  long local_38;
  
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_02723a88 + 0x10;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_02715078;
  lVar7 = *(long *)(param_3 + 0x68);
  local_40 = param_3;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x54) == 0) {
LAB_0105a420:
      lVar11 = 0;
      goto joined_r0x0105a418;
    }
    piVar2 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02715080;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar7 + 0x58);
        if (((*puVar1 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar1), puVar8 = PTR_DAT_02715080, iVar5 != 0)) {
          uVar6 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar6;
          __cxa_guard_release(puVar1);
          puVar8 = PTR_DAT_02715080;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_0105a420;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar2;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_0105a3c0;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 == 0) goto LAB_0105a420;
        lVar11 = lVar7 + -0x50;
        (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
        goto joined_r0x0105a418;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_0105a3c0:
  lVar11 = 0;
joined_r0x0105a418:
  if ((param_4 == 1) ||
     ((param_4 == 2 &&
      ((lVar7 = FUN_00c754c0(lVar11,&local_38), lVar7 != 0 ||
       (lVar7 = FUN_0105e8d0(lVar11,&local_38), lVar7 != 0)))))) {
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if ((char)param_1[3] == '\0') {
    return;
  }
  local_48 = param_1;
  local_38 = FUN_0105ead0(&local_38,param_2,&local_40,&local_48);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_006d9640(lVar11,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


