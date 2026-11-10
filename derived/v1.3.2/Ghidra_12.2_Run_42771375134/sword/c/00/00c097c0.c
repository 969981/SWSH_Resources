/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c097c0; name: FUN_00c097c0
 */


void FUN_00c097c0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined **local_d0;
  long lStack_c8;
  undefined ***local_b0;
  undefined **local_a0;
  long lStack_98;
  undefined ***local_80;
  undefined **local_70;
  long lStack_68;
  undefined ***local_50;
  long local_38;
  
  if (param_2 != 0) {
    return;
  }
  FUN_00beefb0(param_1,"msg_ui_btlspot_help_00");
  local_70 = &PTR_LAB_0263b600;
  lStack_68 = param_1;
  local_50 = &local_70;
  FUN_00bef0c0(param_1,3,&local_70);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
LAB_00c09838:
    (*pcVar3)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_50)[5];
    goto LAB_00c09838;
  }
  local_a0 = &PTR_LAB_0263b648;
  lStack_98 = param_1;
  local_80 = &local_a0;
  FUN_00bef0c0(param_1,0,&local_a0);
  if (&local_a0 == local_80) {
    pcVar3 = (code *)(*local_80)[4];
LAB_00c09884:
    (*pcVar3)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_80)[5];
    goto LAB_00c09884;
  }
  local_d0 = &PTR_LAB_0263b690;
  lStack_c8 = param_1;
  local_b0 = &local_d0;
  FUN_00bef0c0(param_1,1,&local_d0);
  if (&local_d0 == local_b0) {
    pcVar3 = (code *)(*local_b0)[4];
  }
  else {
    if (local_b0 == (undefined ***)0x0) goto LAB_00c098d4;
    pcVar3 = (code *)(*local_b0)[5];
  }
  (*pcVar3)();
LAB_00c098d4:
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
  lVar4 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_150 = &local_38;
  local_38 = 0;
  local_148 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar4,&local_150,0);
  lVar2 = local_38;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_016b2d70(lVar2,0);
  local_150 = (long *)&LAB_00c0a210;
  local_148 = FUN_00c0a220;
  local_140 = FUN_00c0a230;
  local_138 = &LAB_00c0a240;
  pcVar3 = FUN_00c0a220;
  alStack_130[0] = param_1;
  if (param_3 < 8) {
    uVar1 = 1 << (ulong)(param_3 & 0x1f);
    param_1 = param_1 + 0x100;
    if ((uVar1 & 0x3c) == 0) {
      if ((uVar1 & 3) == 0) {
        local_38 = 0x5197c0536522b057;
        lVar4 = FUN_00ffda40(param_1,&local_38);
        pcVar3 = *(code **)(lVar4 + 0x158);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + 0x160) = 0;
          *(undefined8 *)(lVar4 + 0x168) = 0;
          *(undefined8 *)(lVar4 + 0x150) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
          (*pcVar3)(lVar4 + 0x170);
        }
        if (local_140 != (code *)0x0) {
          (*local_140)(alStack_130,lVar4 + 0x170);
          *(undefined1 **)(lVar4 + 0x168) = local_138;
          *(code **)(lVar4 + 0x158) = local_148;
          *(code **)(lVar4 + 0x160) = local_140;
          *(undefined8 *)(lVar4 + 0x150) = local_150;
        }
        local_38 = 0x5c4cd7536bc7c26c;
      }
      else {
        local_38 = 0x5197be536522acf1;
        lVar4 = FUN_00ffda40(param_1,&local_38);
        pcVar3 = *(code **)(lVar4 + 0x158);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + 0x160) = 0;
          *(undefined8 *)(lVar4 + 0x168) = 0;
          *(undefined8 *)(lVar4 + 0x150) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
          (*pcVar3)(lVar4 + 0x170);
        }
        if (local_140 != (code *)0x0) {
          (*local_140)(alStack_130,lVar4 + 0x170);
          *(undefined1 **)(lVar4 + 0x168) = local_138;
          *(code **)(lVar4 + 0x158) = local_148;
          *(code **)(lVar4 + 0x160) = local_140;
          *(undefined8 *)(lVar4 + 0x150) = local_150;
        }
        local_38 = 0x5c4cd5536bc7bf06;
        lVar4 = FUN_00ffda40(param_1,&local_38);
        pcVar3 = *(code **)(lVar4 + 0x158);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + 0x160) = 0;
          *(undefined8 *)(lVar4 + 0x168) = 0;
          *(undefined8 *)(lVar4 + 0x150) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
          (*pcVar3)(lVar4 + 0x170);
        }
        if (local_140 != (code *)0x0) {
          (*local_140)(alStack_130,lVar4 + 0x170);
          *(undefined1 **)(lVar4 + 0x168) = local_138;
          *(code **)(lVar4 + 0x158) = local_148;
          *(code **)(lVar4 + 0x160) = local_140;
          *(undefined8 *)(lVar4 + 0x150) = local_150;
        }
        local_38 = 0x406dd8535b75cfdf;
        lVar4 = FUN_00ffda40(param_1,&local_38);
        pcVar3 = *(code **)(lVar4 + 0x158);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(lVar4 + 0x160) = 0;
          *(undefined8 *)(lVar4 + 0x168) = 0;
          *(undefined8 *)(lVar4 + 0x150) = 0;
          *(undefined8 *)(lVar4 + 0x158) = 0;
          (*pcVar3)(lVar4 + 0x170);
        }
        if (local_140 != (code *)0x0) {
          (*local_140)(alStack_130,lVar4 + 0x170);
          *(undefined1 **)(lVar4 + 0x168) = local_138;
          *(code **)(lVar4 + 0x158) = local_148;
          *(code **)(lVar4 + 0x160) = local_140;
          *(undefined8 *)(lVar4 + 0x150) = local_150;
        }
        local_38 = 0x4b228f53621a3ed4;
      }
    }
    else {
      local_38 = 0x5197bf536522aea4;
      lVar4 = FUN_00ffda40(param_1,&local_38);
      pcVar3 = *(code **)(lVar4 + 0x158);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x160) = 0;
        *(undefined8 *)(lVar4 + 0x168) = 0;
        *(undefined8 *)(lVar4 + 0x150) = 0;
        *(undefined8 *)(lVar4 + 0x158) = 0;
        (*pcVar3)(lVar4 + 0x170);
      }
      if (local_140 != (code *)0x0) {
        (*local_140)(alStack_130,lVar4 + 0x170);
        *(undefined1 **)(lVar4 + 0x168) = local_138;
        *(code **)(lVar4 + 0x158) = local_148;
        *(code **)(lVar4 + 0x160) = local_140;
        *(undefined8 *)(lVar4 + 0x150) = local_150;
      }
      local_38 = 0x5c4cd8536bc7c41f;
      lVar4 = FUN_00ffda40(param_1,&local_38);
      pcVar3 = *(code **)(lVar4 + 0x158);
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + 0x160) = 0;
        *(undefined8 *)(lVar4 + 0x168) = 0;
        *(undefined8 *)(lVar4 + 0x150) = 0;
        *(undefined8 *)(lVar4 + 0x158) = 0;
        (*pcVar3)(lVar4 + 0x170);
      }
      if (local_140 != (code *)0x0) {
        (*local_140)(alStack_130,lVar4 + 0x170);
        *(undefined1 **)(lVar4 + 0x168) = local_138;
        *(code **)(lVar4 + 0x158) = local_148;
        *(code **)(lVar4 + 0x160) = local_140;
        *(undefined8 *)(lVar4 + 0x150) = local_150;
      }
      local_38 = 0x406dd5535b75cac6;
    }
    lVar4 = FUN_00ffda40(param_1,&local_38);
    pcVar3 = *(code **)(lVar4 + 0x158);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x160) = 0;
      *(undefined8 *)(lVar4 + 0x168) = 0;
      *(undefined8 *)(lVar4 + 0x150) = 0;
      *(undefined8 *)(lVar4 + 0x158) = 0;
      (*pcVar3)(lVar4 + 0x170);
    }
    if (local_140 != (code *)0x0) {
      (*local_140)(alStack_130,lVar4 + 0x170);
      *(undefined1 **)(lVar4 + 0x168) = local_138;
      *(code **)(lVar4 + 0x158) = local_148;
      *(code **)(lVar4 + 0x160) = local_140;
      *(undefined8 *)(lVar4 + 0x150) = local_150;
    }
    pcVar3 = local_148;
    if (local_148 == (code *)0x0) {
      return;
    }
  }
  local_140 = (code *)0x0;
  local_138 = (undefined1 *)0x0;
  local_150 = (long *)0x0;
  local_148 = (code *)0x0;
  (*pcVar3)(alStack_130);
  return;
}


