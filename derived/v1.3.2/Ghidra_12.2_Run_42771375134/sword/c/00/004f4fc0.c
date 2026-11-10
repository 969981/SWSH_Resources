/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4fc0; name: FUN_004f4fc0
 */


long FUN_004f4fc0(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  param_2 = param_2 & 0xffffffff;
  if (uVar3 <= uVar1) {
    uVar2 = FUN_004f50e0(param_1,4);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar1 < uVar3) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar4 = *param_1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    puVar5 = (undefined4 *)(lVar4 + (ulong)uVar1 * 0x18);
    if (puVar5 != (undefined4 *)0x0) {
      lVar4 = lVar4 + (ulong)uVar1 * 0x18;
      *puVar5 = 0;
      *(undefined8 *)(lVar4 + 4) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      lVar4 = *param_1;
    }
    if ((undefined4 *)(lVar4 + param_2 * 0x18) < puVar5) {
      do {
        FUN_004e7d20(puVar5);
        puVar6 = puVar5 + -6;
        *puVar5 = *puVar6;
        *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar5 + -2);
        puVar5[2] = puVar5[-4];
        *puVar6 = 0;
        *(undefined8 *)(puVar5 + -2) = 0;
        puVar5[-4] = 0;
        puVar5 = puVar6;
      } while ((undefined4 *)(*param_1 + param_2 * 0x18) < puVar6);
    }
    FUN_004e7ce0();
    lVar4 = *param_1;
    puVar5 = (undefined4 *)(lVar4 + param_2 * 0x18);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      lVar4 = lVar4 + param_2 * 0x18;
      *(undefined8 *)(lVar4 + 4) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      return *param_1 + param_2 * 0x18;
    }
  }
  return 0;
}


