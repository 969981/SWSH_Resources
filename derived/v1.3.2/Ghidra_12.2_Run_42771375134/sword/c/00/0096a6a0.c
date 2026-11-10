/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a6a0; name: FUN_0096a6a0
 */


void FUN_0096a6a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 local_68;
  long lStack_60;
  undefined4 local_58;
  undefined1 local_54;
  char local_48 [4];
  undefined4 local_44;
  
  iVar1 = FUN_0093b420(param_5);
  FUN_0093b2e0(param_5);
  lVar2 = FUN_0093b2f0(param_5);
  if (lVar2 != 0) {
    if (iVar1 == 1) {
      do {
        while( true ) {
          local_58 = *param_2;
          local_54 = 1;
          local_70 = param_3;
          local_68 = param_4;
          lStack_60 = lVar2;
          FUN_00942450(param_1);
          uVar3 = FUN_00925e50();
          FUN_0096a970(uVar3,local_48,&local_70);
          if (local_48[0] == '\0') break;
          lVar2 = FUN_0093b2f0(param_5);
          if (lVar2 == 0) {
            return;
          }
        }
        FUN_0096a7f0(param_1,param_4,lVar2,param_3,*param_2,local_44);
        FUN_0093b260(param_5,lVar2);
        lVar2 = FUN_0093b2f0(param_5);
      } while (lVar2 != 0);
    }
    else {
      do {
        local_58 = *param_2;
        local_54 = 1;
        local_70 = param_3;
        local_68 = param_4;
        lStack_60 = lVar2;
        FUN_00942450(param_1);
        uVar3 = FUN_00925e50();
        FUN_0096a970(uVar3,local_48,&local_70);
        if (local_48[0] == '\0') {
          FUN_0093b260(param_5,lVar2);
        }
        lVar2 = FUN_0093b2f0(param_5);
      } while (lVar2 != 0);
    }
  }
  return;
}


