/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01493cf0; name: FUN_01493cf0
 */


void FUN_01493cf0(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  FUN_0073d0f0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),param_1 + 0x78);
  FUN_0073d0f0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),param_1 + 0x7c);
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = *(undefined8 *)((long)param_2 + 0x15);
  *(undefined8 *)(param_1 + 0x4c) = *param_2;
  *(undefined8 *)(param_1 + 0x61) = uVar3;
  *(undefined8 *)(param_1 + 0x5c) = uVar2;
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  *(undefined1 *)(param_1 + 0x84) = 0;
  local_24 = 1;
  FUN_0073d480(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
  local_24 = 1;
  FUN_0073d4a0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
  local_24 = 0;
  FUN_0073d490(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
  local_24 = 0xffffffff;
  FUN_0073d460(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
  local_24 = 0;
  FUN_0073d470(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
  FUN_01493de0(param_1);
  return;
}


