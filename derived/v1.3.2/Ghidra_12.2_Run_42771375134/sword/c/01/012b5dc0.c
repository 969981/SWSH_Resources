/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b5dc0; name: FUN_012b5dc0
 */


void FUN_012b5dc0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02727448;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = *(long **)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)plVar6;
  param_1[9] = (long)(puVar2 + 0x48);
  lVar3 = *param_2;
  param_1[0xb] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    plVar6 = (long *)param_1[1];
  }
  plVar5 = param_1 + 0xc;
  *plVar5 = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0xd] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar6;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    FUN_013197d0(lVar3,plVar6);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar7 = (undefined8 *)*plVar5;
    *plVar5 = lVar3;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*(long *)param_1[0xd] + 0x18))
                ((long *)param_1[0xd],puVar7,param_1[0xe],param_1[0xf]);
    }
    param_1[0xd] = (long)plVar6;
    param_1[0xe] = 0x140;
    param_1[0xf] = 0x10;
    plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_0131a840(plVar5,plVar6);
      plVar5[0x26] = 0;
      *plVar5 = (long)(PTR_DAT_0271f540 + 0x10);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar7 = (undefined8 *)param_1[0x10];
      param_1[0x10] = (long)plVar5;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7);
        (**(code **)(*(long *)param_1[0x11] + 0x18))
                  ((long *)param_1[0x11],puVar7,param_1[0x12],param_1[0x13]);
      }
      param_1[0x11] = (long)plVar6;
      param_1[0x12] = 0x140;
      param_1[0x13] = 0x10;
      plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_0131a840(plVar5,plVar6);
        plVar5[0x26] = 0;
        *plVar5 = (long)(PTR_DAT_02727450 + 0x10);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar7 = (undefined8 *)param_1[0x14];
        param_1[0x14] = (long)plVar5;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7);
          (**(code **)(*(long *)param_1[0x15] + 0x18))
                    ((long *)param_1[0x15],puVar7,param_1[0x16],param_1[0x17]);
        }
        param_1[0x15] = (long)plVar6;
        param_1[0x16] = 0x140;
        param_1[0x17] = 0x10;
        plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_0131a840(plVar5,plVar6);
          plVar5[0x26] = 0;
          *plVar5 = (long)(PTR_DAT_02727458 + 0x10);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar7 = (undefined8 *)param_1[0x18];
          param_1[0x18] = (long)plVar5;
          if (puVar7 != (undefined8 *)0x0) {
            (**(code **)*puVar7)(puVar7);
            (**(code **)(*(long *)param_1[0x19] + 0x18))
                      ((long *)param_1[0x19],puVar7,param_1[0x1a],param_1[0x1b]);
          }
          param_1[0x19] = (long)plVar6;
          param_1[0x1a] = 0x140;
          param_1[0x1b] = 0x10;
          plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            FUN_0131a840(plVar5,plVar6);
            plVar5[0x26] = 0;
            *plVar5 = (long)(PTR_DAT_02727460 + 0x10);
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            puVar7 = (undefined8 *)param_1[0x1c];
            param_1[0x1c] = (long)plVar5;
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7);
              (**(code **)(*(long *)param_1[0x1d] + 0x18))
                        ((long *)param_1[0x1d],puVar7,param_1[0x1e],param_1[0x1f]);
            }
            param_1[0x1d] = (long)plVar6;
            param_1[0x1e] = 0x140;
            param_1[0x1f] = 0x10;
            plVar5 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x140,0x10);
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar3 + 0x80) < 0x10) {
              *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              FUN_0131a840(plVar5,plVar6);
              plVar5[0x26] = 0;
              *plVar5 = (long)(PTR_DAT_0271edf8 + 0x10);
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
              puVar7 = (undefined8 *)param_1[0x20];
              param_1[0x20] = (long)plVar5;
              if (puVar7 != (undefined8 *)0x0) {
                (**(code **)*puVar7)(puVar7);
                (**(code **)(*(long *)param_1[0x21] + 0x18))
                          ((long *)param_1[0x21],puVar7,param_1[0x22],param_1[0x23]);
              }
              param_1[0x21] = (long)plVar6;
              param_1[0x22] = 0x140;
              param_1[0x23] = 0x10;
              if ((((param_1[0xc] == 0) || (param_1[0x10] == 0)) || (param_1[0x14] == 0)) ||
                 (((param_1[0x18] == 0 || (param_1[0x1c] == 0)) || (param_1[0x20] == 0)))) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


