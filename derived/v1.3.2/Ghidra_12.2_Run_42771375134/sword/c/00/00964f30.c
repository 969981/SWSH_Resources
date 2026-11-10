/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00964f30; name: FUN_00964f30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00964f30(char *param_1,undefined1 *param_2,undefined4 *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  
  *param_1 = '\0';
  *param_2 = 0x1f;
  *param_3 = 0;
  uVar4 = FUN_00965720(param_4,0);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    uVar3 = 0;
    uVar5 = 5;
    uVar4 = FUN_00965720(param_4,1);
  }
  else {
    uVar3 = FUN_009656e0(param_4,0);
    uVar5 = 0;
    uVar4 = FUN_00965720(param_4,1);
  }
  cVar6 = !bVar1;
  if ((uVar4 & 1) != 0) {
    uVar5 = 1;
    uVar3 = FUN_009656e0(param_4,1);
    cVar6 = cVar6 + '\x01';
  }
  uVar4 = FUN_00965720(param_4,2);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00965720(param_4,3);
  }
  else {
    uVar5 = 2;
    uVar3 = FUN_009656e0(param_4,2);
    cVar6 = cVar6 + '\x01';
    uVar4 = FUN_00965720(param_4,3);
  }
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00965720(param_4,4);
  }
  else {
    uVar5 = 3;
    uVar3 = FUN_009656e0(param_4,3);
    cVar6 = cVar6 + '\x01';
    uVar4 = FUN_00965720(param_4,4);
  }
  if ((uVar4 & 1) == 0) {
    *param_1 = cVar6;
  }
  else {
    uVar5 = 4;
    uVar3 = FUN_009656e0(param_4,4);
    cVar6 = cVar6 + '\x01';
    *param_1 = cVar6;
  }
  if (cVar6 == '\x01') {
    uVar2 = FUN_00965700(param_4,uVar5);
    *param_2 = uVar2;
    *param_3 = uVar3;
  }
  return;
}


