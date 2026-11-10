/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce790; name: FUN_00cce790
 */


void FUN_00cce790(long param_1,int param_2,uint param_3,uint param_4,long param_5,undefined8 param_6
                 )

{
  long lVar1;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lVar1 = (long)param_2;
  local_68 = (&DAT_02a57a78)[lVar1 * 3];
  local_60 = (&DAT_02a57a80)[lVar1 * 3];
  uStack_58 = (&DAT_02a57a88)[lVar1 * 3];
  lStack_48 = param_5;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x5d8),&uStack_58,param_3 & 1);
  lVar1 = param_1 + (long)param_2 * 8;
  FUN_016b2d70(*(undefined8 *)(lVar1 + 0x618),param_3 & 1);
  FUN_016b2da0(*(undefined8 *)(lVar1 + 0x618),param_4 & 1);
  if ((param_5 != -0x340d631b7bddd9bb) && (param_5 != 0)) {
    local_70 = *(long *)(param_1 + 0x6c8);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_008c4e70(param_1 + 0x100,&local_60,&local_70,&lStack_48,10);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(*(long *)(lVar1 + 0x618) + 0xf8) = param_6;
  return;
}


