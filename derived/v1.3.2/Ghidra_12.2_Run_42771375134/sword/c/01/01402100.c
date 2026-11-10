/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01402100; name: FUN_01402100
 */


void FUN_01402100(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  FUN_013ff9c0();
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),1);
  FUN_008c6ab0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c8180(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c4b10(*(long *)(param_1 + 0x78),*(int *)(*(long *)(param_1 + 0x78) + 0x824) != 0);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  lVar2 = *(long *)(param_1 + 0x78);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x688),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x690),1);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x78),1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x78),1,1);
  FUN_008c8d40(*(undefined8 *)(param_1 + 0x78),0);
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc) = 0;
  if (*(int *)(param_1 + 0x570) == 4) {
    FUN_008c9980(*(undefined8 *)(param_1 + 0x78),0);
  }
  FUN_008c9980(*(undefined8 *)(param_1 + 0x78),1);
  pcVar1 = *(code **)(param_1 + 0xd8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar1)(param_1 + 0xf0);
  }
  *(long *)(param_1 + 0xf0) = param_1;
  *(undefined1 **)(param_1 + 0xd0) = &LAB_01405c60;
  *(undefined1 **)(param_1 + 0xd8) = &LAB_01405c70;
  *(undefined1 **)(param_1 + 0xe0) = &LAB_01405c80;
  *(undefined1 **)(param_1 + 0xe8) = &LAB_01405c90;
  *(undefined4 *)(param_1 + 0x570) = 4;
  return;
}


