/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094a7a0; name: FUN_0094a7a0
 */


void FUN_0094a7a0(undefined8 param_1,byte *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  
  *param_2 = 0;
  cVar1 = *param_3;
  cVar2 = param_3[1];
  if ((cVar1 != cVar2 && cVar1 != '\x02') && cVar2 != '\x02') {
    pcVar8 = *(code **)(param_3 + 8);
    iVar6 = 0;
    bVar7 = 0;
    do {
      uVar4 = (*pcVar8)(iVar6);
      if ((uVar4 & 1) != 0) {
        uVar5 = FUN_009423b0(param_1);
        bVar3 = FUN_00937110(uVar5,cVar1,cVar2,iVar6);
        bVar7 = bVar7 | bVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x18);
    *param_2 = bVar7 & 1;
  }
  return;
}


