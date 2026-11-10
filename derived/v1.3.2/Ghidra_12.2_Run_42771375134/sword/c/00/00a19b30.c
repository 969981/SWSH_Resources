/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a19b30; name: FUN_00a19b30
 */


void FUN_00a19b30(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1[1];
  if (0x1df < uVar3) {
    uVar6 = 0;
    puVar7 = (undefined8 *)(param_2 + 0x1a8);
    puVar1 = PTR_DAT_02718ee0 + 0x10;
    do {
      puVar7[-0x35] = puVar1;
      puVar5 = (undefined8 *)puVar7[-3];
      puVar7[-3] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(long *)puVar7[-2] + 0x18))((long *)puVar7[-2],puVar5,puVar7[-1],*puVar7);
      }
      lVar2 = puVar7[-7];
      puVar7[-7] = 0;
      if (lVar2 != 0) {
        (**(code **)(*(long *)puVar7[-6] + 0x18))((long *)puVar7[-6],lVar2,puVar7[-5],puVar7[-4]);
      }
      pcVar4 = (code *)puVar7[-0x30];
      if (pcVar4 != (code *)0x0) {
        puVar7[-0x2e] = 0;
        puVar7[-0x2f] = 0;
        puVar7[-0x30] = 0;
        puVar7[-0x31] = 0;
        (*pcVar4)(puVar7 + -0x2d);
      }
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0x3c;
    } while (uVar6 < uVar3 / 0x1e0);
    uVar3 = param_1[1];
  }
                    /* WARNING: Could not recover jumptable at 0x00a19c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,uVar3,param_1[2]);
  return;
}


