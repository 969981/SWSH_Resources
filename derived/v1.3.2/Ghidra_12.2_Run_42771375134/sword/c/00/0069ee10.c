/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069ee10; name: FUN_0069ee10
 */


void FUN_0069ee10(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_3;
  param_1[1] = 0;
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0069f5a0(uVar2,param_3);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    puVar4 = (undefined8 *)param_1[2];
    param_1[2] = uVar2;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar4,param_1[4],param_1[5]);
    }
    param_1[3] = param_2;
    param_1[4] = 0x40;
    param_1[5] = 8;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x38,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_006a9b40(uVar2,param_3);
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar4 = (undefined8 *)param_1[6];
      param_1[6] = uVar2;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],puVar4,param_1[8],param_1[9]);
      }
      param_1[7] = param_2;
      param_1[8] = 0x38;
      param_1[9] = 8;
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x40,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_006abbe0(uVar2,param_3);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        puVar4 = (undefined8 *)param_1[10];
        param_1[10] = uVar2;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4);
          (**(code **)(*(long *)param_1[0xb] + 0x18))
                    ((long *)param_1[0xb],puVar4,param_1[0xc],param_1[0xd]);
        }
        param_1[0xb] = param_2;
        param_1[0xc] = 0x40;
        param_1[0xd] = 8;
        uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x40,0x10);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          FUN_006ab9c0(uVar2,param_3);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          puVar4 = (undefined8 *)param_1[0xe];
          param_1[0xe] = uVar2;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            (**(code **)(*(long *)param_1[0xf] + 0x18))
                      ((long *)param_1[0xf],puVar4,param_1[0x10],param_1[0x11]);
          }
          param_1[0xf] = param_2;
          param_1[0x10] = 0x40;
          param_1[0x11] = 0x10;
          uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x10,8);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            FUN_006a9a70(uVar2,param_3);
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            puVar4 = (undefined8 *)param_1[0x12];
            param_1[0x12] = uVar2;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4);
              (**(code **)(*(long *)param_1[0x13] + 0x18))
                        ((long *)param_1[0x13],puVar4,param_1[0x14],param_1[0x15]);
            }
            param_1[0x13] = param_2;
            param_1[0x14] = 0x10;
            param_1[0x15] = 8;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


