/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5a500; name: FUN_00a5a500
 */


ulong FUN_00a5a500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  short *psVar8;
  
  iVar1 = FUN_014bf840();
  sVar5 = 0x20;
  if (4 < iVar1 - 2U) {
    sVar5 = 0x3000;
  }
  psVar3 = (short *)FUN_0077d470(param_3);
  uVar2 = FUN_0077d480(param_3);
  if (0x7ce < uVar2) {
    FUN_0077d4d0(param_2,param_3);
    return (ulong)uVar2;
  }
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)uVar2;
    iVar1 = 1;
    psVar8 = &DAT_02a54220;
    uVar7 = uVar6;
    do {
      if ((iVar1 < 1) || (*psVar3 != 10)) {
        *psVar8 = *psVar3;
      }
      else {
        *psVar8 = sVar5;
        iVar1 = iVar1 + -1;
      }
      psVar3 = psVar3 + 1;
      psVar8 = psVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  (&DAT_02a54220)[uVar6] = 0;
  uVar4 = FUN_0077db30();
  FUN_0077d520(param_2,uVar4);
  uVar6 = FUN_0077d480(param_2);
  return uVar6;
}


