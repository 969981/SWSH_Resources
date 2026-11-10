/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eed650; name: FUN_00eed650
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00eed650(long *param_1,long *param_2,char *param_3)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 local_60;
  undefined2 uStack_5a;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)PTR_DAT_0271bd18;
  if (*param_3 == '\0') {
    FUN_00eeddc0(param_1,lVar13);
    lVar14 = *param_1;
    pbVar3 = PTR_DAT_02720580;
    puVar10 = PTR_DAT_02720588;
  }
  else {
    FUN_00eedca0(param_1,lVar13);
    lVar14 = *param_1;
    pbVar3 = PTR_DAT_02720580;
    puVar10 = PTR_DAT_02720588;
  }
  PTR_DAT_02720580 = pbVar3;
  PTR_DAT_02720588 = puVar10;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x54) != 0)) {
    piVar1 = (int *)(lVar14 + 0x54);
    iVar9 = *(int *)(lVar14 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar14 + 0x58);
        if (((*pbVar3 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(pbVar3), puVar10 = PTR_DAT_02720588, iVar7 != 0)) {
          uVar11 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720588 = uVar11;
          __cxa_guard_release(pbVar3);
          puVar10 = PTR_DAT_02720588;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto joined_r0x00eeda94;
          if (plVar12 == (long *)puVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar9) break;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x60);
          if (lVar14 != 0) {
            local_a0 = 0;
            local_58 = 0;
            uStack_54 = 0;
            uStack_52 = 0;
            local_50 = 0;
            uStack_4c = 0;
            local_b8 = 0x4000001;
            local_68 = 0;
            uStack_62 = 0;
            local_60 = 0;
            uStack_5a = 0;
            local_78 = 0;
            uStack_72 = 0;
            uStack_70 = 0;
            uStack_6a = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_98 = 0;
            local_90 = 0;
            local_b0 = 0xcbf29ce484222645;
            local_a8 = 0;
            if (((*PTR_DAT_02715558 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_02715558), iVar9 != 0)) {
              lVar15 = FUN_006e5e60();
              *(long *)PTR_DAT_02715560 = lVar15;
              if (lVar15 != 0) {
                (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
              }
              FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
              __cxa_guard_release(PTR_DAT_02715558);
            }
            lVar15 = *(long *)PTR_DAT_02715560;
            local_a0 = lVar15;
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
            }
            uVar11 = local_b8;
            uStack_52 = 0;
            local_50 = 0;
            uStack_5a = 0;
            local_58 = 0;
            uStack_54 = 0;
            uStack_62 = 0;
            local_60 = 0;
            uStack_6a = 0;
            local_68 = 0;
            uStack_72 = 0;
            uStack_70 = 0;
            bVar4 = false;
            if (*(char *)(lVar16 + 0x47) != '\0') {
              bVar4 = **(char **)(param_3 + 0x10) == '\0';
            }
            if (param_3[1] == '\0') {
              bVar5 = **(char **)(param_3 + 0x10) != '\0';
            }
            else {
              bVar5 = false;
            }
            local_b8._3_5_ = SUB85(uVar11,3);
            local_b8._0_3_ = CONCAT12(bVar5,CONCAT11(bVar4,param_3[1]));
            uVar6 = FUN_007a9cb0();
            local_b8._0_4_ = CONCAT13(uVar6,(undefined3)local_b8);
            plVar12 = *(long **)(*(long *)PTR_DAT_02717c48 + 0x148);
            if ((*(long **)(*(long *)PTR_DAT_02717c48 + 0x150) != plVar12) &&
               (lVar16 = *plVar12, lVar16 != 0)) {
              local_b0 = *(undefined8 *)(lVar16 + 0x3a0);
            }
            uVar8 = FUN_00ecec10();
            local_a8 = CONCAT44(local_a8._4_4_,uVar8);
            if (**(char **)(param_3 + 0x10) == '\0') {
              local_48 = FUN_006e5e60();
              if (local_48 != 0) {
                (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
              }
            }
            else {
              FUN_006cf520(&local_48,*(undefined8 *)PTR_DAT_02710440);
              lVar15 = local_a0;
            }
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
            }
            local_98 = *(undefined8 *)(param_3 + 0x28);
            local_90 = *(undefined8 *)(param_3 + 0x30);
            local_88 = *(undefined8 *)(param_3 + 0x38);
            uStack_80 = *(undefined8 *)(param_3 + 0x40);
            local_78 = (undefined6)*(undefined8 *)(param_3 + 0x48);
            uStack_72 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x30);
            uStack_70 = (undefined6)*(undefined8 *)(param_3 + 0x50);
            uStack_6a = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x30);
            uVar11 = *(undefined8 *)(param_3 + 0x68);
            local_50 = *(undefined4 *)(param_3 + 0x70);
            local_60 = (undefined6)*(undefined8 *)(param_3 + 0x60);
            uStack_5a = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x30);
            local_58 = (undefined4)uVar11;
            uStack_54 = (undefined2)((ulong)uVar11 >> 0x20);
            uStack_52 = (undefined2)((ulong)uVar11 >> 0x30);
            local_68 = (undefined6)*(undefined8 *)(param_3 + 0x58);
            uStack_62 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x30);
            local_a0 = local_48;
            lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = param_2;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
            lVar15 = (**(code **)(*param_2 + 0x10))(param_2,0x128,8);
            if (lVar15 == 0) {
              (**(code **)(*param_2 + 0xb8))(param_2);
            }
            FUN_01329710(lVar15,&local_b8);
            *(long **)(lVar15 + 8) = param_2;
            *(long *)(lVar15 + 0x10) = lVar15;
            *(undefined8 *)(lVar15 + 0x18) = 0x128;
            *(undefined8 *)(lVar15 + 0x20) = 8;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
            if (lVar15 == 0) {
              lVar16 = *(long *)(lVar14 + 0x48);
              *(undefined8 *)(lVar14 + 0x48) = 0;
            }
            else {
              plVar12 = (long *)(lVar15 + 0x48);
              (**(code **)(*plVar12 + 0x10))(plVar12);
              (**(code **)(*plVar12 + 0x10))(plVar12);
              lVar16 = *(long *)(lVar14 + 0x48);
              *(long *)(lVar14 + 0x48) = lVar15;
            }
            if (lVar16 != 0) {
              (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))();
            }
            if (lVar15 != 0) {
              (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
            }
            if (local_a0 != 0) {
              (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
              local_a0 = 0;
            }
            (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
          }
          goto joined_r0x00eeda94;
        }
        iVar9 = iVar7;
        if (iVar7 == 0) goto joined_r0x00eeda94;
      }
      ClearExclusiveLocal();
      iVar9 = iVar7;
    } while (iVar7 != 0);
  }
joined_r0x00eeda94:
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


