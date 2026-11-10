/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8740; name: FUN_00ff8740
 */


void FUN_00ff8740(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
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
  puVar2 = PTR_DAT_02723398;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)(puVar2 + 0x48);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_00ff87fc;
  }
  lVar3 = FUN_0075ecb0();
LAB_00ff87fc:
  param_1[0x12] = lVar3;
  param_1[0x13] = 0;
  plVar6 = (long *)param_1[1];
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0x60,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_01683b10(lVar5,plVar6);
    *(long **)(lVar5 + 8) = plVar6;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x60;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[0x17] != 0) {
      (**(code **)(*(long *)(param_1[0x17] + 0x48) + 0x18))();
      param_1[0x17] = 0;
    }
    param_1[0x17] = lVar5;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x5d0,0x10);
      if (plVar4 == (long *)0x0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_00ff9400(plVar4,param_1,"modalRoot",0);
      puVar2 = PTR_DAT_027233a0;
      *plVar4 = (long)(PTR_DAT_027233a0 + 0x10);
      plVar4[1] = (long)plVar6;
      plVar4[9] = (long)(puVar2 + 0xa8);
      plVar4[10] = (long)(puVar2 + 0xe8);
      plVar4[2] = (long)plVar4;
      plVar4[3] = 0x5d0;
      plVar4[4] = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(plVar4[9] + 0x10))();
      }
      if (param_1[0xc] != 0) {
        (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
        param_1[0xc] = 0;
      }
      param_1[0xc] = (long)plVar4;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x5d0,0x10);
        if (plVar4 == (long *)0x0) {
          (**(code **)(*plVar6 + 0xb8))(plVar6);
        }
        FUN_00ff9400(plVar4,param_1,"focusRoot",0);
        *plVar4 = (long)(puVar2 + 0x10);
        plVar4[1] = (long)plVar6;
        plVar4[9] = (long)(puVar2 + 0xa8);
        plVar4[10] = (long)(puVar2 + 0xe8);
        plVar4[2] = (long)plVar4;
        plVar4[3] = 0x5d0;
        plVar4[4] = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (plVar4 != (long *)0x0) {
          (**(code **)(plVar4[9] + 0x10))();
        }
        if (param_1[0xd] != 0) {
          (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
          param_1[0xd] = 0;
        }
        param_1[0xd] = (long)plVar4;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x5d0,0x10);
          if (plVar4 == (long *)0x0) {
            (**(code **)(*plVar6 + 0xb8))(plVar6);
          }
          FUN_00ff9400(plVar4,param_1,"unfocusRoot",0);
          *plVar4 = (long)(puVar2 + 0x10);
          plVar4[1] = (long)plVar6;
          plVar4[9] = (long)(puVar2 + 0xa8);
          plVar4[10] = (long)(puVar2 + 0xe8);
          plVar4[2] = (long)plVar4;
          plVar4[3] = 0x5d0;
          plVar4[4] = 0x10;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (plVar4 != (long *)0x0) {
            (**(code **)(plVar4[9] + 0x10))();
          }
          if (param_1[0xe] != 0) {
            (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
            param_1[0xe] = 0;
          }
          param_1[0xe] = (long)plVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


