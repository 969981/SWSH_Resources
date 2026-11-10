/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a55480; name: FUN_00a55480
 */


void FUN_00a55480(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_28;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = 0;
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  uVar4 = param_2[7];
  uVar5 = param_2[8];
  uVar2 = param_2[10];
  *(undefined8 *)(param_1 + 0x60) = param_2[9];
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  lVar1 = *(long *)(param_1 + 0x10);
  local_28 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar4 = param_2[0xb];
  uVar5 = param_2[0xc];
  uVar2 = param_2[0xe];
  *(undefined8 *)(param_1 + 0x80) = param_2[0xd];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar3 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x20);
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  local_28 = *(long *)(param_1 + 0x28);
  uVar4 = 0;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x30);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  local_28 = *(long *)(param_1 + 0x38);
  uVar4 = 0;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x40);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  local_28 = *(long *)(param_1 + 0x48);
  uVar4 = 0;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x50);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  local_28 = *(long *)(param_1 + 0x58);
  uVar4 = 0;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x60);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 200) = uVar5;
  local_28 = *(long *)(param_1 + 0x68);
  uVar4 = 0;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  local_28 = *(long *)(param_1 + 0x70);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar5 = FUN_0167b6b0(*(undefined8 *)(lVar1 + 0x1b0),&local_28);
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  return;
}


