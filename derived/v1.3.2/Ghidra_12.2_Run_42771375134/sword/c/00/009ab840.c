/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ab840; name: FUN_009ab840
 */


void FUN_009ab840(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [40];
  undefined1 *local_38;
  undefined1 auStack_28 [8];
  
  FUN_00942390();
  uVar3 = FUN_009319b0();
  cVar1 = FUN_00913400(uVar3,0);
  FUN_0093ac80(auStack_60);
  FUN_009ab9b0(param_1,auStack_60);
  FUN_009aba80(param_1,auStack_60);
  local_38 = auStack_60;
  FUN_00942450(param_1);
  uVar3 = FUN_00925020();
  FUN_00943510(uVar3,auStack_28,&local_38);
  FUN_009423e0(param_1);
  FUN_00929860();
  FUN_009423f0(param_1);
  uVar3 = FUN_00942fe0();
  uVar4 = FUN_00943290(uVar3,1);
  if ((uVar4 & 1) == 0) {
    FUN_009423f0(param_1);
    FUN_00942fe0();
    FUN_009432a0();
    FUN_00942450(param_1);
    uVar3 = FUN_00925120();
    FUN_009a93c0(uVar3,auStack_28,&local_38);
    uVar4 = FUN_009426f0(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_00942390(param_1);
      uVar3 = FUN_009319b0();
      cVar2 = FUN_00913400(uVar3,0);
      if (cVar1 == cVar2) {
        return;
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
      uVar3 = FUN_00942430(param_1);
      FUN_00942390(param_1);
      uVar5 = FUN_009319a0();
      FUN_00950dd0(uVar3,uVar5);
      FUN_009423f0(param_1);
      uVar3 = FUN_00942fe0();
      uVar5 = 2;
    }
    else {
      FUN_009423f0(param_1);
      uVar3 = FUN_00942fe0();
      uVar5 = 4;
    }
    FUN_00943280(uVar3,uVar5);
  }
  return;
}


