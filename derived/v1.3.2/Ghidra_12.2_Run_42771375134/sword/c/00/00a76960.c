/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a76960; name: FUN_00a76960
 */


void FUN_00a76960(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  char acStack_60 [64];
  
  snprintf(acStack_60,0x40,"bin/graphics/mask_texture/pattern_%02d/mask%d.bntx",param_3 + 1,param_4)
  ;
  FUN_00a769b0(param_1,acStack_60);
  return;
}


