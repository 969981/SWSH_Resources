/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6b260; name: FUN_00d6b260
 */


void FUN_00d6b260(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  long local_b8;
  char *local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x550) + 8);
  FUN_012b4da0(auStack_78,*(undefined8 *)(lVar4 + 400),*(undefined8 *)(lVar4 + 0x180));
  uVar2 = FUN_012b4090(auStack_78);
  if ((uVar2 & 1) != 0) {
    local_b8 = -0x4e17b00a611be6c1;
    local_b0 = "demoParamList";
    local_a8 = 0xd;
    FUN_012b4250(auStack_88,auStack_78,&local_b8);
    lVar4 = FUN_012b40f0(auStack_88);
    if (lVar4 != 0) {
      uVar5 = 1;
      do {
        FUN_012b4190(auStack_98,auStack_88,(long)(int)(uVar5 - 1));
        local_e0 = 0x33adc5b6162705a6;
        local_d8 = "name";
        local_d0 = 4;
        FUN_012b4250(auStack_c8,auStack_98,&local_e0);
        local_100 = 0xcbf29ce484222645;
        puStack_f8 = &DAT_01d38550;
        local_f0 = 0;
        local_e8 = 0;
        FUN_012b4820(&local_b8,auStack_c8,&local_100);
        lVar4 = local_b8;
        lVar6 = *param_2;
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
          local_a0 = 0;
        }
        if (local_e8 != 0) {
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          local_e8 = 0;
        }
        if (lVar6 == lVar4) {
          local_d0 = 4;
          local_e0 = 0x33adc5b6162705a6;
          local_d8 = "name";
          FUN_012b4250(auStack_c8,auStack_98,&local_e0);
          local_100 = 0xcbf29ce484222645;
          puStack_f8 = &DAT_01d38550;
          local_f0 = 0;
          local_e8 = 0;
          FUN_012b4820(&local_b8,auStack_c8,&local_100);
          *(long *)(param_1 + 0x490) = local_b8;
          *(char **)(param_1 + 0x498) = local_b0;
          *(undefined8 *)(param_1 + 0x4a0) = local_a8;
          if (*(long *)(param_1 + 0x4a8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x4a8) = 0;
          }
          lVar4 = local_a0;
          local_a0 = 0;
          *(long *)(param_1 + 0x4a8) = lVar4;
          if (local_e8 != 0) {
            (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
            local_e8 = 0;
          }
          local_e0 = 0x72b64509739af096;
          local_d8 = "path";
          local_d0 = 4;
          FUN_012b4250(auStack_c8,auStack_98,&local_e0);
          local_100 = 0xcbf29ce484222645;
          puStack_f8 = &DAT_01d38550;
          local_f0 = 0;
          local_e8 = 0;
          FUN_012b4820(&local_b8,auStack_c8,&local_100);
          *(long *)(param_1 + 0x4b0) = local_b8;
          *(char **)(param_1 + 0x4b8) = local_b0;
          *(undefined8 *)(param_1 + 0x4c0) = local_a8;
          if (*(long *)(param_1 + 0x4c8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x4c8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x4c8) = 0;
          }
          lVar4 = local_a0;
          local_a0 = 0;
          *(long *)(param_1 + 0x4c8) = lVar4;
          if (local_e8 != 0) {
            (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
            local_e8 = 0;
          }
          local_b8 = -0x3b8216e2ec53e641;
          local_b0 = "memSize";
          local_a8 = 7;
          FUN_012b4250(&local_100,auStack_98,&local_b8);
          iVar1 = FUN_012b4420(&local_100,0);
          *(long *)(param_1 + 0x4d0) = (long)iVar1;
          local_b8 = -0x6b33e2a2e7f9c23a;
          local_b0 = "isDemoSkipEnable";
          local_a8 = 0x10;
          FUN_012b4250(&local_100,auStack_98,&local_b8);
          iVar1 = FUN_012b4420(&local_100,0);
          *(bool *)(param_1 + 0x4d8) = iVar1 != 0;
          local_e0 = 0x8372f5bc0ace8fb5;
          local_d8 = "arcFile";
          local_d0 = 7;
          FUN_012b4250(auStack_c8,auStack_98,&local_e0);
          local_100 = 0xcbf29ce484222645;
          puStack_f8 = &DAT_01d38550;
          local_f0 = 0;
          local_e8 = 0;
          FUN_012b4820(&local_b8,auStack_c8,&local_100);
          *(long *)(param_1 + 0x4e0) = local_b8;
          *(char **)(param_1 + 0x4e8) = local_b0;
          *(undefined8 *)(param_1 + 0x4f0) = local_a8;
          if (*(long *)(param_1 + 0x4f8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x4f8) = 0;
          }
          lVar4 = local_a0;
          local_a0 = 0;
          *(long *)(param_1 + 0x4f8) = lVar4;
          if (local_e8 == 0) {
            return;
          }
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          return;
        }
        uVar3 = FUN_012b40f0(auStack_88);
        uVar2 = (ulong)uVar5;
        uVar5 = uVar5 + 1;
      } while (uVar2 < uVar3);
    }
  }
  return;
}


