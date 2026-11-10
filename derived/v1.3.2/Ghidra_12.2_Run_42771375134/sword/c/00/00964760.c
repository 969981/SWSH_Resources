/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964760; name: FUN_00964760
 */


void FUN_00964760(char *param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  undefined4 uVar11;
  
  cVar4 = FUN_00965600(param_3);
  *param_1 = '\0';
  *param_2 = 0x1f;
  if ((byte)(cVar4 - 9U) < 0xd) {
    sVar3 = *(short *)((&PTR_DAT_0261f7a0)[(char)(cVar4 - 9U)] + 0xc);
    sVar6 = FUN_00965610(param_3,0);
    sVar7 = FUN_00965610(param_3,1);
    cVar4 = '\x02';
    if (sVar7 != sVar3) {
      cVar4 = '\x01';
    }
    cVar1 = sVar7 == sVar3;
    if (sVar6 == sVar3) {
      cVar1 = cVar4;
    }
    sVar8 = FUN_00965610(param_3,2);
    if (sVar8 == sVar3) {
      cVar1 = cVar1 + '\x01';
    }
    sVar9 = FUN_00965610(param_3,3);
    if (sVar9 == sVar3) {
      cVar1 = cVar1 + '\x01';
    }
    sVar10 = FUN_00965610(param_3,4);
    if (sVar10 == sVar3) {
      cVar1 = cVar1 + '\x01';
    }
    *param_1 = cVar1;
    if (cVar1 == '\x01') {
      uVar11 = 0;
      if (sVar6 != sVar3) {
        uVar11 = 5;
      }
      if (sVar7 == sVar3) {
        uVar11 = 1;
      }
      uVar2 = 2;
      if (sVar8 != sVar3) {
        uVar2 = uVar11;
      }
      uVar11 = 3;
      if (sVar9 != sVar3) {
        uVar11 = uVar2;
      }
      uVar2 = 4;
      if (sVar10 != sVar3) {
        uVar2 = uVar11;
      }
      uVar5 = FUN_00965700(param_3,uVar2);
      *param_2 = uVar5;
    }
  }
  return;
}


