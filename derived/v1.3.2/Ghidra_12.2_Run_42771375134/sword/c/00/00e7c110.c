/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7c110; name: FUN_00e7c110
 */


bool FUN_00e7c110(long *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) {
    FUN_00e7b880(&local_38);
    lVar7 = local_38;
    puVar3 = PTR_DAT_027150a8;
    if (local_38 != 0) {
      if (*(int *)(local_38 + 0x54) != 0) {
        if ((local_38 == 0) || (*(int *)(local_38 + 0x54) == 0)) {
          lVar13 = 0;
        }
        else {
          piVar1 = (int *)(local_38 + 0x54);
          puVar8 = (undefined8 *)PTR_DAT_027150b0;
          iVar10 = *(int *)(local_38 + 0x54);
          do {
            while( true ) {
              puVar12 = *(undefined8 **)(lVar7 + 0x58);
              if ((*puVar3 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(puVar3);
                puVar8 = (undefined8 *)PTR_DAT_027150b0;
                if (iVar5 != 0) {
                  uVar6 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_027150b0 = uVar6;
                  __cxa_guard_release(puVar3);
                  puVar8 = (undefined8 *)PTR_DAT_027150b0;
                }
              }
              lVar13 = 0;
              if (puVar12 == (undefined8 *)0x0) goto LAB_00e7c250;
              while (puVar12 != puVar8) {
                puVar12 = (undefined8 *)*puVar12;
                if (puVar12 == (undefined8 *)0x0) {
                  lVar13 = 0;
                  goto LAB_00e7c250;
                }
              }
              iVar5 = *piVar1;
              if (iVar5 != iVar10) break;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar7 = *(long *)(lVar7 + 0x60);
                lVar13 = 0;
                if (lVar7 != 0) {
                  lVar13 = lVar7 + -0x50;
                }
                goto LAB_00e7c250;
              }
              lVar13 = 0;
              iVar10 = iVar5;
              if (iVar5 == 0) goto LAB_00e7c250;
            }
            ClearExclusiveLocal();
            lVar13 = 0;
            iVar10 = iVar5;
          } while (iVar5 != 0);
        }
LAB_00e7c250:
        local_78 = FUN_0069d2b0(lVar13);
        lVar7 = FUN_006b94f0(&local_78);
        pcVar14 = *(char **)(lVar7 + 8);
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        }
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
        }
        iVar10 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        cVar2 = *pcVar14;
        do {
          if (cVar2 == '/') {
            iVar10 = 0;
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
            cVar2 = pcVar14[1];
          }
          else {
            if (cVar2 == '\0') goto code_r0x00e7c2fc;
            *(char *)((long)&local_78 + (long)iVar10) = cVar2;
            iVar10 = iVar10 + 1;
            cVar2 = pcVar14[1];
          }
          pcVar14 = pcVar14 + 1;
        } while( true );
      }
      bVar4 = false;
      goto joined_r0x00e7c35c;
    }
  }
  return false;
code_r0x00e7c2fc:
  uVar9 = 0xcbf29ce484222645;
  if ((byte)local_78 != 0) {
    pbVar11 = (byte *)((ulong)&local_78 | 1);
    do {
      uVar9 = (uVar9 ^ (byte)local_78) * 0x100000001b3;
      local_78._0_1_ = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while ((byte)local_78 != 0);
  }
  bVar4 = uVar9 == *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
joined_r0x00e7c35c:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return bVar4;
}


