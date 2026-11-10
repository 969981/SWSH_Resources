/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00951520; name: FUN_00951520
 */


void FUN_00951520(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  FUN_00942390();
  uVar2 = FUN_009319a0();
  uVar3 = FUN_00913dd0(uVar2,*param_3);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_009424e0(param_1,*param_3);
    uVar3 = FUN_008e50f0();
    if ((uVar3 & 1) != 0) {
      uVar4 = FUN_009423b0(param_1);
      FUN_009397d0(uVar4,*param_3);
      uVar4 = FUN_009423b0(param_1);
      FUN_00938a30(uVar4,uVar2);
      uVar4 = FUN_009423b0(param_1);
      FUN_00939810(uVar4,*param_3);
      uVar3 = FUN_00943f10(param_3 + 4);
      uVar4 = FUN_009423b0(param_1);
      if ((uVar3 & 1) == 0) {
        uVar1 = FUN_008e0a00(uVar2);
        FUN_009360c0(uVar4,0x286,uVar1);
      }
      else {
        FUN_00935bf0(uVar4,param_3 + 4);
      }
      *param_2 = 1;
    }
  }
  return;
}


