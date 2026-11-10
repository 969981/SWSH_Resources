/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e1800; name: FUN_004e1800
 */


void FUN_004e1800(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_70;
  undefined8 *local_68;
  
  lVar9 = *param_3;
  plVar6 = *(long **)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar11 = *(long *)(lVar9 + 0x40);
  plVar7 = plVar6;
  if (uVar2 == 0) {
LAB_004e1870:
    if ((plVar7 != plVar6 + (ulong)uVar2 * 4) && (*(long *)(param_1 + 8) != 0)) {
      lVar9 = *(long *)(param_1 + 8);
      do {
        while (((lVar8 = *(long *)(lVar9 + 8), (*(byte *)(lVar9 + 0x17c) >> 1 & 1) == 0 ||
                (*param_3 == lVar9)) || (*(long *)(lVar9 + 0x40) != lVar11))) {
          lVar9 = lVar8;
          if (lVar8 == 0) goto LAB_004e1c48;
        }
        FUN_004c2cc0(lVar9);
        plVar6 = (long *)param_2[1];
        if (plVar6 != (long *)0x0) {
          plVar12 = (long *)0x0;
          do {
            while( true ) {
              plVar10 = plVar6;
              plVar6 = (long *)plVar10[3];
              if (*plVar10 == lVar9) break;
              plVar12 = plVar10;
              if (plVar6 == (long *)0x0) goto LAB_004e1950;
            }
            plVar1 = param_2 + 1;
            if ((long *)param_2[1] != plVar10) {
              plVar1 = plVar12 + 3;
            }
            *plVar1 = (long)plVar6;
            if ((long *)*param_2 == plVar10) {
              *param_2 = plVar12;
            }
            uVar3 = *(undefined4 *)PTR_DAT_02712a90;
            FUN_004c2ce0(*plVar10);
            FUN_00404870(uVar3,plVar10);
          } while (plVar6 != (long *)0x0);
        }
LAB_004e1950:
        local_70._0_4_ = 0x4000b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4001b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4002b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4003b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4004b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4005b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4006b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4007b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4008b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x4009b0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x400ab0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x400bb0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x400cb0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x400db0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70._0_4_ = 0x400eb0;
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        local_70 = CONCAT44(local_70._4_4_,0x400fb0);
        FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),0,1);
        plVar6 = (long *)plVar7[2];
        *(undefined2 *)(plVar7 + 3) = 0;
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (((plVar6[3] == lVar9) && (*(char *)(plVar6 + 5) == -0x70)) &&
             ((*(char *)((long)plVar6 + 0x2b) != '\0' && ((*(byte *)(plVar6 + 6) >> 2 & 1) == 0))))
          {
            local_70._4_4_ = (undefined4)((ulong)local_70 >> 0x20);
            local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(plVar6 + 5));
            local_70 = CONCAT71(local_70._1_7_,0x80);
            FUN_004c30d0(param_1,lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),1,1);
          }
        }
        FUN_004c2ce0(lVar9);
        lVar9 = lVar8;
      } while (lVar8 != 0);
LAB_004e1c48:
      lVar9 = *param_3;
    }
  }
  else {
    lVar8 = (ulong)uVar2 << 5;
    do {
      if (*plVar7 == lVar11) goto LAB_004e1870;
      lVar8 = lVar8 + -0x20;
      plVar7 = plVar7 + 4;
    } while (lVar8 != 0);
  }
  local_70 = 0;
  local_68 = (undefined8 *)0x0;
  FUN_004e29a0(lVar9,&local_70,*(undefined4 *)((long)param_3 + 0xc),
               *(uint *)(param_3 + 2) & 0x3fffffff);
  puVar5 = PTR_DAT_02712a90;
  puVar4 = local_68;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    local_68 = (undefined8 *)puVar4[3];
    if (local_68 == (undefined8 *)0x0) {
      local_70 = 0;
      local_68 = (undefined8 *)0x0;
      if ((char)param_3[1] == -0x50) goto LAB_004e1c8c;
LAB_004e1ccc:
      FUN_004c30d0(param_1,lVar9,puVar4 + 1,*(undefined4 *)((long)puVar4 + 0xc),0,1);
    }
    else {
      if ((char)param_3[1] != -0x50) goto LAB_004e1ccc;
LAB_004e1c8c:
      if (((*(char *)((long)param_3 + 9) != *(char *)((long)puVar4 + 9)) ||
          (*(char *)(puVar4 + 1) != -0x50)) ||
         (*(char *)((long)param_3 + 10) != *(char *)((long)puVar4 + 10))) goto LAB_004e1ccc;
    }
    uVar3 = *(undefined4 *)puVar5;
    FUN_004c2ce0(*puVar4);
    FUN_00404870(uVar3,puVar4);
    puVar4 = local_68;
  } while( true );
}


