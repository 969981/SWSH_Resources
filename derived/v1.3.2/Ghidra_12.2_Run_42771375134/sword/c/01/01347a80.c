/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01347a80; name: FUN_01347a80
 */


undefined8 FUN_01347a80(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long local_58;
  char *pcStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  FUN_013285c0(&local_38);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar12 == (undefined8 *)0x0)) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_02715078), iVar7 != 0)) {
      uVar10 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar10;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar13 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_02715080) {
          puVar13 = puVar12 + -10;
          goto LAB_01347af8;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      puVar13 = (undefined8 *)0x0;
    }
  }
LAB_01347af8:
  lVar9 = FUN_0130de40(&local_58,puVar13[1]);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  local_58 = lVar9;
  FUN_006d9640(puVar13,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  local_48 = 6;
  local_40 = 0;
  local_58 = 0x7c08eae870e235e0;
  pcStack_50 = "player";
  FUN_01312f40(DAT_01d4c404,lVar9,&local_58,PTR_DAT_02715088);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_58 = 0x7c08eae870e235e0;
  pcStack_50 = "player";
  local_48 = 6;
  local_40 = 0;
  FUN_01312fc0(lVar9,&local_58);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_58 = 0x7c08eae870e235e0;
  pcStack_50 = "player";
  local_48 = 6;
  local_40 = 0;
  FUN_01313060(lVar9,&local_58);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  FUN_01313040(DAT_01d4c18c,lVar9);
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar9 = *(long *)(param_1 + 0x68);
  if ((lVar9 == 0) || (*(int *)(lVar9 + 0x54) == 0)) {
    lVar14 = 0;
  }
  else {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar7 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        puVar12 = *(undefined8 **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar10 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        lVar14 = 0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01347cd0;
        while (puVar12 != (undefined8 *)puVar5) {
          puVar12 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            lVar14 = 0;
            goto LAB_01347cd0;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar7) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar14 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB_01347cd0;
        }
        lVar14 = 0;
        iVar7 = iVar6;
        if (iVar6 == 0) goto LAB_01347cd0;
      }
      ClearExclusiveLocal();
      lVar14 = 0;
      iVar7 = iVar6;
    } while (iVar6 != 0);
  }
LAB_01347cd0:
  lVar9 = FUN_00c754c0(lVar14,&local_58);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = lVar9;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return 1;
}


