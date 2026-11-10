/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b7420; name: FUN_006b7420
 */


void FUN_006b7420(undefined8 *param_1,undefined8 param_2,long *param_3,int *param_4)

{
  uint *puVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  ushort *puVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint *local_90;
  uint *local_88;
  ulong local_80;
  char *local_78;
  size_t local_70;
  long local_68;
  
  uVar8 = 0xcbf29ce484222645;
  param_1[1] = 0;
  param_1[2] = 0xcbf29ce484222645;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = &DAT_01d38550;
  param_1[7] = 0xcbf29ce484222645;
  param_1[8] = &DAT_01d38550;
  param_1[0x12] = 0;
  lVar9 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  *param_1 = param_4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (4 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2];
    if (uVar4 == 0) {
      lVar9 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_4 + uVar4);
      lVar9 = (long)puVar1 + (ulong)*puVar1;
    }
  }
  sVar3 = strlen((char *)(lVar9 + 4));
  bVar2 = *(byte *)(lVar9 + 4);
  uVar4 = 0xcbf29ce484222645;
  if (bVar2 != 0) {
    uVar4 = 0xcbf29ce484222645;
    pbVar6 = (byte *)(lVar9 + 5);
    do {
      uVar4 = (uVar4 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar2 != 0);
  }
  param_1[7] = uVar4;
  param_1[8] = (char *)(lVar9 + 4);
  param_1[9] = sVar3;
  param_1[10] = 0;
  puVar5 = (ushort *)((long)param_4 - (long)*param_4);
  if (*puVar5 < 0x11) {
LAB_006b7734:
    local_a0 = 0;
    local_98 = 0;
    local_a8 = 0;
LAB_006b7744:
    lVar7 = param_1[0x12];
    param_1[0x12] = local_a8;
  }
  else {
    lVar9 = -(long)*param_4;
    if (((ulong)puVar5[8] != 0) &&
       (puVar1 = (uint *)((long)param_4 + (ulong)puVar5[8]),
       puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1), puVar1 != (uint *)0x0)) {
      local_88 = puVar1 + 1;
      local_90 = local_88 + *puVar1;
      FUN_006b8290(&local_80,param_2,param_3,&local_88,&local_90);
      uVar4 = local_80;
      local_80 = 0;
      lVar9 = param_1[0xb];
      param_1[0xb] = uVar4;
      if (lVar9 != 0) {
        FUN_006b5720(lVar9 + 0x48);
        FUN_006b5720(lVar9 + 0x28);
        lVar7 = *(long *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 8) = 0;
        if (lVar7 != 0) {
          if (*(long *)(lVar7 + 0x28) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x48) + 0x18))();
            *(undefined8 *)(lVar7 + 0x28) = 0;
          }
          if (*(long *)(lVar7 + 0x20) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x48) + 0x18))();
            *(undefined8 *)(lVar7 + 0x20) = 0;
          }
          (**(code **)(**(long **)(lVar9 + 0x10) + 0x18))
                    (*(long **)(lVar9 + 0x10),lVar7,*(undefined8 *)(lVar9 + 0x18),
                     *(undefined8 *)(lVar9 + 0x20));
        }
        (**(code **)(*(long *)param_1[0xc] + 0x18))
                  ((long *)param_1[0xc],lVar9,param_1[0xd],param_1[0xe]);
      }
      param_1[0xd] = local_70;
      param_1[0xe] = local_68;
      param_1[0xc] = local_78;
      FUN_006b5720(&local_80);
      bVar2 = FUN_006b89e0(param_1[0xb]);
      *(byte *)((long)param_1 + 0x8c) = bVar2 & 1;
      lVar9 = -(long)*param_4;
      puVar5 = (ushort *)((long)param_4 - (long)*param_4);
    }
    if ((*puVar5 < 0x19) || (uVar4 = (ulong)*(ushort *)((long)param_4 + lVar9 + 0x18), uVar4 == 0))
    goto LAB_006b7734;
    uVar10 = (ulong)*(uint *)((long)param_4 + uVar4);
    lVar9 = (long)((long)param_4 + uVar4) + uVar10;
    if (lVar9 == 0) goto LAB_006b7734;
    local_70 = strlen((char *)(lVar9 + 4));
    bVar2 = *(byte *)(lVar9 + 4);
    local_80 = 0xcbf29ce484222645;
    if (bVar2 != 0) {
      local_80 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((long)param_4 + uVar10 + uVar4 + 5);
      do {
        local_80 = (local_80 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    local_68 = 0;
    local_78 = (char *)(lVar9 + 4);
    (**(code **)(*param_3 + 0x30))(&local_a8,param_3,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar9 = local_a8;
    if (local_a8 == 0) goto LAB_006b7744;
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
    lVar7 = param_1[0x12];
    param_1[0x12] = lVar9;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x14) = (undefined4)local_98;
  param_1[0x13] = local_a0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd], uVar4 == 0)) {
LAB_006b7850:
    local_a0 = 0;
    local_98 = 0;
    local_a8 = 0;
LAB_006b785c:
    lVar7 = param_1[0x15];
    param_1[0x15] = local_a8;
  }
  else {
    uVar10 = (ulong)*(uint *)((long)param_4 + uVar4);
    lVar9 = (long)((long)param_4 + uVar4) + uVar10;
    if (lVar9 == 0) goto LAB_006b7850;
    local_70 = strlen((char *)(lVar9 + 4));
    bVar2 = *(byte *)(lVar9 + 4);
    local_80 = 0xcbf29ce484222645;
    if (bVar2 != 0) {
      local_80 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((long)param_4 + uVar10 + uVar4 + 5);
      do {
        local_80 = (local_80 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    local_68 = 0;
    local_78 = (char *)(lVar9 + 4);
    (**(code **)(*param_3 + 0x30))(&local_a8,param_3,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar9 = local_a8;
    if (local_a8 == 0) goto LAB_006b785c;
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
    lVar7 = param_1[0x15];
    param_1[0x15] = lVar9;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x17) = (undefined4)local_98;
  param_1[0x16] = local_a0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 0x1d) ||
     (uVar4 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xe], uVar4 == 0)) {
LAB_006b7960:
    local_a0 = 0;
    local_98 = 0;
    local_a8 = 0;
  }
  else {
    uVar10 = (ulong)*(uint *)((long)param_4 + uVar4);
    lVar9 = (long)((long)param_4 + uVar4) + uVar10;
    if (lVar9 == 0) goto LAB_006b7960;
    local_70 = strlen((char *)(lVar9 + 4));
    bVar2 = *(byte *)(lVar9 + 4);
    if (bVar2 != 0) {
      pbVar6 = (byte *)((long)param_4 + uVar10 + uVar4 + 5);
      do {
        uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar2 != 0);
    }
    local_68 = 0;
    local_80 = uVar8;
    local_78 = (char *)(lVar9 + 4);
    (**(code **)(*param_3 + 0x30))(&local_a8,param_3,&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    lVar9 = local_a8;
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
      lVar7 = param_1[0x18];
      param_1[0x18] = lVar9;
      goto joined_r0x006b7974;
    }
  }
  lVar7 = param_1[0x18];
  param_1[0x18] = local_a8;
joined_r0x006b7974:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x1a) = (undefined4)local_98;
  param_1[0x19] = local_a0;
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
  }
  return;
}


