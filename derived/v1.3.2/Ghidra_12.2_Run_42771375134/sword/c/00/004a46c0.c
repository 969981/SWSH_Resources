/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a46c0; name: FUN_004a46c0
 */


void FUN_004a46c0(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = (ulong *)param_1[1];
  *param_1 = (long)(PTR_DAT_027133e0 + 0x10);
  puVar2 = PTR_DAT_02712b50;
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  uVar3 = *puVar4;
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      uVar6 = 1L << (uVar5 & 0x3f);
      if ((uVar6 & uVar3) != 0) {
        FUN_0049b7f0(*(undefined8 *)puVar2,param_1,uVar5);
        *(ulong *)param_1[1] = *(ulong *)param_1[1] & (uVar6 ^ 0xffffffffffffffff);
        puVar4 = (ulong *)param_1[1];
      }
      uVar3 = *puVar4;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar3 != 0);
    if (puVar4 == (ulong *)0x0) goto LAB_004a4780;
  }
  uVar1 = *(undefined4 *)PTR_DAT_02712a90;
  if (puVar4[2] != 0) {
    *(undefined4 *)(puVar4 + 3) = 0;
    FUN_00404870(uVar1);
    puVar4[2] = 0;
    *(undefined4 *)((long)puVar4 + 0x1c) = 0;
  }
  FUN_00404870(uVar1,puVar4);
LAB_004a4780:
  param_1[1] = 0;
  return;
}


