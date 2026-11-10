/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cda640; name: FUN_00cda640
 */


void FUN_00cda640(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
  if (((uVar2 & 1) == 0) ||
     (uVar2 = FUN_00ccfbd0(*(undefined8 *)(param_1 + 0x78)), (uVar2 & 1) == 0)) {
    return;
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  if (*(char *)(*(long *)(param_1 + 0xd0) + 0x88) == '\0') {
    bVar1 = false;
  }
  else {
    FUN_00ccd810(*(undefined8 *)(param_1 + 0x78),1);
    bVar1 = *(char *)(*(long *)(param_1 + 0xd0) + 0x88) != '\0';
  }
  FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),bVar1);
  FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),0,0);
  FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),*(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x88),1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x78),1,1);
  if (*(char *)(param_1 + 0xf0) == *(char *)(*(long *)(param_1 + 0xd0) + 0x2d9)) {
    *(undefined4 *)(param_1 + 0xf4) = 3;
    FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),1);
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = 4;
  }
  FUN_00cd51f0(param_1);
  FUN_00cd5a10(param_1);
  return;
}


