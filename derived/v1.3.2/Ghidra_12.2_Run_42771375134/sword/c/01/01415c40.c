/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415c40; name: FUN_01415c40
 */


void FUN_01415c40(long *param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_027298c8;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)param_2;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar2 = PTR_DAT_02710860;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_0077d050(lVar4,0x400);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[7] != 0) {
      (**(code **)(*(long *)(param_1[7] + 0x48) + 0x18))();
      param_1[7] = 0;
    }
    lVar3 = 0;
    plVar1 = param_1 + 0x33;
    param_1[7] = lVar4;
    do {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_01415fc0;
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar5 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077d050(lVar5,0x80);
      *(long **)(lVar5 + 8) = param_2;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x80;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)((long)param_1 + lVar3 + 0x40);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        *(undefined8 *)((long)param_1 + lVar3 + 0x40) = 0;
      }
      *(long *)((long)param_1 + lVar3 + 0x40) = lVar5;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x40);
    uVar6 = FUN_00ffae10();
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077cea0(lVar4,uVar6);
      *(long **)(lVar4 + 8) = param_2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*plVar1 != 0) {
        (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
        *plVar1 = 0;
      }
      *plVar1 = lVar4;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_014c5570(lVar4,param_2);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x250;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (param_1[0x34] != 0) {
          (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
          param_1[0x34] = 0;
        }
        param_1[0x34] = lVar4;
        return;
      }
    }
  }
LAB_01415fc0:
                    /* WARNING: Subroutine does not return */
  abort();
}


