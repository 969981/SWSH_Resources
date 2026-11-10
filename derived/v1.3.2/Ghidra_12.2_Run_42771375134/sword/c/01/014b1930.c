/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b1930; name: FUN_014b1930
 */


void FUN_014b1930(undefined8 *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong local_e8;
  long *plStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0 [2];
  long local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  undefined1 auStack_70 [16];
  
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar10 != 0) {
    plVar8 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_90 = -0x3648fd0b360df5ef;
  local_88 = "pokeMemoryTable";
  local_80 = 0xf;
  FUN_012b4250(auStack_70,lVar10 + 0x340,&local_90);
  lVar10 = FUN_012b40f0(auStack_70);
  if (lVar10 != 0) {
    uVar9 = 0;
    do {
      FUN_012b4190(&local_c8,auStack_70,uVar9);
      local_90 = 0x7aa72f8ca110e134;
      local_88 = "code";
      local_80 = 4;
      FUN_012b4250(&local_e8,&local_c8,&local_90);
      iVar3 = FUN_012b4420(&local_e8,0);
      if (iVar3 == param_2) {
        uVar9 = uVar9 & 0xffffffff;
        param_1[2] = 0;
        FUN_012b4190(&local_c8,auStack_70,uVar9);
        local_90 = -0x20bd9edefe5b0dc3;
        local_88 = "level";
        local_80 = 5;
        FUN_012b4250(&local_e8,&local_c8,&local_90);
        uVar4 = FUN_012b4420(&local_e8,0);
        *(undefined4 *)param_1 = uVar4;
        FUN_012b4190(&local_c8,auStack_70,uVar9);
        local_80 = 4;
        local_90 = 0x7aa72f8ca110e134;
        local_88 = "code";
        FUN_012b4250(&local_e8,&local_c8,&local_90);
        uVar4 = FUN_012b4420(&local_e8,0);
        *(undefined4 *)((long)param_1 + 4) = uVar4;
        FUN_012b4190(&local_c8,auStack_70,uVar9);
        local_90 = -0x45d6210d4a23e88b;
        local_88 = "probablity";
        local_80 = 10;
        FUN_012b4250(&local_e8,&local_c8,&local_90);
        uVar4 = FUN_012b4420(&local_e8,0);
        *(undefined4 *)(param_1 + 1) = uVar4;
        FUN_012b4190(&local_c8,auStack_70,uVar9);
        local_90 = -0x2677cdaf725a90dd;
        local_88 = "is_force_overwrite";
        local_80 = 0x12;
        FUN_012b4250(&local_e8,&local_c8,&local_90);
        iVar3 = FUN_012b4420(&local_e8,0);
        *(bool *)((long)param_1 + 0xc) = iVar3 != 0;
        FUN_012b4190(&local_c8,auStack_70,uVar9);
        local_90 = -0x2a1b743d4b4ec9f7;
        local_88 = "message_label";
        local_80 = 0xd;
        FUN_012b4250(&local_e8,&local_c8,&local_90);
        local_a0[0] = 0;
        uVar6 = FUN_012b4b40(&local_e8,local_a0);
        param_1[2] = uVar6;
        FUN_012b4190(auStack_b0,auStack_70,uVar9);
        local_c8 = 0x49e1c160166ce86e;
        local_c0 = "data_type";
        local_b8 = 9;
        FUN_012b4250(local_a0,auStack_b0,&local_c8);
        local_e8 = 0xcbf29ce484222645;
        plStack_e0 = (long *)&DAT_01d38550;
        local_d8 = 0;
        local_d0 = 0;
        FUN_012b4820(&local_90,local_a0,&local_e8);
        uVar4 = 0;
        if (local_90 < 0x20e2a0c87d4e0fd1) {
          if (local_90 == -0x5337f2c757d3eb21) {
            *(undefined4 *)(param_1 + 3) = 1;
            goto joined_r0x014b1e30;
          }
          if (local_90 == 0x1761b8298cb87aeb) {
            *(undefined4 *)(param_1 + 3) = 3;
            goto joined_r0x014b1e30;
          }
        }
        else {
          if (local_90 == 0x20e2a0c87d4e0fd1) {
            *(undefined4 *)(param_1 + 3) = 4;
            goto joined_r0x014b1e30;
          }
          if (local_90 == 0x226379427a1144eb) {
            uVar4 = 2;
          }
        }
        *(undefined4 *)(param_1 + 3) = uVar4;
joined_r0x014b1e30:
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        if (local_d0 != 0) {
          (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
          local_d0 = 0;
        }
        lVar10 = 0;
        do {
          lVar1 = lVar10 + 1;
          snprintf((char *)&local_90,0x20,"feel%02d",(int)lVar1);
          FUN_012b4190(local_a0,auStack_70,uVar9);
          local_e8 = 0xcbf29ce484222645;
          if ((byte)local_90 != 0) {
            local_e8 = 0xcbf29ce484222645;
            pbVar7 = (byte *)((ulong)&local_90 | 1);
            bVar2 = (byte)local_90;
            do {
              local_e8 = (local_e8 ^ bVar2) * 0x100000001b3;
              bVar2 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar2 != 0);
          }
          local_d8 = 0x1f;
          plStack_e0 = &local_90;
          FUN_012b4250(&local_c8,local_a0,&local_e8);
          uVar4 = FUN_012b4420(&local_c8,0);
          *(undefined4 *)((long)param_1 + lVar10 * 4 + 0x1c) = uVar4;
          lVar10 = lVar1;
        } while (lVar1 != 0x18);
        return;
      }
      uVar9 = uVar9 + 1;
      uVar5 = FUN_012b40f0(auStack_70);
    } while (uVar9 < uVar5);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


