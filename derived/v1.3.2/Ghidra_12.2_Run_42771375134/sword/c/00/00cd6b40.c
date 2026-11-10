/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd6b40; name: FUN_00cd6b40
 */


void FUN_00cd6b40(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_00ccfbd0(*(undefined8 *)(param_1 + 0x78)), (uVar1 & 1) == 0)) {
    return;
  }
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
  FUN_00ccd810(*(undefined8 *)(param_1 + 0x78),1);
  FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),1);
  FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),0,0);
  FUN_00ccd860(*(undefined8 *)(param_1 + 0x78),1,1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x78),1,1);
  *(undefined4 *)(param_1 + 0xf4) = 3;
  FUN_012ae3d0(param_1 + 0xf8,(long)*(int *)(*(long *)(param_1 + 0xd8) + 0x26b4) * 1000);
  FUN_00ccd420(*(undefined8 *)(param_1 + 0x78),1);
  FUN_00cd5a10(param_1);
  return;
}


