/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a1a30; name: FUN_014a1a30
 */


void FUN_014a1a30(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_0272a1b0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  param_1[0x18] = -0x75450d8d5cb816ae;
  *(undefined4 *)(param_1 + 0x19) = 4;
  *(undefined1 *)((long)param_1 + 0xcc) = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar5 = param_1 + 0x1e;
  *plVar5 = 0;
  plVar4 = (long *)param_1[1];
  *(undefined4 *)((long)param_1 + 0xce) = 0xffff;
  puVar1 = PTR_DAT_02710860;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar3,0x20);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*plVar5 != 0) {
      (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
      *plVar5 = 0;
    }
    param_1[0x1e] = lVar3;
    plVar4 = (long *)param_1[1];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0077d050(lVar3,0x20);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (param_1[0x1f] != 0) {
        (**(code **)(*(long *)(param_1[0x1f] + 0x48) + 0x18))();
        param_1[0x1f] = 0;
      }
      param_1[0x1f] = lVar3;
      plVar4 = (long *)param_1[1];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0xb8))(plVar4);
        }
        FUN_0077d050(lVar3,0x20);
        *(long **)(lVar3 + 8) = plVar4;
        *(long *)(lVar3 + 0x10) = lVar3;
        *(undefined8 *)(lVar3 + 0x18) = 0x80;
        *(undefined8 *)(lVar3 + 0x20) = 8;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (param_1[0x20] != 0) {
          (**(code **)(*(long *)(param_1[0x20] + 0x48) + 0x18))();
          param_1[0x20] = 0;
        }
        param_1[0x20] = lVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


