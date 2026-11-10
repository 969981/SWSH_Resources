/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00948f40; name: FUN_00948f40
 */


void FUN_00948f40(undefined8 param_1,char *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_48 [8];
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  
  *param_2 = '\0';
  uVar3 = FUN_009424e0(param_1,param_3[1]);
  local_38 = CONCAT11(local_38._1_1_,param_3[10]);
  local_40 = uVar3;
  FUN_00942450(param_1);
  uVar4 = FUN_00925b10();
  FUN_00949160(uVar4,local_48,&local_40);
  if (local_48[0] == '\0') {
    *param_2 = '\x01';
  }
  else {
    if (local_48[0] == '\x03') {
      return;
    }
    if (local_48[0] == '\x01') {
      if (param_3[7] == '\0') {
        return;
      }
      uVar4 = FUN_009423b0(param_1);
      FUN_00936080(uVar4,uVar3,0x4b8);
      return;
    }
  }
  if (param_3[6] != '\0') {
    uVar4 = FUN_009423b0(param_1);
    FUN_00938900(uVar4,*param_3);
  }
  if (*param_2 != '\0') {
    local_38 = *(undefined2 *)(param_3 + 2);
    local_36 = param_3[9];
    local_40 = uVar3;
    FUN_00942450(param_1);
    uVar3 = FUN_00925b50();
    FUN_00949520(uVar3,local_48,&local_40);
    iVar2 = FUN_00943f50(param_3 + 0xc);
    if (iVar2 != 0) {
      uVar3 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar3,param_3 + 0xc);
      cVar1 = param_3[6];
      goto joined_r0x00949070;
    }
    if (*(short *)(param_3 + 4) != 0) {
      uVar3 = FUN_009423b0(param_1);
      FUN_009360e0(uVar3,0x4d0,param_3[1],*(undefined2 *)(param_3 + 4));
    }
  }
  cVar1 = param_3[6];
joined_r0x00949070:
  if (cVar1 != '\0') {
    uVar3 = FUN_009423b0(param_1);
    FUN_009389c0(uVar3,*param_3);
  }
  return;
}


