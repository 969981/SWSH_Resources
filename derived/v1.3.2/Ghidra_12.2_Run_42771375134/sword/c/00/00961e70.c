/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961e70; name: FUN_00961e70
 */


void FUN_00961e70(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  ushort *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined4 auStack_104 [5];
  undefined8 local_f0 [4];
  undefined8 local_d0;
  undefined2 local_c8 [6];
  undefined4 local_bc [5];
  int local_a8 [5];
  undefined1 local_94 [12];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58 [8];
  
  *param_2 = 0;
  if ((uint)((byte *)param_3[2])[1] + (uint)*(byte *)param_3[2] != 0) {
    uVar3 = FUN_008e0a00(*param_3);
    uVar2 = FUN_00942580(param_1,uVar3);
    local_d0 = param_3[6];
    local_f0[3] = *param_3;
    local_f0[1] = param_3[1];
    local_f0[0] = param_3[2];
    local_f0[2] = param_3[3];
    FUN_00942450(param_1);
    uVar4 = FUN_00925470();
    FUN_009677b0(uVar4,&local_88,local_f0);
    local_f0[3] = param_3[3];
    local_f0[1] = param_3[4];
    local_f0[0] = *param_3;
    local_f0[2] = param_3[2];
    FUN_00942450(param_1);
    uVar4 = FUN_00925290();
    FUN_00965c50(uVar4,&local_88,local_f0);
    local_88 = (undefined1 *)param_3[2];
    local_80 = (undefined1 *)local_f0;
    FUN_00942450(param_1);
    uVar4 = FUN_009251e0();
    FUN_00965ec0(uVar4,local_58,&local_88);
    bVar1 = local_58[0];
    uVar9 = (ulong)local_58[0];
    puVar11 = (undefined1 *)*param_3;
    if (uVar9 == 0) {
      local_80 = (undefined1 *)FUN_009424e0(param_1,*(undefined1 *)(param_3[2] + 6));
      local_78 = param_3[1];
      local_70 = param_3[3];
      local_88 = puVar11;
      FUN_00942450(param_1);
      uVar4 = FUN_00925320();
      FUN_00962300(uVar4,local_58,&local_88);
      if (local_58[0] != 0) {
        lVar5 = FUN_00942400(param_1);
        FUN_0093afd0(lVar5 + 0x10);
      }
      if ((uint)((byte *)param_3[2])[1] + (uint)*(byte *)param_3[2] != 0) {
        local_88 = (undefined1 *)*param_3;
        local_80 = (undefined1 *)param_3[3];
        FUN_00942450(param_1);
        uVar4 = FUN_00925100();
        FUN_00966200(uVar4,local_58,&local_88);
      }
    }
    else {
      uVar12 = param_3[3];
      uVar4 = FUN_009423b0(param_1);
      FUN_00938d20(uVar4,puVar11,uVar12,uVar9,local_f0,local_bc,local_c8);
      local_78 = *param_3;
      local_80 = (undefined1 *)param_3[3];
      local_70 = param_3[4];
      local_68._0_2_ = CONCAT11(*(undefined1 *)(param_3 + 5),bVar1);
      local_88 = (undefined1 *)local_f0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925a20();
      FUN_00966330(uVar4,local_58,&local_88);
      local_88 = (undefined1 *)*param_3;
      local_78 = param_3[3];
      uStack_60 = param_3[6];
      local_70 = CONCAT71(local_70._1_7_,bVar1);
      local_80 = (undefined1 *)CONCAT71(local_80._1_7_,uVar2);
      local_68 = local_f0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925b00();
      FUN_00966070(uVar4,local_58,&local_88);
      uVar10 = 0;
      do {
        local_88 = (undefined1 *)local_f0[uVar10];
        local_80 = (undefined1 *)CONCAT71(local_80._1_7_,local_94[uVar10]);
        FUN_00942450(param_1);
        uVar4 = FUN_00925970();
        FUN_0095fbd0(uVar4,local_58,&local_88);
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      local_70 = *param_3;
      local_80 = (undefined1 *)param_3[1];
      local_78 = param_3[3];
      local_88 = (undefined1 *)local_f0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925d40();
      FUN_009667a0(uVar4,local_58,&local_88);
      local_88 = (undefined1 *)*param_3;
      local_78 = param_3[1];
      local_70 = param_3[3];
      local_80 = (undefined1 *)local_f0[0];
      FUN_00942450(param_1);
      uVar4 = FUN_00925320();
      FUN_00962300(uVar4,local_58,&local_88);
      if (local_58[0] != 0) {
        lVar5 = FUN_00942400(param_1);
        FUN_0093afd0(lVar5 + 0x10);
      }
      uVar10 = 0;
      lVar5 = 0x48;
      do {
        local_78 = param_3[3];
        local_88 = (undefined1 *)*param_3;
        local_80 = (undefined1 *)local_f0[uVar10];
        local_70 = (ulong)CONCAT24(local_c8[uVar10],*(undefined4 *)((long)auStack_104 + lVar5));
        local_68 = (undefined8 *)((ulong)(local_68._1_7_ >> 8) << 0x10);
        local_68._0_1_ = *(int *)((long)local_f0 + lVar5) != 0;
        FUN_00942450(param_1);
        uVar4 = FUN_00925d50();
        FUN_0095feb0(uVar4,local_58,&local_88);
        uVar10 = uVar10 + 1;
        lVar5 = lVar5 + 4;
      } while (uVar9 != uVar10);
      local_80 = (undefined1 *)param_3[3];
      local_78 = param_3[4];
      local_70 = *param_3;
      local_68 = (undefined8 *)CONCAT71(local_68._1_7_,bVar1);
      local_88 = (undefined1 *)local_f0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925110();
      FUN_00967610(uVar4,local_58,&local_88);
    }
    pbVar6 = (byte *)param_3[2];
    if ((uint)pbVar6[1] + (uint)*pbVar6 == 0) {
      iVar8 = 0;
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
      puVar7 = (ushort *)(pbVar6 + 4);
      do {
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + (uint)*puVar7;
        puVar7 = puVar7 + 6;
      } while (uVar9 < (ulong)pbVar6[1] + (ulong)*pbVar6);
    }
    uVar4 = FUN_009423e0(param_1);
    FUN_0092b260(uVar4,*param_3,param_3[3],iVar8);
    *param_2 = iVar8;
  }
  return;
}


