/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dfab0; name: FUN_008dfab0
 */


void FUN_008dfab0(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_02717c30;
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
  param_1[0xc] = 0;
  param_1[0x52] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x8c] = param_3;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00866110(lVar4,param_2);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[0xc] != 0) {
      (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
      param_1[0xc] = 0;
    }
    param_1[0xc] = lVar4;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x48,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      FUN_008e5cf0(lVar3,param_2);
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      plVar5 = (long *)param_1[0x4f];
      param_1[0x4f] = lVar3;
      if (plVar5 != (long *)0x0) {
        lVar3 = *plVar5;
        *plVar5 = 0;
        if (lVar3 != 0) {
          (**(code **)(*(long *)plVar5[1] + 0x18))((long *)plVar5[1],lVar3,plVar5[2],plVar5[3]);
        }
        (**(code **)(*(long *)param_1[0x50] + 0x18))
                  ((long *)param_1[0x50],plVar5,param_1[0x51],param_1[0x52]);
      }
      param_1[0x50] = (long)param_2;
      param_1[0x51] = 0x48;
      param_1[0x52] = 8;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


