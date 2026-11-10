/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01142380; name: FUN_01142380
 */


byte FUN_01142380(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte bVar7;
  undefined1 uVar8;
  
  uVar6 = FUN_0077d450(*param_1,*param_2);
  if (((((uVar6 & 1) == 0) || (*(char *)(param_1 + 1) != *(char *)(param_2 + 1))) ||
      (*(char *)((long)param_1 + 9) != *(char *)((long)param_2 + 9))) ||
     (*(short *)((long)param_1 + 10) != *(short *)((long)param_2 + 10))) {
    iVar5 = FUN_0077d480(*param_2);
    bVar7 = 1;
    uVar8 = 1;
    if (iVar5 != 0) {
      uVar8 = 2;
    }
  }
  else {
    bVar7 = 0;
    uVar8 = 0;
  }
  bVar4 = FUN_014ad9e0((long)param_1 + 0xc,(long)param_2 + 0xc);
  bVar2 = *(byte *)(param_1 + 5);
  bVar3 = *(byte *)(param_2 + 5);
  if (param_3 != (undefined1 *)0x0) {
    bVar1 = bVar7;
    if ((bVar4 & 1) == 0) {
      bVar1 = 1;
    }
    *param_3 = uVar8;
    param_3[2] = bVar2 ^ bVar3;
    param_3[1] = bVar1;
  }
  return bVar7 | (bVar4 ^ 1) & 1 | bVar2 != bVar3;
}


