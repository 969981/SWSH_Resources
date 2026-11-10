/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bfa070; name: FUN_00bfa070
 */


void FUN_00bfa070(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [13];
  long local_38;
  
  lVar4 = *(long *)(param_1 + 8);
  FUN_00bef3d0(lVar4);
  lVar3 = *(long *)(*(long *)(lVar4 + 0x4c0) + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_c0 = &local_38;
  local_38 = 0;
  local_b8 = (code *)0xecf72d521d07fad7;
  FUN_0108c840(lVar3,&local_c0,0);
  lVar1 = local_38;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_016b2d70(lVar1,0);
  local_b0 = FUN_00bfa400;
  local_a8 = &LAB_00bfa410;
  lVar3 = lVar4 + 0x100;
  local_c0 = (long *)&LAB_00bfa3e0;
  local_b8 = FUN_00bfa3f0;
  local_38 = 0x4e037850425419da;
  alStack_a0[0] = lVar4;
  lVar4 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar4 + 0x158);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = FUN_00bfa400;
  }
  else {
    *(undefined8 *)(lVar4 + 0x160) = 0;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    (*pcVar2)(lVar4 + 0x170);
    pcVar2 = local_b0;
    if (local_b0 == (code *)0x0) goto LAB_00bfa1c0;
  }
  (*pcVar2)(alStack_a0,lVar4 + 0x170);
  *(undefined1 **)(lVar4 + 0x168) = local_a8;
  *(code **)(lVar4 + 0x158) = local_b8;
  *(code **)(lVar4 + 0x160) = local_b0;
  *(undefined8 *)(lVar4 + 0x150) = local_c0;
LAB_00bfa1c0:
  local_38 = 0x4e03795042541b8d;
  lVar4 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar4 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x160) = 0;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    (*pcVar2)(lVar4 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar4 + 0x170);
    *(undefined1 **)(lVar4 + 0x168) = local_a8;
    *(code **)(lVar4 + 0x158) = local_b8;
    *(code **)(lVar4 + 0x160) = local_b0;
    *(undefined8 *)(lVar4 + 0x150) = local_c0;
  }
  local_38 = 0x4e03765042541674;
  lVar4 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar4 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x160) = 0;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    (*pcVar2)(lVar4 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar4 + 0x170);
    *(undefined1 **)(lVar4 + 0x168) = local_a8;
    *(code **)(lVar4 + 0x158) = local_b8;
    *(code **)(lVar4 + 0x160) = local_b0;
    *(undefined8 *)(lVar4 + 0x150) = local_c0;
  }
  local_38 = 0x4e03775042541827;
  lVar4 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar4 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0x160) = 0;
    *(undefined8 *)(lVar4 + 0x168) = 0;
    *(undefined8 *)(lVar4 + 0x150) = 0;
    *(undefined8 *)(lVar4 + 0x158) = 0;
    (*pcVar2)(lVar4 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar4 + 0x170);
    *(undefined1 **)(lVar4 + 0x168) = local_a8;
    *(code **)(lVar4 + 0x158) = local_b8;
    *(code **)(lVar4 + 0x160) = local_b0;
    *(undefined8 *)(lVar4 + 0x150) = local_c0;
  }
  local_38 = -0x168ea1d42a58655;
  lVar3 = FUN_00ffda40(lVar3,&local_38);
  pcVar2 = *(code **)(lVar3 + 0x158);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    *(undefined8 *)(lVar3 + 0x168) = 0;
    *(undefined8 *)(lVar3 + 0x150) = 0;
    *(undefined8 *)(lVar3 + 0x158) = 0;
    (*pcVar2)(lVar3 + 0x170);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(alStack_a0,lVar3 + 0x170);
    *(undefined1 **)(lVar3 + 0x168) = local_a8;
    *(code **)(lVar3 + 0x158) = local_b8;
    *(code **)(lVar3 + 0x160) = local_b0;
    *(undefined8 *)(lVar3 + 0x150) = local_c0;
  }
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (long *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar2)(alStack_a0);
  }
  return;
}


