/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd79b0; name: FUN_00cd79b0
 */


void FUN_00cd79b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0xf4) = 2;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x78),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x78),1,1);
    FUN_00ccd8c0(*(undefined8 *)(param_1 + 0x78),1);
  }
  else if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xf4) = 4;
    FUN_00cce8f0(uVar3,0,0);
    FUN_00cce8f0(uVar3,1,0);
    FUN_00cce8f0(uVar3,2,0);
  }
  FUN_00cd14e0(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


