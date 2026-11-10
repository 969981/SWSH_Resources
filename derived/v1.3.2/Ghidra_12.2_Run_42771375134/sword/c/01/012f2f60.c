/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f2f60; name: FUN_012f2f60
 */


undefined8 FUN_012f2f60(undefined4 param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  undefined4 uStack_15c;
  long *local_140;
  long *local_138;
  long local_130;
  long *local_128;
  long local_110;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  long *local_80;
  long *local_78;
  long local_70;
  long *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  
  FUN_012f2100(&local_48);
  if (local_48 == 0) {
    uVar9 = 0;
  }
  else {
    uVar6 = FUN_012f2c60();
    if ((uVar6 & 1) == 0) {
      local_68 = *(long **)(local_48 + 8);
      local_80 = (long *)0x0;
      local_78 = (long *)0x0;
      local_70 = 0;
      local_58 = 0;
      uStack_60 = 0;
      FUN_012f66e0(&local_80,param_2,param_2 + param_3 * 8);
      lVar13 = *(long *)(local_48 + 0x60);
      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(lVar13 + 0x54);
        iVar14 = *(int *)(lVar13 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar13 + 0x58);
            plVar7 = (long *)FUN_012f4940();
            lVar11 = 0;
            if (plVar10 == (long *)0x0) goto LAB_012f305c;
            while (plVar10 != plVar7) {
              plVar10 = (long *)*plVar10;
              if (plVar10 == (long *)0x0) {
                lVar11 = 0;
                goto LAB_012f305c;
              }
            }
            iVar2 = *piVar1;
            if (iVar2 != iVar14) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = 0;
              if (*(long *)(lVar13 + 0x60) != 0) {
                lVar11 = *(long *)(lVar13 + 0x60) + -0x50;
              }
              goto LAB_012f305c;
            }
            lVar11 = 0;
            iVar14 = iVar2;
            if (iVar2 == 0) goto LAB_012f305c;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar14 = iVar2;
        } while (iVar2 != 0);
      }
LAB_012f305c:
      uVar9 = param_4[1];
      uVar8 = *param_4;
      FUN_012f4720(&local_140,&local_80);
      local_110 = local_48;
      local_90 = local_48;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        local_90 = local_110;
      }
      local_b0 = local_130;
      local_e0[0] = CONCAT44(uStack_15c,param_1);
      local_a8 = local_128;
      uStack_a0 = 0;
      local_c0 = local_140;
      local_b8 = local_138;
      local_138 = (long *)0x0;
      local_130 = 0;
      local_140 = (long *)0x0;
      local_110 = 0;
      local_100 = &LAB_012f69d0;
      local_f8 = FUN_012f6d90;
      local_f0 = &LAB_012f6ef0;
      local_98 = 0;
      local_e8 = &LAB_012f6f60;
      local_d0 = uVar8;
      local_c8 = uVar9;
      FUN_012ed8a0(lVar11,&local_100);
      pcVar5 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar5)(local_e0);
      }
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
        local_110 = 0;
      }
      plVar7 = local_140;
      if (local_140 != (long *)0x0) {
        if (local_138 != local_140) {
          plVar10 = local_138;
          do {
            plVar12 = plVar10 + -1;
            if (*plVar12 != 0) {
              (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
              plVar10[-1] = 0;
            }
            plVar10 = plVar12;
          } while (plVar7 != plVar12);
        }
        local_138 = plVar7;
        (**(code **)(*local_128 + 0x18))(local_128,local_140,local_130 - (long)local_140,8);
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
      plVar7 = local_80;
      if (local_80 != (long *)0x0) {
        if (local_78 != local_80) {
          plVar10 = local_78;
          do {
            plVar12 = plVar10 + -1;
            if (*plVar12 != 0) {
              (**(code **)(*(long *)(*plVar12 + 0x48) + 0x18))();
              plVar10[-1] = 0;
            }
            plVar10 = plVar12;
          } while (plVar7 != plVar12);
        }
        local_78 = plVar7;
        (**(code **)(*local_68 + 0x18))(local_68,local_80,local_70 - (long)local_80,8);
      }
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return uVar9;
}


