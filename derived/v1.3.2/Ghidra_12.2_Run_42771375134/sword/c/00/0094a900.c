/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a900; name: FUN_0094a900
 */


void FUN_0094a900(undefined8 param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char local_68 [8];
  ulong local_60;
  uint local_58;
  undefined2 local_54;
  char *local_50;
  byte local_48;
  
  *param_2 = '\0';
  FUN_00942390();
  uVar2 = FUN_009319a0();
  uVar3 = FUN_00913dd0(uVar2,param_3[1]);
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_009424e0(param_1,param_3[1]);
    if (*param_3 == '\x1f') {
      uVar2 = 0;
      uVar4 = FUN_008e1600(uVar3);
    }
    else {
      uVar2 = FUN_009424e0(param_1);
      uVar4 = FUN_008e1600(uVar3);
    }
    if (((uVar4 & 1) == 0) &&
       ((param_3[6] == '\0' || (uVar4 = FUN_008e2ec0(uVar3), (uVar4 & 1) == 0)))) {
      local_58 = (uint)*(ushort *)(param_3 + 2);
      local_54 = CONCAT11(local_54._1_1_,param_3[4]);
      local_60 = uVar3;
      FUN_00942450(param_1);
      uVar5 = FUN_00925bf0();
      FUN_0094bc60(uVar5,local_68,&local_60);
      if (param_3[8] != '\0') {
        uVar5 = FUN_009423b0(param_1);
        FUN_00938920(uVar5,uVar2);
      }
      if ((param_3[9] == '\x02') || (local_68[0] != '\0' && param_3[9] == '\x01')) {
        local_58 = 0;
        local_60 = CONCAT44((int)(local_60 >> 0x20),*(undefined4 *)(param_3 + 10)) &
                   0xffffff00ffffffff;
        FUN_00942450(param_1);
        uVar5 = FUN_00925d10();
        FUN_0094ab90(uVar5,local_68,&local_60);
      }
      if (local_68[0] == '\0') {
        uVar5 = FUN_009423e0(param_1);
        FUN_0092b740(uVar5,uVar3,param_3[4],param_3[5]);
        cVar1 = param_3[8];
      }
      else {
        local_54 = *(undefined2 *)(param_3 + 4);
        local_58 = (uint)*(ushort *)(param_3 + 2);
        local_50 = param_3 + 0x10;
        local_48 = param_3[7] ^ 1;
        local_60 = uVar3;
        FUN_00942450(param_1);
        uVar5 = FUN_00925c00();
        FUN_0094ad90(uVar5,local_68,&local_60);
        cVar1 = param_3[8];
      }
      if (cVar1 != '\0') {
        uVar5 = FUN_009423b0(param_1);
        FUN_009389e0(uVar5,uVar2);
      }
      *param_2 = local_68[0];
    }
  }
  return;
}


