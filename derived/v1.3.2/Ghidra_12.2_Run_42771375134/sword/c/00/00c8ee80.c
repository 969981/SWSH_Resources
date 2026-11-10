/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8ee80; name: FUN_00c8ee80
 */


void FUN_00c8ee80(long param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [144];
  undefined8 local_48;
  
  lVar8 = *(long *)(param_2 + 0x368);
  *(long *)(param_1 + 0x268) = lVar8;
  lVar9 = *(long *)(param_2 + 0x370);
  *(long *)(param_1 + 0x270) = lVar9;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x50);
  if (lVar8 == 0 || lVar9 == 0) {
LAB_00c8eedc:
    if (*(int *)(param_2 + 0x2d0) == 3) {
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_110 = PTR_DAT_0271c478 + 0x10;
      local_108 = 2;
      local_e0 = 0;
      FUN_00cc10e0(auStack_d8);
      local_48 = 0;
      local_108 = 0xc;
      local_100 = *(undefined8 *)(param_2 + 0x10);
      lVar8 = *(long *)(param_2 + 0x18);
      local_f8 = 6;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (local_f0 != 0) {
        plVar6 = (long *)(local_f0 + 0x48);
        local_f0 = lVar8;
        (**(code **)(*plVar6 + 0x18))();
        lVar8 = local_f0;
      }
      local_f0 = lVar8;
      local_e8 = *(undefined8 *)(param_2 + 0x28);
      local_e0 = *(undefined8 *)(param_2 + 0x50);
      memcpy(auStack_d8,(void *)(param_2 + 0x2d8),0x90);
      local_48 = 0;
      lVar9 = *(long *)(param_1 + 0x70);
      lVar8 = 0;
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x54) != 0) {
          piVar1 = (int *)(lVar9 + 0x54);
          iVar12 = *(int *)(lVar9 + 0x54);
          do {
            while( true ) {
              uVar7 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
              if ((uVar7 & 1) == 0) goto LAB_00c8efdc;
              iVar3 = *piVar1;
              if (iVar3 != iVar12) break;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar8 = 0;
                if (*(long *)(lVar9 + 0x60) != 0) {
                  lVar8 = *(long *)(lVar9 + 0x60) + -0x50;
                }
                goto LAB_00c8efe0;
              }
              iVar12 = iVar3;
              if (iVar3 == 0) goto LAB_00c8efdc;
            }
            ClearExclusiveLocal();
            iVar12 = iVar3;
          } while (iVar3 != 0);
        }
LAB_00c8efdc:
        lVar8 = 0;
      }
LAB_00c8efe0:
      FUN_00cb0000(&local_148,lVar8,1,&local_110,0,0,0);
      if (*(long *)(param_1 + 0x2c8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x2c8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x2c8) = 0;
      }
      puVar2 = local_148;
      local_148 = (undefined *)0x0;
      *(undefined **)(param_1 + 0x2c8) = puVar2;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      local_118 = 0;
      local_128 = 0;
      local_120 = 0;
      local_148 = PTR_DAT_0271c480 + 0x10;
      local_140 = 0xd;
      local_138 = *(undefined8 *)(param_2 + 0x10);
      lVar8 = *(long *)(param_2 + 0x18);
      local_130 = 7;
      if (lVar8 == 0) {
        local_120 = *(undefined8 *)(param_2 + 0x28);
        local_118 = 0;
        lVar9 = *(long *)(param_1 + 0x70);
        local_128 = lVar8;
        if (lVar9 != 0) goto LAB_00c8f0a4;
        lVar10 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        if (local_128 != 0) {
          plVar6 = (long *)(local_128 + 0x48);
          local_128 = lVar8;
          (**(code **)(*plVar6 + 0x18))();
          lVar8 = local_128;
        }
        local_128 = lVar8;
        local_120 = *(undefined8 *)(param_2 + 0x28);
        local_118 = 0;
        lVar9 = *(long *)(param_1 + 0x70);
        lVar10 = 0;
        if (lVar9 != 0) {
LAB_00c8f0a4:
          local_118 = 0;
          if (*(int *)(lVar9 + 0x54) != 0) {
            piVar1 = (int *)(lVar9 + 0x54);
            iVar12 = *(int *)(lVar9 + 0x54);
            do {
              while( true ) {
                uVar7 = FUN_00c953c0(*(undefined8 *)(lVar9 + 0x58));
                if ((uVar7 & 1) == 0) goto LAB_00c8f0ec;
                iVar3 = *piVar1;
                if (iVar3 != iVar12) break;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  lVar10 = 0;
                  if (*(long *)(lVar9 + 0x60) != 0) {
                    lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
                  }
                  goto LAB_00c8f19c;
                }
                iVar12 = iVar3;
                if (iVar3 == 0) goto LAB_00c8f0ec;
              }
              ClearExclusiveLocal();
              iVar12 = iVar3;
            } while (iVar3 != 0);
          }
LAB_00c8f0ec:
          lVar10 = 0;
        }
      }
LAB_00c8f19c:
      FUN_00cb0000(&local_150,lVar10,1,&local_148,0,0,0);
      if (*(long *)(param_1 + 0x2d0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x2d0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x2d0) = 0;
      }
      uVar11 = local_150;
      local_150 = 0;
      *(undefined8 *)(param_1 + 0x2d0) = uVar11;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      puVar2 = PTR_DAT_0271c260 + 0x10;
      local_148 = puVar2;
      if (local_128 != 0) {
        (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
        local_128 = 0;
      }
      if (local_f0 != 0) {
        local_110 = puVar2;
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      }
      goto LAB_00c8f238;
    }
    uVar11 = *(undefined8 *)(param_2 + 0x10);
    local_158 = *(long *)(param_1 + 0x70);
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
    }
    FUN_00c81bf0(uVar11,&local_158,param_1 + 0x288,param_1 + 0x2a8);
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    }
    lVar8 = *(long *)(param_1 + 0x288);
    *(long *)(param_1 + 0x268) = lVar8;
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x2a8);
  }
  else if ((*(char *)(lVar8 + 0x58) != '\0') || (*(char *)(lVar9 + 0x50) != '\0')) {
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    goto LAB_00c8eedc;
  }
  *(undefined1 *)(lVar8 + 0x58) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x270) + 0x50) = 1;
LAB_00c8f238:
  uVar11 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x278) = uVar11;
  return;
}


