/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046ae10; name: FUN_0046ae10
 */


undefined8
FUN_0046ae10(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  byte *pbVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long local_c8;
  int local_c0;
  int local_b8;
  char local_b0;
  char local_a8;
  long local_a0;
  char local_94 [4];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  char local_70;
  undefined8 local_68;
  
  local_94[0] = '\0';
  iVar5 = *(int *)(param_2 + 0x14);
  pbVar10 = (byte *)param_1[4];
  if (pbVar10 != (byte *)0x0) {
    uVar12 = 0;
    pbVar11 = pbVar10 + ((ulong)(*pbVar10 + 4) & 0x1fc);
    do {
      if (pbVar10[uVar12 + 1] == 0) goto LAB_0046ae98;
      uVar12 = uVar12 + 1;
      pbVar11 = pbVar11 + 4;
    } while (uVar12 < *pbVar10);
  }
  pbVar11 = (byte *)0x0;
LAB_0046ae98:
  pbVar2 = (byte *)&local_90;
  if (pbVar11 != (byte *)0x0) {
    pbVar2 = pbVar11;
  }
  if (iVar5 <= *(int *)pbVar2) {
    pbVar11 = pbVar10;
    if (pbVar10 != (byte *)0x0) {
      uVar12 = 0;
      pbVar11 = pbVar10 + ((ulong)(*pbVar10 + 4) & 0x1fc);
      do {
        if (pbVar10[uVar12 + 1] == 0) goto LAB_0046aeec;
        uVar12 = uVar12 + 1;
        pbVar11 = pbVar11 + 4;
      } while (uVar12 < *pbVar10);
      pbVar11 = (byte *)0x0;
    }
LAB_0046aeec:
    pbVar10 = (byte *)&local_90;
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = pbVar11;
    }
    iVar5 = *(int *)pbVar10;
  }
  local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)PTR_DAT_02713158);
  FUN_004775b0(&local_90,param_3);
  memcpy(&local_c8,&local_90,0x30);
  if (0 < iVar5) {
    local_a0 = 0;
    if (local_70 != -1) {
      local_c0 = 0;
    }
    if (1 < iVar5) {
      local_a8 = -1;
      local_b0 = -1;
      local_b8 = 0;
      local_c0 = 0;
      if (iVar5 != 2) {
        local_c8 = 0;
      }
    }
  }
  plVar1 = param_1 + 7;
  plVar6 = (long *)FUN_0046b140(plVar1,&local_c8);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*param_1 + 0x38))
                      (param_1,*plVar6,param_3,*(undefined8 *)(param_2 + 8),iVar5,local_94);
    if (lVar7 != 0) {
      if (*plVar6 != lVar7) {
        *(int *)(lVar7 + 100) = *(int *)(lVar7 + 100) + 1;
        puVar13 = (undefined8 *)*plVar6;
        if ((puVar13 != (undefined8 *)0x0) &&
           (iVar5 = *(int *)((long)puVar13 + 100) + -1, *(int *)((long)puVar13 + 100) = iVar5,
           iVar5 == 0)) {
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar13)(puVar13);
          FUN_00404870(uVar3,puVar13);
        }
        *plVar6 = lVar7;
      }
      if (param_5 != (long *)0x0) {
        lVar8 = *param_5;
        if (lVar8 == 0) {
          FUN_00479d10(param_5);
          lVar8 = *param_5;
          if (lVar8 == 0) {
            return 2;
          }
        }
        uVar9 = FUN_00479670(lVar8,lVar7,param_3,param_2);
        if ((int)uVar9 != 1) {
          return uVar9;
        }
        if (((int)param_5[1] != -1) && (*param_5 != 0)) {
          FUN_00479810();
        }
      }
      if (local_94[0] != '\0') {
        iVar5 = FUN_004a5710((int)param_1[2],&local_c8);
        if (iVar5 == 1) {
          FUN_00474710(param_4,lVar7);
        }
        else {
          local_78 = 0xff;
          local_70 = 0xff;
          bVar4 = false;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_68 = 0;
          if (local_c8 == 0) {
            if ((((local_c0 == 0) && (local_b8 == 0)) && (local_b0 == -1)) && (local_a8 == -1)) {
              bVar4 = local_a0 == 0;
            }
            else {
              bVar4 = false;
            }
          }
          FUN_004726e0(plVar1,PTR_LAB_02713168,&local_c8,&local_90,&local_90,0,bVar4);
        }
      }
      return 1;
    }
    if (*plVar6 == 0) {
      FUN_0046b210(plVar1,&local_c8);
      return 2;
    }
  }
  return 2;
}


