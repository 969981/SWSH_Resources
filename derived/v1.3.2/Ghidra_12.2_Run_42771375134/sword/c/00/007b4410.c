/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b4410; name: FUN_007b4410
 */


void FUN_007b4410(long *param_1,long *param_2)

{
  void *pvVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar8 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar8;
  puVar4 = PTR_DAT_02716a28;
  *PTR_DAT_02716a20 = 1;
  param_1[0x16] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[9] = (long)(puVar4 + 0x40);
  param_1[10] = (long)param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = (long)param_2;
  param_1[0x11] = 0xfffffffffffffff;
  param_1[0x18] = (long)param_2;
  param_1[0x19] = 0xfffffffffffffff;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  FUN_007b68a0(param_1 + 0x18,uVar6,8,param_1[0x20] + param_1[0x21] * 0x10,0,0);
  param_1[0x24] = (long)param_2;
  param_1[0x25] = 0x1fffffffffffffff;
  param_1[0x2a] = 0;
  param_1[0x2c] = (long)param_2;
  param_1[0x2d] = 0x1fffffffffffffff;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  pvVar7 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  pvVar10 = (void *)param_1[0x34];
  pvVar9 = pvVar7;
  if (pvVar10 != (void *)0x0) {
    lVar5 = param_1[0x35];
    pvVar1 = (void *)((long)pvVar10 + lVar5 * 8);
    if (lVar5 == 0) {
      lVar5 = -(long)pvVar1;
    }
    else {
      memmove(pvVar7,pvVar10,lVar5 * 8);
      pvVar9 = (void *)((long)pvVar7 + lVar5 * 8);
      lVar5 = param_1[0x35] * 8 - (long)pvVar1;
    }
    sVar2 = (long)pvVar10 + lVar5;
    if (sVar2 != 0) {
      memmove(pvVar9,pvVar1,sVar2);
      pvVar9 = (void *)((long)pvVar9 + sVar2);
    }
    (**(code **)(*(long *)param_1[0x2c] + 0x18))
              ((long *)param_1[0x2c],param_1[0x34],param_1[0x36] << 3,8);
  }
  param_1[0x34] = (long)pvVar7;
  param_1[0x35] = (long)pvVar9 - (long)pvVar7 >> 3;
  param_1[0x36] = 8;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
  if (lVar8 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_007bd250(lVar8,param_2);
  *(long **)(lVar8 + 8) = param_2;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 400;
  *(undefined8 *)(lVar8 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  param_1[0x38] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
  }
  *(undefined4 *)((long)param_1 + 0x21c) = 1;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x46] = (long)param_2;
  param_1[0x47] = 0x7fffffffffffffff;
  param_1[0x4c] = 0;
  param_1[0x4e] = (long)param_2;
  param_1[0x4f] = 0x7fffffffffffffff;
  param_1[0x54] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  pvVar7 = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x10,2);
  pvVar10 = (void *)param_1[0x56];
  pvVar9 = pvVar7;
  if (pvVar10 != (void *)0x0) {
    lVar5 = param_1[0x57];
    pvVar1 = (void *)((long)pvVar10 + lVar5 * 2);
    if (lVar5 == 0) {
      lVar5 = -(long)pvVar1;
    }
    else {
      memmove(pvVar7,pvVar10,lVar5 * 2);
      pvVar9 = (void *)((long)pvVar7 + lVar5 * 2);
      lVar5 = param_1[0x57] * 2 - (long)pvVar1;
    }
    sVar2 = (long)pvVar10 + lVar5;
    if (sVar2 != 0) {
      memmove(pvVar9,pvVar1,sVar2);
      pvVar9 = (void *)((long)pvVar9 + sVar2);
    }
    (**(code **)(*(long *)param_1[0x4e] + 0x18))
              ((long *)param_1[0x4e],param_1[0x56],param_1[0x58] << 1,2);
  }
  param_1[0x57] = (long)pvVar9 - (long)pvVar7 >> 1;
  param_1[0x56] = (long)pvVar7;
  param_1[0x58] = 8;
  return;
}


