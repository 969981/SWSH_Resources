/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aac50; name: FUN_009aac50
 */


void FUN_009aac50(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  FUN_00942390();
  uVar2 = FUN_009319b0();
  FUN_00942390(param_1);
  uVar3 = FUN_009319a0();
  uVar4 = FUN_00913530(uVar2,uVar3);
  if ((uVar4 & 1) == 0) {
    FUN_00942390(param_1);
    uVar2 = FUN_009319b0();
    cVar1 = FUN_00913400(uVar2,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_00942390(param_1);
  uVar4 = FUN_0092faa0();
  FUN_009423b0(param_1);
  if ((uVar4 & 1) == 0) {
    FUN_00939640();
  }
  else {
    FUN_009394b0();
  }
  uVar2 = FUN_00942430(param_1);
  FUN_00942390(param_1);
  uVar3 = FUN_009319a0();
  FUN_00950dd0(uVar2,uVar3);
  FUN_009423f0(param_1);
  uVar2 = FUN_00942fe0();
  FUN_00943280(uVar2,2);
  return;
}


