/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00942bd0; name: FUN_00942bd0
 */


void FUN_00942bd0(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_02717e28 + 0x10);
  param_1[2] = 0;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  param_1[0x19] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  plVar4 = (long *)*param_2;
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x160,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_009428e0(lVar2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar5 = (undefined8 *)*plVar6;
    *plVar6 = lVar2;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5);
      (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar5,param_1[3],param_1[4]);
    }
    param_1[2] = (long)plVar4;
    param_1[3] = 0x160;
    param_1[4] = 8;
    plVar4 = (long *)*param_2;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,1,1);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_00943260(lVar2);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar3 = param_1[5];
      param_1[5] = lVar2;
      if (lVar3 != 0) {
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,param_1[7],param_1[8]);
      }
      param_1[6] = (long)plVar4;
      param_1[7] = 1;
      param_1[8] = 1;
      plVar4 = (long *)*param_2;
      lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_00943340(lVar2);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar5 = (undefined8 *)param_1[9];
        param_1[9] = lVar2;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          (**(code **)(*(long *)param_1[10] + 0x18))
                    ((long *)param_1[10],puVar5,param_1[0xb],param_1[0xc]);
        }
        param_1[10] = (long)plVar4;
        param_1[0xb] = 0x10;
        param_1[0xc] = 8;
        param_2 = (long *)*param_2;
        lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x28,8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_009421e0(lVar2);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar5 = (undefined8 *)param_1[0xd];
          param_1[0xd] = lVar2;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5);
            (**(code **)(*(long *)param_1[0xe] + 0x18))
                      ((long *)param_1[0xe],puVar5,param_1[0xf],param_1[0x10]);
          }
          param_1[0xe] = (long)param_2;
          param_1[0xf] = 0x28;
          param_1[0x10] = 8;
          FUN_00942970(param_1[1]);
          FUN_00943270(param_1[5]);
          FUN_00943370(param_1[9]);
          FUN_00942200(param_1[0xd]);
          param_1[0x19] = 0;
          *(undefined8 *)((long)param_1 + 0xbd) = 0;
          param_1[0x11] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x12] = 0;
          param_1[0x13] = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


