/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008037c0; name: FUN_008037c0
 */


undefined8 FUN_008037c0(long param_1,long *param_2,long param_3)

{
  void *pvVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined *local_190;
  undefined8 uStack_188;
  void *local_160;
  ulong local_158;
  byte local_130 [8];
  ulong local_128;
  void *local_120;
  byte local_118 [16];
  void *local_108;
  undefined1 auStack_100 [40];
  undefined *local_d8;
  ulong local_d0;
  void *local_c8;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [8];
  ulong local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70 [2];
  
  uVar2 = FUN_00844230(param_2,local_70,&local_78);
  if ((uVar2 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    (**(code **)(*plVar3 + 0xc0))(local_90,plVar3,param_2,local_70[0]);
    local_a8 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    uVar2 = FUN_00844130(local_90,&local_a8);
    if ((uVar2 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      lVar4 = (**(code **)(*param_2 + 0xb8))(param_2);
      lVar4 = FUN_007e34a0(*(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10),&local_a8);
      if (lVar4 == 0) {
        FUN_00801270(&local_d8,1,
                     "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                     ,0x621);
        uVar9 = FUN_00800f30(&local_d8,"Proto type ");
        uVar9 = FUN_00800f60(uVar9,local_90);
        uVar9 = FUN_00800f30(uVar9," not found");
        FUN_00800fa0(&local_160,uVar9);
        FUN_00801290(&local_d8);
        uVar9 = 0;
      }
      else {
        FUN_00817750(auStack_100);
        plVar5 = (long *)FUN_008178c0(auStack_100,lVar4);
        plVar5 = (long *)(**(code **)(*plVar5 + 0x18))();
        (**(code **)(*plVar3 + 0xc0))(local_118,plVar3,param_2,local_78);
        uVar2 = FUN_0080bec0(plVar5,local_118);
        if ((uVar2 & 1) == 0) {
          FUN_00801270(&local_d8,1,
                       "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/text_format.cc"
                       ,0x629);
          uVar9 = FUN_00800f60(&local_d8,local_90);
          uVar9 = FUN_00800f30(uVar9,": failed to parse contents");
          FUN_00800fa0(&local_160,uVar9);
          FUN_00801290(&local_d8);
          uVar9 = 0;
        }
        else {
          local_d8 = &DAT_01ce1521;
          local_160 = (void *)((ulong)local_90 | 1);
          local_d0 = 1;
          local_158 = (ulong)(local_90[0] >> 1);
          if ((local_90[0] & 1) != 0) {
            local_158 = local_88;
            local_160 = local_80;
          }
          local_190 = &DAT_01cffc78;
          uStack_188 = 1;
          FUN_008007e0(local_130,&local_d8,&local_160,&local_190);
          uVar2 = (ulong)(local_130[0] >> 1);
          pvVar1 = (void *)((ulong)local_130 | 1);
          if ((local_130[0] & 1) != 0) {
            uVar2 = local_128;
            pvVar1 = local_120;
          }
          if (uVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar11 = 0;
            uVar6 = 0;
            do {
              while (*(char *)((long)pvVar1 + uVar11) == '\n') {
                uVar11 = uVar11 + 1;
                FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar11 - uVar6);
                *(undefined1 *)(param_3 + 0x14) = 1;
                uVar6 = uVar11;
                if (uVar11 == uVar2) goto LAB_00803a90;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar2);
          }
LAB_00803a90:
          FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar2 - uVar6);
          if ((local_130[0] & 1) != 0) {
            operator_delete(local_120);
          }
          plVar3 = (long *)(param_1 + 0x28);
          plVar8 = (long *)*plVar3;
          plVar10 = *(long **)(param_1 + 0x18);
          if (plVar8 != (long *)0x0) {
            plVar7 = plVar3;
            do {
              if ((ulong)plVar8[4] >= local_78) {
                plVar7 = plVar8;
              }
              plVar8 = (long *)plVar8[(ulong)plVar8[4] < local_78];
            } while (plVar8 != (long *)0x0);
            if ((plVar7 != plVar3) && ((ulong)plVar7[4] <= local_78)) {
              plVar10 = (long *)plVar7[5];
            }
          }
          (**(code **)(*plVar10 + 0x68))
                    (&local_d8,plVar10,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4));
          uVar2 = (ulong)local_d8 >> 1 & 0x7f;
          pvVar1 = (void *)((ulong)&local_d8 | 1);
          if (((ulong)local_d8 & 1) != 0) {
            uVar2 = local_d0;
            pvVar1 = local_c8;
          }
          if (uVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar11 = 0;
            uVar6 = 0;
            do {
              while (*(char *)((long)pvVar1 + uVar11) == '\n') {
                uVar11 = uVar11 + 1;
                FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar11 - uVar6);
                *(undefined1 *)(param_3 + 0x14) = 1;
                uVar6 = uVar11;
                if (uVar11 == uVar2) goto LAB_00803b94;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar2);
          }
LAB_00803b94:
          FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar2 - uVar6);
          if (((ulong)local_d8 & 1) != 0) {
            operator_delete(local_c8);
          }
          std::string::append((char *)(param_3 + 0x18));
          FUN_00802cb0(param_1,plVar5,param_3);
          FUN_00803ce0(param_3);
          (**(code **)(*plVar10 + 0x70))
                    (&local_d8,plVar10,param_2,0xffffffff,0,*(undefined1 *)(param_1 + 4));
          uVar2 = (ulong)local_d8 >> 1 & 0x7f;
          pvVar1 = (void *)((ulong)&local_d8 | 1);
          if (((ulong)local_d8 & 1) != 0) {
            uVar2 = local_d0;
            pvVar1 = local_c8;
          }
          if (uVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar11 = 0;
            uVar6 = 0;
            do {
              while (*(char *)((long)pvVar1 + uVar11) == '\n') {
                uVar11 = uVar11 + 1;
                FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar11 - uVar6);
                *(undefined1 *)(param_3 + 0x14) = 1;
                uVar6 = uVar11;
                if (uVar11 == uVar2) goto LAB_00803c78;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar2);
          }
LAB_00803c78:
          FUN_00809680(param_3,(long)pvVar1 + uVar6,uVar2 - uVar6);
          if (((ulong)local_d8 & 1) != 0) {
            operator_delete(local_c8);
          }
          uVar9 = 1;
        }
        if ((local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        FUN_008177b0(auStack_100);
      }
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  return uVar9;
}


