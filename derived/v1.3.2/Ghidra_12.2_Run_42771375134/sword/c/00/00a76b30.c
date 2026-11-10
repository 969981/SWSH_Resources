/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a76b30; name: FUN_00a76b30
 */


void FUN_00a76b30(undefined8 param_1,undefined8 param_2,int param_3)

{
  char acStack_60 [64];
  
  snprintf(acStack_60,0x40,"bin/graphics/mask_graphics/pattern_%02d/pattern_%02d.gfbmdl",param_3 + 1
           ,param_3 + 1);
  FUN_00a769b0(param_1,acStack_60);
  return;
}


