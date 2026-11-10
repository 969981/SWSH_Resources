/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e870e0; name: FUN_00e870e0
 */


void FUN_00e870e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
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
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_0271fe50;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)(puVar2 + 0x48);
  plVar8 = param_1 + 0xb;
  *plVar8 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x30,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    puVar2 = PTR_DAT_0271fe58;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = (long)(puVar2 + 0x10);
    plVar5[1] = (long)param_2;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar7 = (undefined8 *)*plVar8;
    *plVar8 = (long)plVar5;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(*(long *)param_1[0xc] + 0x18))
                ((long *)param_1[0xc],puVar7,param_1[0xd],param_1[0xe]);
    }
    param_1[0xc] = (long)param_2;
    param_1[0xd] = 0x30;
    param_1[0xe] = 8;
    uVar3 = FUN_0075ede0();
    FUN_0075eef0(0);
    lVar6 = *plVar8;
    plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x60,8);
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      plVar5[2] = 0x800;
      plVar5[3] = 8;
      plVar5[8] = 0;
      plVar5[9] = 1;
      *(undefined2 *)(plVar5 + 10) = 0x100;
      *plVar5 = lVar6;
      *(undefined1 *)(plVar5 + 1) = 0;
      plVar5[0xb] = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      lVar4 = param_1[0xf];
      param_1[0xf] = (long)plVar5;
      if (lVar4 != 0) {
        FUN_00e875f0(param_1 + 0x10);
      }
      param_1[0x11] = 0x60;
      param_1[0x12] = 8;
      param_1[0x10] = (long)param_2;
      FUN_0075eef0(uVar3 & 1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


