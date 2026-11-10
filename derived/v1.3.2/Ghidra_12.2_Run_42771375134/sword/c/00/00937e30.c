/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937e30; name: FUN_00937e30
 */


void FUN_00937e30(long param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  
  uVar1 = FUN_008e0a00(param_2);
  FUN_008e38c0(param_2,param_3,param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  local_48 = 0;
  FUN_008ed4b0(param_4,(long)&local_48 + 4,&local_48);
  FUN_00916b10(uVar3,0x13,uVar1,param_3 & 0xff,local_48._4_4_,local_48 & 0xffffffff);
  if ((int)param_3 < 6) {
    if (param_3 == 5) {
      uVar2 = FUN_008ed1d0(param_4);
      param_3 = 5;
      if ((uVar2 & 1) != 0) {
        param_3 = 6;
      }
    }
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x8c,uVar1,param_3);
  }
  return;
}


