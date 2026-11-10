/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ba860; name: FUN_010ba860
 */


void FUN_010ba860(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_010bc6f0(param_1,1,1);
      return;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0x19;
      FUN_010bc320(param_1,0x1efd4ea03dcc0c9e,0,1,0,0);
      return;
    }
  }
  return;
}


