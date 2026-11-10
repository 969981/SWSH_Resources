/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01422350; name: FUN_01422350
 */


void FUN_01422350(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  lVar1 = param_1 + 0x100;
  local_28 = 0xe82c915b1d8e649a;
  uVar2 = FUN_00ffdd70(lVar1,&local_28);
  *(undefined8 *)(param_1 + 0x650) = uVar2;
  local_28 = 0;
  FUN_016b7990(uVar2,&local_28,1,0);
  *(undefined4 *)(param_1 + 0x658) = 0;
  FUN_00ffd450(0,lVar1,"anime_L_button_00_ptn_icon");
  FUN_00ffd450(0x3f800000,lVar1,"anime_L_button_01_ptn_icon");
  FUN_00ffd450(0x40000000,lVar1,"anime_L_button_02_ptn_icon");
  FUN_00ffa290(param_1,0,1);
  return;
}


