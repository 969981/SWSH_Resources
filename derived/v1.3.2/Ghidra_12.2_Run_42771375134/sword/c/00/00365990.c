/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00365990; name: FUN_00365990
 */


void FUN_00365990(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  char *local_340;
  undefined1 local_338;
  undefined1 uStack_337;
  undefined6 uStack_336;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  undefined1 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_34 [4];
  
  lVar5 = *param_1;
  puVar7 = (uint *)(lVar5 + 0x10);
  uVar8 = *puVar7;
  if (uVar8 != 0) {
    lVar9 = *(long *)(lVar5 + 8);
    uVar10 = (ulong)(uVar8 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar4 = 0;
      if ((char)param_1[9] != '\0') {
        bVar4 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        bVar4 = bVar4 & 1;
        lVar5 = *param_1;
        *(byte *)(param_1 + 9) = bVar4;
        lVar9 = *(long *)(lVar5 + 8);
        puVar7 = (uint *)(lVar5 + 0x10);
        uVar8 = *puVar7;
        uVar10 = (ulong)(uVar8 - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar4;
      *pbVar11 = bVar4;
    }
  }
  uStack_337 = (undefined1)param_1[9];
  local_340 = "Joint";
  local_338 = 0;
  if (uVar8 < (*(uint *)(lVar5 + 0x14) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)CONCAT61(uStack_336,uStack_337) << 8;
    *puVar1 = "Joint";
    *puVar7 = *puVar7 + 1;
    lVar5 = *param_1;
    iVar2 = *(int *)(lVar5 + 0x10);
  }
  else {
    FUN_00321500(lVar5,&local_340);
    lVar5 = *param_1;
    iVar2 = *(int *)(lVar5 + 0x10);
  }
  if (iVar2 != 0) {
    lVar9 = *(long *)(lVar5 + 8);
    uVar10 = (ulong)(iVar2 - 1);
    pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
    if (*pbVar11 == 0) {
      bVar4 = 0;
      if ((char)param_1[9] != '\0') {
        bVar4 = (**(code **)(*(long *)param_1[5] + 0x20))
                          ((long *)param_1[5],*(undefined8 *)(lVar9 + uVar10 * 0x10));
        lVar5 = *param_1;
        bVar4 = bVar4 & 1;
        *(byte *)(param_1 + 9) = bVar4;
        lVar9 = *(long *)(lVar5 + 8);
        uVar10 = (ulong)(*(int *)(lVar5 + 0x10) - 1);
        pbVar11 = (byte *)(lVar9 + uVar10 * 0x10 + 8);
      }
      *(byte *)(lVar9 + uVar10 * 0x10 + 9) = bVar4;
      *pbVar11 = bVar4;
      cVar3 = (char)param_1[9];
      goto joined_r0x00365aa8;
    }
  }
  cVar3 = (char)param_1[9];
joined_r0x00365aa8:
  if (cVar3 != '\0') {
    uVar6 = (**(code **)(param_2 + 0x10))(param_1[6]);
    FUN_00215290(&local_340);
    lStack_c8 = param_1[4];
    local_c0 = param_1[5];
    local_d0 = param_1[3];
    lStack_e0 = param_1[1];
    local_d8 = param_1[2];
    local_e8 = *param_1;
    local_b0 = param_1[7];
    lStack_a8 = param_1[8];
    local_34[0] = '\0';
    local_98 = local_34;
    local_88 = 0;
    local_a0 = 1;
    uStack_90 = 0;
    uStack_b8 = uVar6;
    lStack_80 = local_d8;
    local_78 = local_d0;
    lStack_70 = lStack_c8;
    local_68 = local_d8;
    local_60 = local_d0;
    local_58 = lStack_c8;
    local_50 = local_d8;
    local_48 = local_d0;
    local_40 = lStack_c8;
    FUN_00365c60(&local_340,&local_e8,0);
    if (local_34[0] != '\0') {
      *(undefined1 *)param_1[10] = 1;
    }
    (*(code *)**(undefined8 **)param_1[8])((undefined8 *)param_1[8],uVar6,0);
    lVar5 = *param_1;
  }
  if (*(int *)(lVar5 + 0x10) == 0) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  else {
    uVar8 = *(int *)(lVar5 + 0x10) - 1;
    if ((*(char *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') &&
       (*(char *)(*(long *)(lVar5 + 8) + (ulong)uVar8 * 0x10 + 9) != '\0')) {
      (**(code **)(*(long *)param_1[5] + 0x50))();
      lVar5 = *param_1;
      uVar8 = *(int *)(lVar5 + 0x10) - 1;
    }
    *(uint *)(lVar5 + 0x10) = uVar8;
    *(undefined1 *)(param_1 + 9) = 1;
    if ((uVar8 != 0) && (*(char *)(*(long *)(lVar5 + 8) + (ulong)(uVar8 - 1) * 0x10 + 9) == '\0')) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  return;
}


