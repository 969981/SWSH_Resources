/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7d290; name: FUN_00e7d290
 */


long FUN_00e7d290(long *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,uint param_5,
                 long *param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  long *plVar16;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  for (puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0); puVar1 != puVar2;
      puVar1 = puVar1 + 1) {
    plVar14 = (long *)*puVar1;
    if ((plVar14 != (long *)0x0 && plVar14[0x34] == *param_2) &&
       (uVar7 = (**(code **)(*plVar14 + 0x88))(plVar14), (uVar7 & 1) == 0)) {
      (**(code **)(plVar14[9] + 0x10))();
      uStack_78 = param_3[1];
      local_80 = *param_3;
      if ((param_5 & 1) == 0) {
        local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) + (float)((ulong)plVar14[0x16] >> 0x20)
                            ,(float)local_80 + (float)plVar14[0x16]);
        uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) +
                             (float)((ulong)plVar14[0x17] >> 0x20),
                             (float)uStack_78 + (float)plVar14[0x17]);
        if (((*PTR_DAT_02715198 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02715198), puVar4 = PTR_DAT_027151a0, iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
          *(undefined1 **)(puVar4 + 8) = &DAT_01d38550;
          *(undefined8 *)(puVar4 + 0x10) = 0;
          *(undefined8 *)(puVar4 + 0x18) = 0;
          FUN_001001c0(PTR_LAB_027151a8,puVar4,&PTR_LOOP_025db000);
          __cxa_guard_release(PTR_DAT_02715198);
        }
        if (*param_6 != *(long *)PTR_DAT_027151a0) {
          lVar8 = FUN_007959b0(plVar14,&local_88);
          lVar8 = *(long *)(lVar8 + 0x350);
          iVar6 = FUN_00722fb0(lVar8,param_6);
          if ((-1 < iVar6) && (lVar8 = *(long *)(lVar8 + 0x1b8), lVar8 + (long)iVar6 * 0x130 != 0))
          {
            lVar8 = lVar8 + (long)iVar6 * 0x130;
            lVar9 = *(long *)(lVar8 + 0x120);
            iVar6 = *(int *)(*(long *)(lVar8 + 0x128) + 0x40);
            FUN_00723030(lVar9,iVar6);
            lVar8 = *(long *)(lVar9 + 0x1b8) + (long)iVar6 * 0x130;
            local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar8 + 0xd0) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar8 + 0xa0) >> 0x20) * 0.0 +
                                (float)((ulong)*(undefined8 *)(lVar8 + 0xb0) >> 0x20) * 0.0 +
                                (float)((ulong)*(undefined8 *)(lVar8 + 0xc0) >> 0x20) * 0.0,
                                (float)local_80 +
                                (float)*(undefined8 *)(lVar8 + 0xd0) +
                                (float)*(undefined8 *)(lVar8 + 0xa0) * 0.0 +
                                (float)*(undefined8 *)(lVar8 + 0xb0) * 0.0 +
                                (float)*(undefined8 *)(lVar8 + 0xc0) * 0.0);
            uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0xd8) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0xa8) >> 0x20) * 0.0 +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0xb8) >> 0x20) * 0.0 +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 200) >> 0x20) * 0.0,
                                 (float)uStack_78 +
                                 (float)*(undefined8 *)(lVar8 + 0xd8) +
                                 (float)*(undefined8 *)(lVar8 + 0xa8) * 0.0 +
                                 (float)*(undefined8 *)(lVar8 + 0xb8) * 0.0 +
                                 (float)*(undefined8 *)(lVar8 + 200) * 0.0);
            bVar15 = false;
            goto LAB_00e7d348;
          }
        }
      }
      bVar15 = false;
      goto LAB_00e7d348;
    }
  }
  uStack_78 = param_3[1];
  local_80 = *param_3;
  plVar14 = (long *)0x0;
  bVar15 = true;
LAB_00e7d348:
  plVar16 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar16 + 0x10))(plVar16,0x98,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_00e870e0(lVar9,plVar16);
  *(long **)(lVar9 + 8) = plVar16;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x98;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar8 = *param_1;
  if (*param_7 != 0) {
    lVar8 = *param_7;
  }
  plVar16 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar3 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar16 == plVar3) {
      plVar13 = (long *)0x0;
LAB_00e7d460:
      uVar10 = FUN_00e7d770(lVar9,lVar8,0xcbf29ce484222645,0,&local_80,PTR_DAT_02715088,param_4,
                            param_1);
      plVar16 = *(long **)PTR_DAT_027194d8;
      lVar11 = FUN_00e7d8e0(plVar16,uVar10);
      (**(code **)(*plVar16 + 0x38))(plVar16,1);
      if (!bVar15 && ((param_5 ^ 0xffffffff) & 1) == 0) {
        (**(code **)(*plVar14 + 0x10))(&local_88,plVar14);
        lVar5 = local_88;
        local_88 = 0;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar12 = *(long *)(lVar11 + 0x628);
        *(long *)(lVar11 + 0x628) = lVar5;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        }
        if ((lVar5 == 0) || (lVar12 = *(long *)(lVar5 + 0x60), lVar12 == 0)) {
          lVar12 = FUN_007959b0(0,auStack_68);
        }
        else {
          uVar7 = FUN_0156b540(lVar12);
          lVar12 = lVar12 + -0x50;
          if ((uVar7 & 1) == 0) {
            lVar12 = 0;
          }
          lVar12 = FUN_007959b0(lVar12,auStack_68);
        }
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x350);
          iVar6 = FUN_00722fb0(lVar12,param_6);
          if (iVar6 < 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(lVar12 + 0x1b8) + (long)iVar6 * 0x130;
          }
          *(long *)(lVar11 + 0x630) = lVar12;
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        if (local_88 != 0) {
          (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
          local_88 = 0;
        }
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (!bVar15) {
        (**(code **)(plVar14[9] + 0x18))(plVar14 + 9);
      }
      return lVar8;
    }
    plVar13 = (long *)*plVar16;
    uVar7 = FUN_01593050(plVar13 + 10);
    if ((((uVar7 & 1) != 0) && (plVar13[0x34] == lVar8)) &&
       (uVar7 = (**(code **)(*(long *)*plVar16 + 0x88))(), (uVar7 & 1) == 0)) {
      (**(code **)(plVar13[9] + 0x10))();
      (**(code **)(*plVar13 + 0x80))(plVar13);
      goto LAB_00e7d460;
    }
    plVar16 = plVar16 + 1;
  } while( true );
}


