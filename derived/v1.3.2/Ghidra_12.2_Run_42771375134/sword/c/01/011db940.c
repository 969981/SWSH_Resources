/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011db940; name: FUN_011db940
 */


void FUN_011db940(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x80) != 0x10) {
    *(undefined4 *)(param_1 + 0x80) = 0x10;
  }
  lVar1 = *(long *)(param_1 + 0x2a8);
  *(undefined2 *)(param_1 + 0x84) = 0xfc18;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    FUN_011dcf40(param_1 + 0x90);
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    FUN_009b6bf0(param_1 + 0xb0);
  }
  lVar1 = *(long *)(param_1 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (*(long *)(param_1 + 0x2a8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x2a8) + 0x168) = 0;
  }
  FUN_007d4ff0(param_1 + 0xd0,0);
  lVar1 = *(long *)(param_1 + 0x358);
  if (lVar1 != 0) {
    puVar4 = *(undefined8 **)(param_1 + 0x350);
    do {
      puVar3 = (undefined8 *)*puVar4;
      lVar1 = lVar1 + -1;
      *puVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        pcVar2 = (code *)puVar3[1];
        if (pcVar2 != (code *)0x0) {
          puVar3[2] = 0;
          puVar3[3] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          (*pcVar2)(puVar3 + 4);
        }
        (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],puVar3,puVar4[2],puVar4[3]);
      }
      puVar4 = puVar4 + 4;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x358) = 0;
  FUN_007a22f0(*(undefined8 *)(param_1 + 0x2a0));
  FUN_007d4350(param_1 + 0xd0);
  return;
}


