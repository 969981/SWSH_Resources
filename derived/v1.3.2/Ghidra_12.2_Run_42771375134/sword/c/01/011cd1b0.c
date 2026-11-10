/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cd1b0; name: FUN_011cd1b0
 */


void FUN_011cd1b0(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x80) != 0x10) {
    *(undefined4 *)(lVar1 + 0x80) = 0x10;
  }
  lVar2 = *(long *)(lVar1 + 0x2a8);
  *(undefined2 *)(lVar1 + 0x84) = 0xfc18;
  *(undefined8 *)(lVar1 + 0x2a8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(lVar1 + 0x2b0);
  *(undefined8 *)(lVar1 + 0x2b0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = *(long *)(lVar1 + 0x88);
  *(undefined8 *)(lVar1 + 0x88) = 0;
  if (lVar2 != 0) {
    FUN_011cf2e0(lVar1 + 0x90);
  }
  lVar2 = *(long *)(lVar1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  if (lVar2 != 0) {
    FUN_009b6bf0(lVar1 + 0xb0);
  }
  lVar2 = *(long *)(lVar1 + 0x2b8);
  *(undefined8 *)(lVar1 + 0x2b8) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar1 + 0x2c0) = 0;
  if (*(long *)(lVar1 + 0x2a8) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x2a8) + 0x168) = 0;
  }
  FUN_007d4ff0(lVar1 + 0xd0,0);
  lVar2 = *(long *)(lVar1 + 0x358);
  if (lVar2 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x350);
    do {
      puVar4 = (undefined8 *)*puVar5;
      lVar2 = lVar2 + -1;
      *puVar5 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        pcVar3 = (code *)puVar4[1];
        if (pcVar3 != (code *)0x0) {
          puVar4[2] = 0;
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          (*pcVar3)(puVar4 + 4);
        }
        (**(code **)(*(long *)puVar5[1] + 0x18))((long *)puVar5[1],puVar4,puVar5[2],puVar5[3]);
      }
      puVar5 = puVar5 + 4;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(lVar1 + 0x358) = 0;
  FUN_007a22f0(*(undefined8 *)(lVar1 + 0x2a0));
  FUN_007d4350(lVar1 + 0xd0);
  return;
}


