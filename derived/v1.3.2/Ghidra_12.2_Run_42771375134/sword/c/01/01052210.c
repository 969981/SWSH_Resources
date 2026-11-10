/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052210; name: FUN_01052210
 */


void FUN_01052210(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_00701720(param_1,0);
  puVar2 = PTR_DAT_027239b8;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0xa0);
  param_1[10] = (long)(puVar2 + 0xe0);
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0xb30,0x10);
    if (lVar4 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    plVar1 = param_1 + 0x29;
    FUN_01054da0(lVar4,param_1,param_2,param_3,param_4);
    *(long **)(lVar4 + 8) = param_3;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb30;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    *plVar1 = lVar4;
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x148) + 0x130);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_3;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_3 + 0x10))(param_3,0x1b0,8);
      if (lVar4 == 0) {
        (**(code **)(*param_3 + 0xb8))(param_3);
      }
      FUN_006e02d0(lVar4,uVar5);
      *(long **)(lVar4 + 8) = param_3;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x1b0;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0x2a] != 0) {
        (**(code **)(*(long *)(param_1[0x2a] + 0x48) + 0x18))();
        param_1[0x2a] = 0;
      }
      param_1[0x2a] = lVar4;
      *(undefined4 *)(lVar4 + 0x15c) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


