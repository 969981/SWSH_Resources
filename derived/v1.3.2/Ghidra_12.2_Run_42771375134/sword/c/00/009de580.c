/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de580; name: FUN_009de580
 */


void FUN_009de580(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_1a0 [352];
  
  lVar5 = *(long *)(param_1 + 0xb00);
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xb08);
    FUN_009af540(auStack_1a0);
    FUN_009af560(auStack_1a0,lVar5,uVar1);
    uVar2 = FUN_009af7d0(auStack_1a0);
    FUN_009af550(auStack_1a0);
  }
  *(undefined2 *)(param_1 + 0xb18) = uVar2;
  if (param_4 < 8) {
    *(undefined4 *)(param_1 + 0xb1c) = *(undefined4 *)(&DAT_01d4dba0 + (long)(int)param_4 * 4);
    uVar3 = FUN_008fa550(param_2);
  }
  else {
    *(undefined4 *)(param_1 + 0xb1c) = 2;
    uVar3 = FUN_008fa550(param_2);
  }
  if (((uVar3 & 1) == 0) && (uVar3 = FUN_008fa580(param_2), (uVar3 & 1) == 0)) {
    iVar4 = (uint)(param_4 - 3 < 2) << 1;
  }
  else {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0xb20) = iVar4;
  return;
}


