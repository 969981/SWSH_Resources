/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136d680; name: FUN_0136d680
 */


void FUN_0136d680(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long local_48;
  long *local_40;
  long local_38;
  
  if (param_1 == (long *)0x0) {
    local_48 = 0;
    local_40 = (long *)0x0;
  }
  else {
    plVar5 = param_1 + 0xd;
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_48 = local_38;
    local_40 = plVar5;
    if ((local_38 != 0) && ((**(code **)(*(long *)(local_38 + 0x48) + 0x10))(), local_38 != 0)) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  FUN_007b59f0(*(undefined8 *)PTR_DAT_027104b0,&local_48);
  FUN_011fcef0(*(undefined8 *)PTR_DAT_02718f20);
  lVar3 = param_1[0x10];
  lVar2 = param_1[0x11];
  while (lVar1 = lVar2, lVar1 != lVar3) {
    if (*(long *)(lVar1 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + -0x10) = 0;
    }
    if (*(long *)(lVar1 + -0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + -0x18) = 0;
    }
    if (*(long *)(lVar1 + -0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + -0x20) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + -0x20) = 0;
    }
    if (*(long *)(lVar1 + -0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + -0x28) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + -0x28) = 0;
    }
    lVar2 = lVar1 + -0x48;
    if (*(long *)(lVar1 + -0x30) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + -0x30) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + -0x30) = 0;
    }
  }
  param_1[0x11] = lVar3;
  lVar3 = param_1[0x16];
  lVar2 = param_1[0x17];
  while (lVar1 = lVar2, lVar1 != lVar3) {
    pcVar4 = *(code **)(lVar1 + -0x78);
    lVar2 = lVar1 + -0x80;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar1 + -0x80) = 0;
      *(undefined8 *)(lVar1 + -0x78) = 0;
      (*pcVar4)(lVar1 + -0x60);
    }
  }
  param_1[0x17] = lVar3;
  if (param_1[0x1c] != 0) {
    FUN_0136f6e0();
    lVar3 = param_1[0x1c];
    param_1[0x1c] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x58) + 0x18))();
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


