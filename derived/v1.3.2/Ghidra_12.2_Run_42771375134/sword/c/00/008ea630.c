/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ea630; name: FUN_008ea630
 */


void FUN_008ea630(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
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
  puVar2 = PTR_DAT_02717c40;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_0077d050(lVar4,0xd);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[0x11] != 0) {
      (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
      param_1[0x11] = 0;
    }
    param_1[0x11] = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0077d050(lVar4,0x15);
      *(long **)(lVar4 + 8) = param_2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0x12] != 0) {
        (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
        param_1[0x12] = 0;
      }
      param_1[0x12] = lVar4;
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x118,8);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar4 + 0x80) < 0x10) {
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        FUN_01622de0(lVar3);
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        lVar4 = param_1[0x15];
        param_1[0x15] = lVar3;
        if (lVar4 != 0) {
          (**(code **)(*(long *)param_1[0x16] + 0x18))
                    ((long *)param_1[0x16],lVar4,param_1[0x17],param_1[0x18]);
        }
        param_1[0x16] = (long)param_2;
        param_1[0x17] = 0x118;
        param_1[0x18] = 8;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
          if (lVar4 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_0077d050(lVar4,0x200);
          *(long **)(lVar4 + 8) = param_2;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x80;
          *(undefined8 *)(lVar4 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (param_1[0x13] != 0) {
            (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
            param_1[0x13] = 0;
          }
          param_1[0x13] = lVar4;
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
            if (lVar4 == 0) {
              (**(code **)(*param_2 + 0xb8))(param_2);
            }
            FUN_0077d050(lVar4,0x200);
            *(long **)(lVar4 + 8) = param_2;
            *(long *)(lVar4 + 0x10) = lVar4;
            *(undefined8 *)(lVar4 + 0x18) = 0x80;
            *(undefined8 *)(lVar4 + 0x20) = 8;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
            }
            if (param_1[0x14] != 0) {
              (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
              param_1[0x14] = 0;
            }
            *(undefined1 *)((long)param_1 + 0x6e) = 0;
            param_1[0xb] = 0;
            param_1[0xc] = -0x340d631b7bddd9bb;
            *(undefined2 *)((long)param_1 + 0x6c) = 0;
            *(undefined4 *)(param_1 + 0xd) = 0;
            *(byte *)((long)param_1 + 0x6f) = *(byte *)((long)param_1 + 0x6f) & 0x80;
            param_1[0x14] = lVar4;
            *(undefined8 *)((long)param_1 + 0x72) = 0;
            param_1[0x10] = -0x340d631b7bddd9bb;
            *(undefined1 *)(param_1 + 0xe) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


