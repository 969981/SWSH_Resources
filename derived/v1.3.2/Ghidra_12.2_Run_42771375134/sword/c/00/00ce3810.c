/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce3810; name: FUN_00ce3810
 */


void FUN_00ce3810(long param_1)

{
  code *pcVar1;
  long lVar2;
  long alStack_90 [12];
  
  FUN_01471770(*(long *)(param_1 + 0x5e0) +
               (ulong)*(byte *)(*(long *)(param_1 + 0x5d0) + 0x70) * 0x218);
  lVar2 = *(long *)(param_1 + 0x600);
  pcVar1 = *(code **)(lVar2 + 0xb8);
  alStack_90[0] = param_1;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 0;
    (*pcVar1)(lVar2 + 0xd0);
  }
  FUN_00ce3d70(alStack_90,lVar2 + 0xd0);
  *(undefined1 **)(lVar2 + 200) = &LAB_00ce3d80;
  *(code **)(lVar2 + 0xb8) = FUN_00ce3d60;
  *(code **)(lVar2 + 0xc0) = FUN_00ce3d70;
  *(undefined8 *)(lVar2 + 0xb0) = &LAB_00ce3ce0;
  FUN_00ce3d60(alStack_90);
  return;
}


