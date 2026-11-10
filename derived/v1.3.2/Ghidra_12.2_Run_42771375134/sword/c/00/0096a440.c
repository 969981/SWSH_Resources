/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a440; name: FUN_0096a440
 */


undefined8
FUN_0096a440(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  char local_58 [8];
  
  FUN_0093b2e0(param_4);
  lVar4 = FUN_0093b2f0(param_4);
  if (lVar4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      while( true ) {
        uVar1 = *param_2;
        uVar3 = FUN_00880d20(uVar1);
        uVar2 = FUN_00880d80(uVar1);
        FUN_008ec700(uVar2,param_3,&local_98);
        local_6c = 0x1010000000000;
        local_70 = 0;
        local_78 = local_98;
        local_90 = param_3;
        lStack_88 = lVar4;
        local_80 = uVar3;
        FUN_00942450(param_1);
        uVar5 = FUN_00924ff0();
        FUN_00944d40(uVar5,local_58,&local_90);
        if (local_58[0] == '\0') break;
        FUN_0093b260(param_4,lVar4);
        lVar4 = FUN_0093b2f0(param_4);
        if (lVar4 == 0) {
          return uVar6;
        }
      }
      uVar6 = 1;
      lVar4 = FUN_0093b2f0(param_4);
    } while (lVar4 != 0);
  }
  return uVar6;
}


