/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c2d60; name: FUN_014c2d60
 */


void FUN_014c2d60(long param_1,undefined2 *param_2,long *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  ulong uVar4;
  undefined2 *puVar5;
  
  FUN_0077d660(*(undefined8 *)(param_1 + 0xac0));
  if (param_4 - 1 < 0x201) {
    uVar4 = param_4;
    puVar5 = param_2;
    bVar3 = false;
    do {
      uVar2 = FUN_014ba2e0(*puVar5,0);
      bVar1 = (bool)(~bVar3 & 1);
      if ((uVar2 & 1) == 0) {
        bVar1 = bVar3;
      }
      FUN_0077d5c0(*(undefined8 *)(param_1 + 0xac0),*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      bVar3 = bVar1;
    } while (uVar4 != 0);
    if (bVar1) {
      FUN_0077d5c0(*(undefined8 *)(param_1 + 0xac0),0x1b);
      param_2 = (undefined2 *)FUN_0077d470(*(undefined8 *)(param_1 + 0xac0));
      UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x110);
      param_4 = (ulong)((int)param_4 + 1);
      goto LAB_014c2e24;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x110);
  param_4 = param_4 & 0xffffffff;
LAB_014c2e24:
                    /* WARNING: Could not recover jumptable at 0x014c2e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3,param_2,0,param_4);
  return;
}


