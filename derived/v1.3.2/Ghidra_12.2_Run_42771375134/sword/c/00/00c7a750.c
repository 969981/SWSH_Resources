/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7a750; name: FUN_00c7a750
 */


void FUN_00c7a750(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long local_48;
  
  *param_1 = (long)(PTR_DAT_0271c360 + 0x10);
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *param_4;
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar2 = *param_5;
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_006cee90((long)param_1 + 0x6c,1,0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  puVar1 = PTR_DAT_027108e0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[4] = *(long *)(*(long *)puVar1 + 200);
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x18,8);
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar3 = 0;
    puVar3[1] = puVar3 + 1;
    puVar3[2] = puVar3 + 1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    puVar5 = (undefined8 *)param_1[5];
    param_1[5] = (long)puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puVar5[1];
      while (puVar5 + 1 != puVar3) {
        puVar6 = (undefined8 *)*puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar6;
      }
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],puVar5,param_1[7],param_1[8]);
    }
    param_1[6] = (long)param_3;
    param_1[7] = 0x18;
    param_1[8] = 8;
    lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x18,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_3;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_00c782f0(lVar2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      puVar3 = (undefined8 *)param_1[9];
      param_1[9] = lVar2;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(*(long *)param_1[10] + 0x18))
                  ((long *)param_1[10],puVar3,param_1[0xb],param_1[0xc]);
      }
      param_1[10] = (long)param_3;
      param_1[0xb] = 0x18;
      param_1[0xc] = 8;
      lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x48,8);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar4 + 0x80) < 0x10) {
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_3;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        local_48 = param_1[2];
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        FUN_00c812a0(lVar2,param_3,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        plVar7 = (long *)param_1[0x10];
        param_1[0x10] = lVar2;
        puVar1 = PTR_DAT_0271c368;
        if (plVar7 != (long *)0x0) {
          lVar2 = plVar7[5];
          plVar7[5] = 0;
          *plVar7 = (long)(puVar1 + 0x10);
          if (lVar2 != 0) {
            FUN_00c83200(lVar2);
            (**(code **)(*(long *)plVar7[6] + 0x18))((long *)plVar7[6],lVar2,plVar7[7],plVar7[8]);
          }
          lVar2 = plVar7[1];
          plVar7[1] = 0;
          if (lVar2 != 0) {
            FUN_00c83f10(lVar2);
            (**(code **)(*(long *)plVar7[2] + 0x18))((long *)plVar7[2],lVar2,plVar7[3],plVar7[4]);
          }
          (**(code **)(*(long *)param_1[0x11] + 0x18))
                    ((long *)param_1[0x11],plVar7,param_1[0x12],param_1[0x13]);
        }
        param_1[0x11] = (long)param_3;
        param_1[0x12] = 0x48;
        param_1[0x13] = 8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


