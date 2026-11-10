/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2e20; name: FUN_014a2e20
 */


void FUN_014a2e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar5 = PTR_DAT_02715080;
  puVar4 = PTR_DAT_02715078;
  lVar13 = *(long *)(param_1 + 0x68);
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
    lVar11 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    iVar15 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        puVar10 = *(undefined8 **)(lVar13 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar7 = FUN_00a87090();
          *(undefined8 *)puVar5 = uVar7;
          __cxa_guard_release(puVar4);
        }
        lVar11 = 0;
        if (puVar10 == (undefined8 *)0x0) goto LAB_014a2ef8;
        while (puVar10 != (undefined8 *)puVar5) {
          puVar10 = (undefined8 *)*puVar10;
          if (puVar10 == (undefined8 *)0x0) {
            lVar11 = 0;
            goto LAB_014a2ef8;
          }
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar15) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar11 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_014a2ef8;
        }
        lVar11 = 0;
        iVar15 = iVar6;
        if (iVar6 == 0) goto LAB_014a2ef8;
      }
      ClearExclusiveLocal();
      lVar11 = 0;
      iVar15 = iVar6;
    } while (iVar6 != 0);
  }
LAB_014a2ef8:
  lVar13 = FUN_007959b0(lVar11,&local_80);
  lVar13 = *(long *)(lVar13 + 0x108);
  FUN_00717af0(param_1 + 200,
               (*(long *)(lVar13 + 0x298) - *(long *)(lVar13 + 0x290) >> 6) * -0x79435e50d79435e5);
  FUN_00717af0(param_1 + 0xf8,
               (*(long *)(lVar13 + 0x298) - *(long *)(lVar13 + 0x290) >> 6) * -0x79435e50d79435e5);
  uVar7 = FUN_014a3100(param_1 + 0x128,
                       (*(long *)(lVar13 + 0x298) - *(long *)(lVar13 + 0x290) >> 6) *
                       0xd79435e50d79436);
  local_70 = 0;
  local_68 = 0;
  local_80 = 0xcbf29ce484222645;
  puStack_78 = &DAT_01d38550;
  if (((*(float *)(*(long *)(param_1 + 0x270) + 0x7c) < 5.0) &&
      (uVar8 = FUN_014a2840(uVar7,param_3,&local_80), (uVar8 & 1) != 0)) &&
     (lVar9 = *(long *)(lVar13 + 0x290), *(long *)(lVar13 + 0x298) != lVar9)) {
    lVar12 = 0;
    uVar8 = 0;
    lVar16 = 0x398;
    do {
      if ((ulong)((*(long *)(param_1 + 0xd0) - *(long *)(param_1 + 200) >> 4) * -0xf0f0f0f0f0f0f0f)
          <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar14 = *(long *)(lVar9 + lVar16);
      FUN_014a3260(param_1,&local_80,*(long *)(lVar9 + lVar16 + -0x220) + 0x60,
                   *(long *)(param_1 + 200) + lVar12,param_2);
      if ((ulong)((*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 4) * -0xf0f0f0f0f0f0f0f
                 ) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_014a3260(param_1,&local_80,lVar14 + 0x60,*(long *)(param_1 + 0xf8) + lVar12,param_2);
      lVar9 = *(long *)(lVar13 + 0x290);
      uVar8 = uVar8 + 1;
      lVar16 = lVar16 + 0x4c0;
      lVar12 = lVar12 + 0x110;
    } while (uVar8 < (ulong)((*(long *)(lVar13 + 0x298) - lVar9 >> 6) * -0x79435e50d79435e5));
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


