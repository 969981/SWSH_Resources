/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b0f00; name: FUN_009b0f00
 */


void FUN_009b0f00(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_009c4380(*(undefined8 *)(param_1 + 0x3b8));
  lVar1 = *(long *)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x58) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x148);
  if ((lVar1 == 0) || (uVar2 = FUN_007d4b30(lVar1 + 0xd0), (uVar2 & 1) == 0)) {
    return;
  }
  if (*(int *)(lVar1 + 0x80) != 0x10) {
    *(undefined4 *)(lVar1 + 0x80) = 0x10;
  }
  lVar3 = *(long *)(lVar1 + 0x2a8);
  *(undefined2 *)(lVar1 + 0x84) = 0xfc18;
  *(undefined8 *)(lVar1 + 0x2a8) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(lVar1 + 0x2b0);
  *(undefined8 *)(lVar1 + 0x2b0) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(lVar1 + 0x88);
  *(undefined8 *)(lVar1 + 0x88) = 0;
  if (lVar3 != 0) {
    FUN_009b6cc0(lVar1 + 0x90);
  }
  lVar3 = *(long *)(lVar1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  if (lVar3 != 0) {
    FUN_009b6bf0(lVar1 + 0xb0);
  }
  lVar3 = *(long *)(lVar1 + 0x2b8);
  *(undefined8 *)(lVar1 + 0x2b8) = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar1 + 0x2c0) = 0;
  if (*(long *)(lVar1 + 0x2a8) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x2a8) + 0x168) = 0;
  }
  FUN_007d4ff0(lVar1 + 0xd0,0);
  lVar3 = *(long *)(lVar1 + 0x358);
  if (lVar3 != 0) {
    puVar6 = *(undefined8 **)(lVar1 + 0x350);
    do {
      puVar5 = (undefined8 *)*puVar6;
      lVar3 = lVar3 + -1;
      *puVar6 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        pcVar4 = (code *)puVar5[1];
        if (pcVar4 != (code *)0x0) {
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
          (*pcVar4)(puVar5 + 4);
        }
        (**(code **)(*(long *)puVar6[1] + 0x18))((long *)puVar6[1],puVar5,puVar6[2],puVar6[3]);
      }
      puVar6 = puVar6 + 4;
    } while (lVar3 != 0);
  }
  *(undefined8 *)(lVar1 + 0x358) = 0;
  FUN_007a22f0(*(undefined8 *)(lVar1 + 0x2a0));
  FUN_007d4350(lVar1 + 0xd0);
  return;
}


