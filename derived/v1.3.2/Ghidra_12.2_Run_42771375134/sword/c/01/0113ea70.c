/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0113ea70; name: FUN_0113ea70
 */


uint FUN_0113ea70(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long *local_140;
  long lStack_138;
  undefined8 local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  long lStack_b8;
  long local_58;
  long *local_50;
  long *local_48;
  
  pcVar7 = (code *)param_1[0xd];
  if (pcVar7 != (code *)0x0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    (*pcVar7)(param_1 + 0x10);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x10);
    lVar5 = *param_3;
    lVar1 = param_3[1];
    lVar2 = param_3[3];
    param_1[0xe] = param_3[2];
    param_1[0xf] = lVar2;
    param_1[0xc] = lVar5;
    param_1[0xd] = lVar1;
  }
  uVar4 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
  if ((uVar4 & 1) == 0) {
    local_e0 = (undefined1 *)((ulong)local_e0._4_4_ << 0x20);
  }
  else {
    if (*param_2 != 0) {
      plVar8 = (long *)param_1[1];
      local_48 = (long *)0x0;
      local_50 = plVar8;
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x90,8);
      if (plVar6 == (long *)0x0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_00883c20(plVar6,plVar8);
      plVar6[1] = (long)plVar8;
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
      (**(code **)(*plVar6 + 0x28))(plVar6,*param_2);
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
      lVar1 = local_58;
      local_e0 = &LAB_0113eda0;
      local_d8 = FUN_0113ee10;
      local_d0 = &LAB_0113ee50;
      puStack_c8 = &LAB_0113ee80;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      local_150 = (undefined1 *)0x0;
      puStack_148 = (undefined1 *)0x0;
      local_160 = (undefined1 *)0x0;
      local_158 = (code *)0x0;
      lStack_138 = lVar1;
      local_140 = param_1;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
      }
      local_160 = &LAB_0113eeb0;
      local_158 = FUN_0113ef00;
      local_150 = &LAB_0113ef40;
      puStack_148 = &LAB_0113ef70;
      uVar3 = FUN_0129fd80(&local_50,&local_e0,&local_160);
      pcVar7 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = (undefined1 *)0x0;
        puStack_148 = (undefined1 *)0x0;
        local_160 = (undefined1 *)0x0;
        local_158 = (code *)0x0;
        (*pcVar7)(&local_140);
      }
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      }
      pcVar7 = local_d8;
      if (local_d8 != (code *)0x0) {
        local_d0 = (undefined1 *)0x0;
        puStack_c8 = (undefined1 *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_d8 = (code *)0x0;
        (*pcVar7)(&local_c0);
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if ((uVar3 & 1) == 0) {
        local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,2);
        (*(code *)param_1[0xc])(param_1 + 0x10,&local_e0);
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
      }
      goto LAB_0113ed80;
    }
    local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,2);
  }
  (*(code *)param_1[0xc])(param_1 + 0x10,&local_e0);
  uVar3 = 0;
LAB_0113ed80:
  return uVar3 & 1;
}


