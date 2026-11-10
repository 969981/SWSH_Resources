/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f2f0; name: FUN_00a0f2f0
 */


void FUN_00a0f2f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_38;
  long local_28;
  
  uVar3 = 0;
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[3];
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = param_2[6];
  uVar4 = param_2[7];
  uVar2 = param_2[8];
  *(undefined8 *)(param_1 + 0x48) = param_2[5];
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  local_28 = *(long *)(param_1 + 0x20);
  local_38 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    uVar3 = FUN_0167b6b0(*(undefined8 *)(lVar5 + 0x1b0),&local_28);
  }
  uVar4 = 0;
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  if ((local_38 != -0x340d631b7bddd9bb) && (local_38 != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar5 + 0x1b0),&local_38);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  local_28 = *(long *)(param_1 + 0x60);
  if ((local_28 != -0x340d631b7bddd9bb) && (local_28 != 0)) {
    FUN_00ffd010(lVar5,&local_28);
  }
  return;
}


