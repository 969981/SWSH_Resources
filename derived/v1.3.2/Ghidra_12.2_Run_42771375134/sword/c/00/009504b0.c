/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009504b0; name: FUN_009504b0
 */


void FUN_009504b0(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined2 local_40;
  char local_38 [8];
  
  *param_2 = 0;
  uVar2 = FUN_009424e0(param_1,*param_3);
  uVar3 = FUN_008e1600();
  if (((uVar3 & 1) == 0) || (param_3[4] != '\0')) {
    local_40 = *(undefined2 *)(param_3 + 1);
    local_38[0] = '\0';
    local_48 = uVar2;
    FUN_00942450(param_1);
    uVar4 = FUN_009252c0();
    FUN_00950650(uVar4,local_38,&local_48);
    if (local_38[0] != '\0') {
      uVar4 = FUN_009423b0(param_1);
      FUN_00935bf0(uVar4,param_3 + 8);
      uVar4 = FUN_009423e0(param_1);
      uVar3 = FUN_0092df30(uVar4,uVar2,param_3[1]);
      if ((uVar3 & 1) != 0) {
        local_48._0_3_ = (uint3)(byte)local_48;
        uVar1 = FUN_008e0a00(uVar2);
        local_48 = CONCAT71(local_48._1_7_,uVar1);
        FUN_00942450(param_1);
        uVar2 = FUN_00925d00();
        FUN_00949cb0(uVar2,local_38,&local_48);
      }
      *param_2 = 1;
    }
  }
  return;
}


