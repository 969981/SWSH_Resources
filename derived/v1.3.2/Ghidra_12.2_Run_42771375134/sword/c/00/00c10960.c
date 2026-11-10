/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c10960; name: FUN_00c10960
 */


void FUN_00c10960(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *local_160;
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  long alStack_140 [12];
  undefined **local_e0;
  long lStack_d8;
  undefined ***local_c0;
  undefined **local_b0;
  long lStack_a8;
  undefined ***local_90;
  undefined **local_80;
  long lStack_78;
  undefined ***local_60;
  long local_48;
  
  if (param_2 != 0) {
    return;
  }
  local_80 = &PTR_LAB_0263bfd8;
  lStack_78 = param_1;
  local_60 = &local_80;
  FUN_00bef0c0(param_1,3,&local_80);
  if (&local_80 == local_60) {
    pcVar2 = (code *)(*local_60)[4];
LAB_00c109c4:
    (*pcVar2)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_60)[5];
    goto LAB_00c109c4;
  }
  local_b0 = &PTR_LAB_0263c020;
  lStack_a8 = param_1;
  local_90 = &local_b0;
  FUN_00bef0c0(param_1,0,&local_b0);
  if (&local_b0 == local_90) {
    pcVar2 = (code *)(*local_90)[4];
LAB_00c10a10:
    (*pcVar2)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_90)[5];
    goto LAB_00c10a10;
  }
  local_e0 = &PTR_LAB_0263c068;
  lStack_d8 = param_1;
  local_c0 = &local_e0;
  FUN_00bef0c0(param_1,1,&local_e0);
  if (&local_e0 == local_c0) {
    pcVar2 = (code *)(*local_c0)[4];
LAB_00c10a5c:
    (*pcVar2)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_c0)[5];
    goto LAB_00c10a5c;
  }
  FUN_00bef170(param_1);
  FUN_00bef3d0(param_1);
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_160 = &local_48;
  local_48 = 0;
  local_158 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar3,&local_160,0);
  lVar1 = local_48;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
LAB_00c10d3c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_016b2d70(lVar1,0);
  local_150 = FUN_00c114c0;
  local_148 = &LAB_00c114d0;
  local_160 = (long *)&LAB_00c114a0;
  local_158 = FUN_00c114b0;
  local_48 = 0x4e037850425419da;
  alStack_140[0] = param_1;
  lVar3 = FUN_00ffda40(param_1 + 0x100,&local_48);
  pcVar2 = *(code **)(lVar3 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar2)(lVar3 + 0x170);
  }
  if (local_150 != (code *)0x0) {
    (*local_150)(alStack_140,lVar3 + 0x170);
    *(undefined1 **)(lVar3 + 0x168) = local_148;
    *(code **)(lVar3 + 0x158) = local_158;
    *(code **)(lVar3 + 0x160) = local_150;
    *(undefined8 *)(lVar3 + 0x150) = local_160;
  }
  local_48 = 0x4e03795042541b8d;
  lVar3 = FUN_00ffda40(param_1 + 0x100,&local_48);
  pcVar2 = *(code **)(lVar3 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar2)(lVar3 + 0x170);
  }
  if (local_150 != (code *)0x0) {
    (*local_150)(alStack_140,lVar3 + 0x170);
    *(undefined1 **)(lVar3 + 0x168) = local_148;
    *(code **)(lVar3 + 0x158) = local_158;
    *(code **)(lVar3 + 0x160) = local_150;
    *(undefined8 *)(lVar3 + 0x150) = local_160;
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (long *)0x0;
    local_158 = (code *)0x0;
    (*pcVar2)(alStack_140);
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_160 = &local_48;
  local_48 = 0;
  local_158 = (code *)0xecf734521d0806bc;
  FUN_0108c840(lVar3,&local_160,0);
  lVar1 = local_48;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) goto LAB_00c10d3c;
  pcVar2 = *(code **)(lVar1 + 0x138);
  local_160 = (long *)&LAB_00c114e0;
  local_158 = FUN_00c11500;
  local_150 = FUN_00c11510;
  local_148 = &LAB_00c11520;
  alStack_140[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x140) = 0;
    *(undefined8 *)(lVar1 + 0x148) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    (*pcVar2)(lVar1 + 0x150);
    if (local_150 == (code *)0x0) goto LAB_00c10d08;
  }
  (*local_150)(alStack_140,lVar1 + 0x150);
  *(undefined1 **)(lVar1 + 0x148) = local_148;
  *(code **)(lVar1 + 0x138) = local_158;
  *(code **)(lVar1 + 0x140) = local_150;
  *(undefined8 *)(lVar1 + 0x130) = local_160;
LAB_00c10d08:
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (long *)0x0;
    local_158 = (code *)0x0;
    (*pcVar2)(alStack_140);
  }
  return;
}


