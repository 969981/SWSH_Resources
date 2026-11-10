/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969100; name: FUN_00969100
 */


void FUN_00969100(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar2 = 7;
  *param_2 = 7;
  *(undefined1 *)(param_2 + 1) = 0;
  if (*(char *)(param_3[2] + 0xe) != '\x12') {
    uVar3 = FUN_009423e0(param_1);
    uVar2 = FUN_00927a30(uVar3,*param_3,param_3[1],*(undefined1 *)(param_3[2] + 0xe),
                         *(undefined1 *)(param_3 + 3));
    if (*(char *)(param_3 + 3) == '\0') {
      uVar2 = FUN_00969200(param_1,param_2 + 1,*param_3,param_3[1],*(undefined1 *)(param_3[2] + 0xe)
                           ,uVar2);
      cVar1 = *(char *)(param_3[2] + 0xe);
    }
    else {
      cVar1 = *(char *)(param_3[2] + 0xe);
    }
    if ((cVar1 == '\t') && (uVar4 = FUN_008e1810(param_3[1],0x2a), (uVar4 & 1) != 0)) {
      uVar2 = FUN_008892d0(uVar2,8);
    }
    uVar3 = FUN_009423e0(param_1);
    uVar2 = FUN_00927e00(uVar3,*param_3,param_3[1],*(undefined1 *)(param_3[2] + 0xe),uVar2);
  }
  *param_2 = uVar2;
  return;
}


