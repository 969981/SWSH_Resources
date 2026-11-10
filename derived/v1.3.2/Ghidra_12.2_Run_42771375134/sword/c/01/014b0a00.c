/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b0a00; name: FUN_014b0a00
 */


void FUN_014b0a00(undefined8 *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong local_110;
  long *local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8 [2];
  long local_98;
  char *local_90;
  undefined8 local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_98 = -0x3648fd0b360df5ef;
  local_90 = "pokeMemoryTable";
  local_88 = 0xf;
  FUN_012b4250(auStack_78,lVar9 + 0x340,&local_98);
  lVar9 = FUN_012b40f0(auStack_78);
  if (lVar9 != 0) {
    uVar11 = 0;
    do {
      FUN_012b4190(local_a8,auStack_78,uVar11);
      local_110 = 0x3d3f8b275e8b9993;
      local_108 = (long *)&DAT_01ce5c71;
      local_100 = 3;
      FUN_012b4250(&local_f0,local_a8,&local_110);
      local_c8 = -0x340d631b7bddd9bb;
      local_c0 = "";
      local_b8 = 0;
      local_b0 = 0;
      FUN_012b4820(&local_98,&local_f0,&local_c8);
      if (local_b0 != 0) {
        (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
        local_b0 = 0;
      }
      if (local_98 == *param_2) {
        FUN_012b4190(&local_f0,auStack_78,uVar11);
        local_c8 = -0x20bd9edefe5b0dc3;
        local_c0 = "level";
        local_b8 = 5;
        FUN_012b4250(&local_110,&local_f0,&local_c8);
        uVar4 = FUN_012b4420(&local_110,0);
        *(undefined4 *)param_1 = uVar4;
        FUN_012b4190(&local_f0,auStack_78,uVar11);
        local_c8 = 0x7aa72f8ca110e134;
        local_c0 = "code";
        local_b8 = 4;
        FUN_012b4250(&local_110,&local_f0,&local_c8);
        uVar4 = FUN_012b4420(&local_110,0);
        *(undefined4 *)((long)param_1 + 4) = uVar4;
        FUN_012b4190(&local_f0,auStack_78,uVar11);
        local_c8 = -0x45d6210d4a23e88b;
        local_c0 = "probablity";
        local_b8 = 10;
        FUN_012b4250(&local_110,&local_f0,&local_c8);
        uVar4 = FUN_012b4420(&local_110,0);
        *(undefined4 *)(param_1 + 1) = uVar4;
        FUN_012b4190(&local_f0,auStack_78,uVar11);
        local_c8 = -0x2677cdaf725a90dd;
        local_c0 = "is_force_overwrite";
        local_b8 = 0x12;
        FUN_012b4250(&local_110,&local_f0,&local_c8);
        iVar5 = FUN_012b4420(&local_110,0);
        *(bool *)((long)param_1 + 0xc) = iVar5 != 0;
        FUN_012b4190(&local_f0,auStack_78,uVar11);
        local_c8 = -0x2a1b743d4b4ec9f7;
        local_c0 = "message_label";
        local_b8 = 0xd;
        FUN_012b4250(&local_110,&local_f0,&local_c8);
        local_a8[0] = 0;
        uVar6 = FUN_012b4b40(&local_110,local_a8);
        param_1[2] = uVar6;
        FUN_012b4190(auStack_d8,auStack_78,uVar11);
        local_f0 = 0x49e1c160166ce86e;
        local_e8 = "data_type";
        local_e0 = 9;
        FUN_012b4250(local_a8,auStack_d8,&local_f0);
        local_110 = 0xcbf29ce484222645;
        local_108 = (long *)&DAT_01d38550;
        local_100 = 0;
        local_f8 = 0;
        FUN_012b4820(&local_c8,local_a8,&local_110);
        uVar4 = 0;
        if (local_c8 < 0x20e2a0c87d4e0fd1) {
          if (local_c8 == -0x5337f2c757d3eb21) {
            *(undefined4 *)(param_1 + 3) = 1;
          }
          else {
            if (local_c8 != 0x1761b8298cb87aeb) goto LAB_014b0e54;
            *(undefined4 *)(param_1 + 3) = 3;
          }
        }
        else if (local_c8 == 0x20e2a0c87d4e0fd1) {
          *(undefined4 *)(param_1 + 3) = 4;
        }
        else {
          if (local_c8 == 0x226379427a1144eb) {
            uVar4 = 2;
          }
LAB_014b0e54:
          *(undefined4 *)(param_1 + 3) = uVar4;
        }
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        if (local_f8 != 0) {
          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
          local_f8 = 0;
        }
        lVar9 = 0;
        do {
          lVar1 = lVar9 + 1;
          snprintf((char *)&local_c8,0x20,"feel%02d",(int)lVar1);
          FUN_012b4190(local_a8,auStack_78,uVar11);
          local_110 = 0xcbf29ce484222645;
          if ((byte)local_c8 != 0) {
            local_110 = 0xcbf29ce484222645;
            pbVar8 = (byte *)((ulong)&local_c8 | 1);
            bVar2 = (byte)local_c8;
            do {
              local_110 = (local_110 ^ bVar2) * 0x100000001b3;
              bVar2 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar2 != 0);
          }
          local_100 = 0x1f;
          local_108 = &local_c8;
          FUN_012b4250(&local_f0,local_a8,&local_110);
          uVar4 = FUN_012b4420(&local_f0,0);
          *(undefined4 *)((long)param_1 + lVar9 * 4 + 0x1c) = uVar4;
          lVar9 = lVar1;
        } while (lVar1 != 0x18);
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (bVar3) {
        return;
      }
      uVar11 = uVar11 + 1;
      uVar7 = FUN_012b40f0(auStack_78);
    } while (uVar11 < uVar7);
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


