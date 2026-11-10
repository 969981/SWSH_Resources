/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094cf00; name: FUN_0094cf00
 */


void FUN_0094cf00(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_50 [8];
  undefined1 local_48;
  undefined1 local_47;
  
  *param_2 = 0;
  if (param_3[3] != '\0') {
    uVar4 = 0;
    do {
      FUN_00942390(param_1);
      uVar1 = FUN_009319a0();
      uVar2 = FUN_00913dd0(uVar1,param_3[uVar4 + 4]);
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_009424e0(param_1,param_3[uVar4 + 4]);
        uVar2 = FUN_008e1600();
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_009423b0(param_1);
          FUN_00937a20(uVar3,uVar1,*(undefined4 *)(param_3 + uVar4 * 4 + 0xc),param_3[0x20],*param_3
                       ,param_3[1] == '\0');
          if (param_3[2] == '\0') {
            local_48 = FUN_008e0a00(uVar1);
            local_47 = 1;
            FUN_00942450(param_1);
            uVar1 = FUN_00925140();
            FUN_00944c20(uVar1,auStack_50,&local_48);
          }
          *param_2 = 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (byte)param_3[3]);
  }
  return;
}


