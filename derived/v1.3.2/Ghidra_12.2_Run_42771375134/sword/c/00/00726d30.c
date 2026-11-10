/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00726d30; name: FUN_00726d30
 */


void FUN_00726d30(long param_1,int param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x108) + 0x2c0) + (long)param_2 * 0x38);
  lVar5 = *plVar3;
  lVar1 = plVar3[1];
  uVar4 = lVar1 - lVar5 >> 3;
  if (1 < uVar4) {
    uVar2 = FUN_0072e520(*(undefined8 *)(param_1 + 0x360));
    if (uVar2 != param_3) {
      if (lVar1 - lVar5 != 0) {
        lVar5 = 0;
        uVar6 = (ulong)param_3;
        do {
          FUN_0072e410(*(undefined8 *)(param_1 + 0x360),*(undefined4 *)(*plVar3 + lVar5),uVar6 == 0,
                       2);
          lVar5 = lVar5 + 8;
          uVar6 = uVar6 - 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      FUN_0072e530(*(undefined8 *)(param_1 + 0x360),param_2,param_3);
      return;
    }
  }
  return;
}


