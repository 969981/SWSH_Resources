/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009489e0; name: FUN_009489e0
 */


void FUN_009489e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = FUN_008e2ef0(*param_3,4);
  if (cVar1 != '\0') {
    if (((byte)(cVar1 - 1U) < 0x1e) && (lVar3 = FUN_009424e0(param_1), lVar3 != 0)) {
      FUN_00948ab0(param_1,lVar3,*(undefined1 *)((long)param_3 + 9));
      uVar6 = *param_3;
      cVar1 = *(char *)(param_3 + 1);
      uVar4 = FUN_009423b0(param_1);
      FUN_00937710(uVar4,uVar6,4,0);
      if ((cVar1 != '\0') && (uVar5 = FUN_008e1600(uVar6), (uVar5 & 1) == 0)) {
        uVar4 = FUN_009423b0(param_1);
        uVar2 = FUN_008e0a00(uVar6);
        FUN_0093a080(uVar4,uVar2,0);
        return;
      }
    }
  }
  return;
}


