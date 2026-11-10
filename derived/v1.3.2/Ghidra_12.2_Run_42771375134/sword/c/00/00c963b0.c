/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c963b0; name: FUN_00c963b0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00c963b0(char *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  undefined1 local_ec [4];
  long local_e8 [6];
  long local_b8;
  long local_58;
  
  if (param_1[1] == '\0' || 9 < (byte)(param_1[1] - 0x30U)) {
    return 0;
  }
  if ((byte)param_1[2] == 0) {
    lVar11 = 1;
    cVar1 = param_1[2];
joined_r0x00c96420:
    if (cVar1 != '\0') {
      return 0;
    }
    if ((lVar11 + 1U < 3) && (param_1[lVar11 + 2] != '\0')) {
      return 0;
    }
  }
  else {
    if (9 < (byte)param_1[2] - 0x30) {
      return 0;
    }
    if ((byte)param_1[3] == 0) {
      lVar11 = 2;
      cVar1 = param_1[3];
      goto joined_r0x00c96420;
    }
    if (9 < (byte)param_1[3] - 0x30) {
      return 0;
    }
  }
  uVar2 = FUN_00c969b0(param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x30);
  if (lVar11 < -0x2e30f3cb4c9731cf) {
    if ((lVar11 != -0x2e30f6cb4c9736e8) && (lVar11 != -0x2e30f5cb4c973535)) goto LAB_00c96784;
  }
  else if ((lVar11 != -0x2e30f0cb4c972cb6) && (lVar11 != -0x2e30f3cb4c9731cf)) goto LAB_00c96784;
  if (*param_1 == '\0') {
    uVar9 = 0;
  }
  else {
    if (*param_1 != '\x01') {
      return 0;
    }
    uVar9 = 1;
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_58,lVar12);
  uVar3 = _DAT_00001588;
  if (local_58 != 0) {
    FUN_00c62ba0(local_e8);
    uVar3 = *(undefined8 *)(&DAT_00001588 + local_e8[0]);
    if (local_e8[0] != 0) {
      (**(code **)(*(long *)(local_e8[0] + 0x48) + 0x18))();
    }
  }
  local_e8[0] = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  uVar3 = FUN_00cbf660(uVar3);
  plVar4 = (long *)FUN_00cbd3c0();
  local_58 = *plVar4;
  local_e8[0] = FUN_00cc2d20(*param_1,0);
  local_58 = local_e8[0];
  piVar5 = (int *)FUN_00c979d0(uVar3,local_e8,uVar9);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x2b) ||
     (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x15], uVar2 == 0)) {
    if (*(long *)(param_1 + 8) != 0) goto LAB_00c96620;
  }
  else if (*(long *)((long)piVar5 + uVar2) != *(long *)(param_1 + 8)) {
LAB_00c96620:
    local_e8[0] = FUN_00cc2d20(*param_1,1);
    local_58 = local_e8[0];
    piVar5 = (int *)FUN_00c979d0(uVar3,local_e8,uVar9);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x2b) ||
       (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x15], uVar2 == 0)) {
      if (*(long *)(param_1 + 8) != 0) goto LAB_00c96688;
    }
    else if (*(long *)((long)piVar5 + uVar2) != *(long *)(param_1 + 8)) {
LAB_00c96688:
      local_e8[0] = FUN_00cc2d20(*param_1,2);
      local_58 = local_e8[0];
      piVar5 = (int *)FUN_00c979d0(uVar3,local_e8,uVar9);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x2b) ||
         (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x15], uVar2 == 0)) {
        if (*(long *)(param_1 + 8) != 0) goto LAB_00c966f0;
      }
      else if (*(long *)((long)piVar5 + uVar2) != *(long *)(param_1 + 8)) {
LAB_00c966f0:
        local_e8[0] = FUN_00cc2d20(*param_1,3);
        local_58 = local_e8[0];
        piVar5 = (int *)FUN_00c979d0(uVar3,local_e8,uVar9);
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x2b) ||
           (uVar2 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x15], uVar2 == 0)) {
          if (*(long *)(param_1 + 8) != 0) {
            return 0;
          }
        }
        else if (*(long *)((long)piVar5 + uVar2) != *(long *)(param_1 + 8)) {
          return 0;
        }
      }
    }
  }
  FUN_00cc10e0(local_e8);
  local_ec[0] = 0;
  FUN_00cc1c90(local_e8,&local_58,param_1,local_ec);
  if (local_b8 != lVar11) {
    return 0;
  }
LAB_00c96784:
  if (*(long *)(param_1 + 0x50) == -0x5e7d306caa6288d3) {
    return 0;
  }
  if (*(long *)(param_1 + 0x50) == -0x51c0cc7c6b84e766) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) == -0x6100de89ed389036) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) == -0x48ec011824f51cf5) {
    return 0;
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_58,lVar11);
  uVar9 = _DAT_00001588;
  if (local_58 != 0) {
    FUN_00c62ba0(local_e8);
    uVar9 = *(undefined8 *)(&DAT_00001588 + local_e8[0]);
    if (local_e8[0] != 0) {
      (**(code **)(*(long *)(local_e8[0] + 0x48) + 0x18))();
    }
  }
  local_e8[0] = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (*param_1 == '\0') {
    uVar3 = FUN_00cbf610(uVar9);
  }
  else {
    uVar3 = FUN_00cbf600(uVar9);
  }
  plVar4 = (long *)FUN_00cbd3c0();
  lVar11 = *plVar4;
  uVar2 = 0;
  bVar10 = 1;
  do {
    lVar12 = *(long *)(param_1 + uVar2 * 8 + 8);
    if (lVar12 != lVar11) {
      if (uVar2 == 0) {
        uVar6 = FUN_00cbf670(uVar9);
        local_e8[0] = lVar12;
        lVar12 = FUN_00cbd130(uVar6,local_e8);
        bVar10 = bVar10 & lVar12 != 0;
        if (lVar12 == 0) {
          return bVar10;
        }
      }
      else {
        local_e8[0] = lVar12;
        piVar5 = (int *)FUN_00c97270(uVar3,local_e8);
        if (piVar5 == (int *)0x0) {
          return 0;
        }
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 0x2f) ||
           (uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x17], uVar8 == 0)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)((long)piVar5 + uVar8);
        }
        if (((uint)uVar2 & 0x7fffffff) == 0xc) {
          if ((uVar7 >> 9 & 1) != 0) {
            lVar12 = *(long *)(param_1 + 0x50);
joined_r0x00c96978:
            if (lVar12 != lVar11) {
              return 0;
            }
          }
        }
        else if ((((uint)uVar2 & 0x7fffffff) == 1) && ((uVar7 >> 7 & 1) != 0)) {
          lVar12 = *(long *)(param_1 + 0x40);
          goto joined_r0x00c96978;
        }
      }
    }
    uVar2 = uVar2 + 1;
    if (0xf < uVar2) {
      return bVar10;
    }
  } while( true );
}


