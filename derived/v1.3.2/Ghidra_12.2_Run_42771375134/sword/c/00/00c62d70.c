/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c62d70; name: FUN_00c62d70
 */


void FUN_00c62d70(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long local_78;
  long *local_70;
  long local_68;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_DAT_0271c048;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar6 = *(long **)(*(long *)PTR_DAT_027108e0 + 0x68);
  local_70 = param_2;
  lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x290,0x10);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_00cbee50(lVar2,plVar6);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar3 = *plVar7;
    *plVar7 = lVar2;
    if (lVar3 != 0) {
      FUN_00c63400(lVar3);
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],lVar3,param_1[3],param_1[4]);
      lVar2 = param_1[1];
    }
    plVar5 = local_70;
    param_1[2] = (long)plVar6;
    param_1[3] = 0x290;
    param_1[4] = 0x10;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x7a0,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      plVar6 = local_70;
      FUN_00cbd450(lVar4,local_70,lVar2);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x7a0;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[6] != 0) {
        (**(code **)(*(long *)(param_1[6] + 0x48) + 0x18))();
        param_1[6] = 0;
      }
      param_1[6] = lVar4;
      lVar2 = *(long *)(lVar4 + 0x58);
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      lVar4 = *plVar7;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x1b50,0x10);
        if (plVar5 == (long *)0x0) {
          (**(code **)(*plVar6 + 0xb8))(plVar6);
        }
        local_68 = lVar2;
        FUN_00ca6ae0(plVar5,local_70,&local_68,lVar4);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        plVar5[1] = (long)plVar6;
        plVar5[2] = (long)plVar5;
        plVar5[3] = 0x1b50;
        plVar5[4] = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(plVar5[9] + 0x10))();
        }
        if (param_1[5] != 0) {
          (**(code **)(*(long *)(param_1[5] + 0x48) + 0x18))();
          param_1[5] = 0;
        }
        plVar6 = local_70;
        param_1[5] = (long)plVar5;
        (**(code **)(*plVar5 + 0x10))(&local_68,plVar5);
        local_78 = *(long *)(param_1[6] + 0x58);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
        }
        lVar2 = FUN_00c63610(auStack_58,plVar6,&local_70,&local_68,&local_78);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        if (param_1[7] != 0) {
          (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
          param_1[7] = 0;
        }
        param_1[7] = lVar2;
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
          local_78 = 0;
        }
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        plVar6 = local_70;
        lVar3 = *plVar7;
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x268,8);
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 0xb8))(plVar6);
          }
          FUN_00cc3c90(lVar4,lVar3);
          *(long **)(lVar4 + 8) = plVar6;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x268;
          *(undefined8 *)(lVar4 + 0x20) = 8;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (param_1[8] != 0) {
            (**(code **)(*(long *)(param_1[8] + 0x48) + 0x18))();
            param_1[8] = 0;
          }
          param_1[8] = lVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


