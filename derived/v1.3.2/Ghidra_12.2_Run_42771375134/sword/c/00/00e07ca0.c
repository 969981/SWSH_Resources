/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e07ca0; name: FUN_00e07ca0
 */


void FUN_00e07ca0(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
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
  puVar2 = PTR_DAT_0271ef40;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[9] = (long)param_2;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  plVar5 = param_1 + 10;
  *plVar5 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x2a0,0x10);
    if (lVar4 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00e09270(lVar4,param_1[9]);
    *(long **)(lVar4 + 8) = param_2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x2a0;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar5 != 0) {
      (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
      *plVar5 = 0;
    }
    param_1[10] = lVar4;
    plVar5 = (long *)param_1[9];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x170,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_00e089e0(lVar4,param_1[9]);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x170;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0xb] != 0) {
        (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
        param_1[0xb] = 0;
      }
      param_1[0xb] = lVar4;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
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
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


