/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bbfa0; name: FUN_010bbfa0
 */


void FUN_010bbfa0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long *local_140;
  long lStack_138;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  long lStack_b8;
  long local_58;
  long *local_50;
  long *local_48;
  
  uVar3 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x7c) = 0xc;
  }
  else {
    FUN_010bc320(param_1,0xa684a39374b0128c,0,0,1,0);
    plVar4 = (long *)(*(long *)(param_1[0x15] + 0x5d0) + 0x60);
    (**(code **)(*plVar4 + 8))(plVar4,1);
    *(undefined4 *)((long)param_1 + 0x7c) = 10;
    puVar7 = *(undefined8 **)(param_1[0xd] + 0x60);
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_010aad10();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
    plVar4 = (long *)param_1[1];
    uVar8 = puVar7[2];
    local_48 = (long *)0x0;
    local_50 = plVar4;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar4;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    plVar6 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x90,8);
    if (plVar6 == (long *)0x0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_00883c20(plVar6,plVar4);
    plVar6[1] = (long)plVar4;
    plVar6[2] = (long)plVar6;
    plVar6[3] = 0x90;
    plVar6[4] = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (plVar6 != (long *)0x0) {
      (**(code **)(plVar6[9] + 0x10))();
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*(long *)((long)local_48 + 0x48) + 0x18))();
    }
    local_48 = plVar6;
    FUN_010a80b0(&local_e0,uVar8);
    (**(code **)(*plVar6 + 0x28))(plVar6,local_e0);
    if (local_e0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
      local_e0 = (undefined1 *)0x0;
    }
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    lVar5 = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    lStack_b8 = lVar5;
    local_c0 = param_1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar2 = local_58;
    local_e0 = &LAB_010bee30;
    local_d8 = FUN_010beed0;
    local_d0 = &LAB_010bef10;
    puStack_c8 = &LAB_010bef40;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    lStack_138 = lVar2;
    local_140 = param_1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_160 = &LAB_010bef70;
    local_158 = FUN_010befd0;
    local_150 = &LAB_010bf010;
    puStack_148 = &LAB_010bf040;
    uVar3 = FUN_0129fd80(&local_50,&local_e0,&local_160);
    pcVar1 = local_158;
    if (local_158 != (code *)0x0) {
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      (*pcVar1)(&local_140);
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    pcVar1 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      puStack_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar1)(&local_c0);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if ((uVar3 & 1) == 0) {
      FUN_010bc320(param_1,0xae5e61d114748549,0,1,1,0);
      *(undefined4 *)((long)param_1 + 0x7c) = 0xb;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(local_48[9] + 0x18))();
    }
  }
  return;
}


