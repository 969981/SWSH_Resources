/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009651a0; name: FUN_009651a0
 */


void FUN_009651a0(char *param_1,undefined1 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  
  *param_1 = '\0';
  *param_2 = 0x1f;
  bVar3 = FUN_00965720(param_3,0);
  bVar4 = FUN_00965720(param_3,1);
  bVar5 = FUN_00965720(param_3,2);
  bVar6 = FUN_00965720(param_3,3);
  bVar7 = FUN_00965720(param_3,4);
  cVar1 = (bVar3 & 1) + (bVar4 & 1) + (bVar5 & 1) + (bVar6 & 1) + (bVar7 & 1);
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    uVar9 = 0;
    if ((bVar3 & 1) == 0) {
      uVar9 = 5;
    }
    if ((bVar4 & 1) != 0) {
      uVar9 = 1;
    }
    uVar2 = 2;
    if ((bVar5 & 1) == 0) {
      uVar2 = uVar9;
    }
    uVar9 = 3;
    if ((bVar6 & 1) == 0) {
      uVar9 = uVar2;
    }
    uVar2 = 4;
    if ((bVar7 & 1) == 0) {
      uVar2 = uVar9;
    }
    uVar8 = FUN_00965700(param_3,uVar2);
    *param_2 = uVar8;
  }
  return;
}


