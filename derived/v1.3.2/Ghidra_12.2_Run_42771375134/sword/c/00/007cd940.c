/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007cd940; name: FUN_007cd940
 */


void FUN_007cd940(long *param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02716c70 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
  }
  else {
    *(undefined8 *)(param_1[3] + 0x168) = 0;
    lVar1 = param_1[3];
    param_1[3] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = param_1[0x23];
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xb] = param_1[10];
  if (lVar1 != 0) {
    lVar4 = param_1[0x22] + 0x20;
    do {
      pcVar3 = *(code **)(lVar4 + -0x18);
      lVar1 = lVar1 + -1;
      if (pcVar3 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x10) = 0;
        *(undefined8 *)(lVar4 + -8) = 0;
        *(undefined8 *)(lVar4 + -0x20) = 0;
        *(undefined8 *)(lVar4 + -0x18) = 0;
        (*pcVar3)(lVar4);
      }
      lVar4 = lVar4 + 0x80;
    } while (lVar1 != 0);
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],param_1[0x22],param_1[0x24] << 7,0x10);
  }
  plVar2 = (long *)param_1[0x20];
  if (param_1 + 0x1c == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_007cda1c:
    (*pcVar3)();
  }
  else if (plVar2 != (long *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    goto LAB_007cda1c;
  }
  plVar2 = (long *)param_1[0x18];
  if (param_1 + 0x14 == plVar2) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
  }
  else {
    if (plVar2 == (long *)0x0) goto LAB_007cda4c;
    pcVar3 = *(code **)(*plVar2 + 0x28);
  }
  (*pcVar3)();
LAB_007cda4c:
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],lVar1,param_1[0xc] - lVar1,8);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    param_1[5] = lVar1;
    (**(code **)(*(long *)param_1[7] + 0x18))((long *)param_1[7],lVar1,param_1[6] - lVar1,8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


