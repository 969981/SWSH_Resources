/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0090; name: FUN_006a0090
 */


void FUN_006a0090(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *param_1 = param_3;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_027150e0 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = puVar1;
  param_1[3] = 0;
  param_1[0x24] = 0;
  FUN_0069a640(param_1 + 0x26);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_006a2220(uVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar6 = (undefined8 *)param_1[0x2a];
    param_1[0x2a] = uVar2;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6);
      (**(code **)(*(long *)param_1[0x2b] + 0x18))
                ((long *)param_1[0x2b],puVar6,param_1[0x2c],param_1[0x2d]);
    }
    param_1[0x2b] = param_2;
    param_1[0x2c] = 0xd0;
    param_1[0x2d] = 8;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_006a3510(uVar2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar6 = (undefined8 *)param_1[0x2e];
      param_1[0x2e] = uVar2;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        (**(code **)(*(long *)param_1[0x2f] + 0x18))
                  ((long *)param_1[0x2f],puVar6,param_1[0x30],param_1[0x31]);
      }
      param_1[0x2f] = param_2;
      param_1[0x30] = 0xd0;
      param_1[0x31] = 8;
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x78,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_006a8810(uVar2);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar6 = (undefined8 *)param_1[0x32];
        param_1[0x32] = uVar2;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          (**(code **)(*(long *)param_1[0x33] + 0x18))
                    ((long *)param_1[0x33],puVar6,param_1[0x34],param_1[0x35]);
        }
        param_1[0x33] = param_2;
        param_1[0x34] = 0x78;
        param_1[0x35] = 8;
        uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x70,0x10);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_006a83e0(uVar2);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar6 = (undefined8 *)param_1[0x36];
          param_1[0x36] = uVar2;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            (**(code **)(*(long *)param_1[0x37] + 0x18))
                      ((long *)param_1[0x37],puVar6,param_1[0x38],param_1[0x39]);
          }
          param_1[0x37] = param_2;
          param_1[0x38] = 0x70;
          param_1[0x39] = 0x10;
          FUN_006a0490(&local_60,param_2);
          plVar5 = local_60;
          local_60 = (long *)0x0;
          puVar6 = (undefined8 *)param_1[0x3a];
          param_1[0x3a] = plVar5;
          plVar5 = (long *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            (**(code **)(*(long *)param_1[0x3b] + 0x18))
                      ((long *)param_1[0x3b],puVar6,param_1[0x3c],param_1[0x3d]);
            plVar5 = local_60;
          }
          param_1[0x3b] = local_58;
          param_1[0x3c] = uStack_50;
          param_1[0x3d] = local_48;
          local_60 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            lVar3 = plVar5[3];
            *plVar5 = (long)(PTR_DAT_027150e8 + 0x10);
            if (lVar3 != 0) {
              lVar4 = plVar5[4];
              if (plVar5[4] == lVar3) {
                lVar4 = lVar3;
              }
              else {
                do {
                  lVar7 = lVar4 + -0x30;
                  if (*(long *)(lVar4 + -0x10) != 0) {
                    (**(code **)(*(long *)(*(long *)(lVar4 + -0x10) + 0x48) + 0x18))();
                    *(undefined8 *)(lVar4 + -0x10) = 0;
                  }
                  lVar4 = lVar7;
                } while (lVar3 != lVar7);
                lVar4 = plVar5[3];
              }
              plVar5[4] = lVar3;
              (**(code **)(*(long *)plVar5[6] + 0x18))((long *)plVar5[6],lVar4,plVar5[5] - lVar4,8);
            }
            (**(code **)(*local_58 + 0x18))(local_58,plVar5,uStack_50,local_48);
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


