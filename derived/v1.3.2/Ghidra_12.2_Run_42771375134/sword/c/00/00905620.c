/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905620; name: FUN_00905620
 */


undefined8
FUN_00905620(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  switch(*param_6) {
  case 0:
    FUN_00905760(param_1,param_2,param_4,param_6);
    break;
  case 1:
    FUN_00914330(*(undefined8 *)(param_1 + 0x340),param_3);
    uVar1 = FUN_008e0a00();
    uVar2 = FUN_008e0a00(param_4);
    FUN_00918600(param_2,uVar2,*(undefined2 *)((long)param_6 + 6),uVar1,0);
    break;
  case 2:
    FUN_00918630(param_2,param_3,*(undefined1 *)(param_6 + 2));
    break;
  case 3:
    uVar1 = FUN_008e0a00(param_4);
    FUN_00918680(param_2,uVar1);
    break;
  case 4:
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar1 = FUN_008ecc30(uVar4,uVar3,param_4,0xa5,auStack_38);
    uVar2 = FUN_008e0a00(param_4);
    FUN_00918500(param_2,uVar2,0xa5,uVar1,0,0);
    break;
  default:
    uVar1 = FUN_008e0a00(param_4);
    FUN_009186d0(param_2,uVar1);
  }
  return param_2;
}


