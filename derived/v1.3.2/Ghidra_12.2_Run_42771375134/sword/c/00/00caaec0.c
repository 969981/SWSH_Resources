/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caaec0; name: FUN_00caaec0
 */


void FUN_00caaec0(long *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [20];
  undefined4 local_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  if (param_4 != 0) {
    uVar2 = 0;
    plVar5 = param_3;
    do {
      if ((int)param_3[uVar2 * 2 + 1] == 0) {
        lVar3 = param_1[0x2d2];
        if (lVar3 == 0) {
          FUN_014aba20(auStack_70,0,param_2 + 6);
        }
        else {
          plVar4 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar4 + 0x10))(plVar4);
          FUN_014aba20(auStack_70,lVar3,param_2 + 6);
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
        local_78 = 0;
        local_80 = 0;
        FUN_00c58c00(&local_c8,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
        FUN_00caa4d0(local_c8,auStack_70,param_2 + 10,&local_80,auStack_4c,auStack_50,auStack_54);
        if (local_c8 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
        }
        local_88 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_c8 = PTR_DAT_0271c400 + 0x10;
        local_90 = 0;
        local_98 = 0;
        local_c0 = 6;
        local_b8 = *param_2;
        local_b0 = *(undefined4 *)(param_2 + 1);
        (**(code **)(*param_1 + 0x10))(&local_48,param_1);
        local_88 = *param_2;
        local_a8 = local_48;
        uStack_a0 = local_80;
        local_90 = local_5c;
        local_98 = local_78;
        FUN_00caf180(&local_d0,param_1,&local_c8,0);
        local_48 = local_d0;
        if (local_d0 != 0) {
          (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
        }
        FUN_00c9a590(param_1,1,&local_48,0,1);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        *plVar5 = local_d0;
        *(int *)(param_3 + uVar2 * 2 + 1) = 1;
        local_c8 = PTR_DAT_0271c260 + 0x10;
        if (local_a8 == 0) {
          return;
        }
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        return;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulong)uVar1;
      plVar5 = plVar5 + 2;
    } while (uVar1 < param_4);
  }
  return;
}


