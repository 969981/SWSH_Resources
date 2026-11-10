/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d810f0; name: FUN_00d810f0
 */


void FUN_00d810f0(long param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  long lVar14;
  byte *pbVar15;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  byte *local_70;
  long local_68;
  long local_60;
  ulong local_58;
  
  FUN_00d70930(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  FUN_00d70990(&local_68,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0));
  lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)*param_2 * 0x10);
  lVar5 = FUN_00d707f0(param_3,*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x280));
  local_58 = 0;
  if (*(int *)(param_1 + 0x5dc) == 0xb) {
    local_70 = (byte *)CONCAT71(local_70._1_7_,
                                *(undefined1 *)
                                 (*(long *)(*(long *)(param_1 + 0x5d0) + 0x278) + 0x58));
    piVar6 = (int *)FUN_00d70a10(lVar14 + 0x18,&local_70);
    if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar9 == 0)) {
      lVar11 = 0;
      bVar4 = DAT_00000004;
    }
    else {
      puVar1 = (uint *)((long)piVar6 + uVar9);
      lVar11 = (long)puVar1 + (ulong)*puVar1;
      bVar4 = *(byte *)(lVar11 + 4);
    }
    local_58 = 0xcbf29ce484222645;
    if (bVar4 != 0) {
      local_58 = 0xcbf29ce484222645;
      pbVar15 = (byte *)(lVar11 + 5);
      do {
        local_58 = (local_58 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar4 != 0);
    }
  }
  else {
    local_58 = *(ulong *)(lVar14 + 0x20);
  }
  lVar11 = local_68;
  local_78 = local_68;
  local_70 = (byte *)0x5242acbb709d5bd7;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_80 = local_60;
  if (local_60 == 0) {
    FUN_00d80740(param_1,&local_58,&local_70,&local_78,&local_80,lVar5 + 0x10);
  }
  else {
    plVar12 = (long *)(local_60 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_00d80740(param_1,&local_58,&local_70,&local_78,&local_80,lVar5 + 0x10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_80 = 0;
  }
  if (lVar11 != 0) {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    local_78 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x5dc);
  puVar13 = (ulong *)(lVar5 + 0x18);
  local_58 = *puVar13;
  lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  lVar11 = local_68;
  if (iVar3 == 0xb) {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 1;
    local_58 = *(ulong *)(lVar14 + 0x28);
    local_70 = (byte *)0xbba44c01e240e4c9;
    local_88 = local_68;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    local_90 = local_60;
    if (local_60 == 0) {
      FUN_00d80740(param_1,&local_58,&local_70,&local_88,&local_90,puVar13);
    }
    else {
      plVar12 = (long *)(local_60 + 0x48);
      (**(code **)(*plVar12 + 0x10))(plVar12);
      FUN_00d80740(param_1,&local_58,&local_70,&local_88,&local_90,puVar13);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      local_90 = 0;
    }
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      local_88 = 0;
    }
  }
  local_58 = *(ulong *)(lVar5 + 0x20);
  FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  FUN_019a65b0();
  lVar14 = *(long *)(*(long *)(*(long *)(param_1 + 0x5f0) + 0xe0) + (ulong)*param_2 * 0x10);
  pbVar15 = (byte *)(lVar14 + 0x44);
  bVar4 = *pbVar15;
  if (bVar4 == 0) {
    plVar12 = (long *)FUN_00cbd3c0();
    if (*plVar12 == -0x340d631b7bddd9bb) goto LAB_00d8154c;
  }
  else {
    uVar9 = 0xcbf29ce484222645;
    pbVar10 = (byte *)(lVar14 + 0x45);
    do {
      uVar9 = (uVar9 ^ bVar4) * 0x100000001b3;
      bVar4 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar4 != 0);
    puVar13 = (ulong *)FUN_00cbd3c0();
    if (uVar9 == *puVar13) goto LAB_00d8154c;
  }
  lVar14 = *(long *)(param_1 + 0x2b0);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar14 + 0xe8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(lVar14 + 0xe0) + 8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
  }
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  local_70 = pbVar15;
  FUN_00d818c0(&local_58,&local_70,&DAT_01cfd827);
  puVar2 = (undefined8 *)PTR_PTR_02710928;
  if (local_58 != 0) {
    puVar2 = (undefined8 *)(local_58 + 0x60);
  }
  uVar8 = FUN_007890e0(lVar11,*puVar2);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  uVar9 = *(ulong *)(lVar5 + 0x30);
  plVar12 = (long *)0x0;
  if ((uVar9 != 0xcbf29ce484222645) && (uVar9 != 0)) {
    local_58 = uVar9;
    plVar12 = (long *)FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_58);
  }
  lVar5 = (**(code **)(*plVar12 + 0x58))(plVar12,0);
  *(undefined8 *)(*(long *)(lVar5 + 0x18) + 8) = uVar8;
  FUN_00788e30(lVar11);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
LAB_00d8154c:
  iVar3 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (iVar3 == 2) {
    FUN_00d81950(param_1,param_2,param_3);
  }
  else if (iVar3 == 1) {
    FUN_00d81a80(param_1,param_2,param_3);
    FUN_00d81c20(param_1,param_2,param_3);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


