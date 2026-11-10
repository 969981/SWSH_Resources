/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095dff0; name: FUN_0095dff0
 */


void FUN_0095dff0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 0xe) {
    iVar1 = FUN_00880f80(*(undefined4 *)(param_3 + 4));
  }
  uVar2 = FUN_009423b0(param_1);
  FUN_00938c00(uVar2,*param_3,param_3[1],*(undefined4 *)(param_3 + 4),param_3[8],
               *(undefined4 *)(param_3 + 0xc),param_3[0x10],param_3[0x11],0,iVar1);
  return;
}


