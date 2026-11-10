/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af7f0; name: FUN_002af7f0
 */


undefined8
FUN_002af7f0(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5,byte *param_6,
            undefined8 *param_7)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  byte local_5c [4];
  char local_58 [4];
  char local_54 [4];
  char local_48 [4];
  undefined4 local_44;
  
  (**(code **)*param_7)(param_7,local_48,1);
  (**(code **)*param_7)(param_7,local_54,1);
  (**(code **)*param_7)(param_7,local_58,1);
  (**(code **)*param_7)(param_7,local_5c,1);
  uVar4 = 0;
  if (((local_48[0] == 'I') && (local_54[0] == 'C')) && (local_58[0] == 'E')) {
    *param_6 = ~local_5c[0] & 1;
    (**(code **)*param_7)(param_7,local_48,1);
    (**(code **)*param_7)(param_7,local_54,1);
    (**(code **)*param_7)(param_7,local_58,1);
    (**(code **)*param_7)(param_7,local_5c,1);
    if ((((int)local_48[0] == (param_1 & 0xff)) && ((int)local_54[0] == (param_2 & 0xff))) &&
       (((int)local_58[0] == (param_3 & 0xff) && ((int)(char)local_5c[0] == (param_4 & 0xff))))) {
      bVar1 = *param_6;
      (**(code **)*param_7)(param_7,&local_44,4);
      if (bVar1 != 0) {
        uVar2 = (undefined1)local_44;
        uVar3 = local_44._1_1_;
        local_44._0_2_ = CONCAT11(local_44._2_1_,local_44._3_1_);
        local_44 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_44));
      }
      uVar4 = 1;
      *param_5 = local_44;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


