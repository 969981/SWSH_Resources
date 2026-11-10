/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094ab90; name: FUN_0094ab90
 */


void FUN_0094ab90(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  char cVar5;
  undefined8 uVar6;
  
  cVar2 = *(char *)(param_3 + 1);
  cVar3 = *(char *)((long)param_3 + 3);
  uVar4 = *param_3;
  cVar5 = cVar2 != '\x05';
  if (cVar3 != '\x05') {
    cVar5 = '\x02';
  }
  if (*(char *)(param_3 + 2) == '\0') {
    if (cVar5 == '\x02') {
      uVar6 = FUN_009423b0();
      FUN_0093a170(uVar6,cVar2,cVar3,uVar4);
      return;
    }
    if (cVar5 == '\x01') {
      uVar6 = FUN_009423b0();
      FUN_00937270(uVar6,cVar2,uVar4);
      return;
    }
    if (cVar5 == '\0') {
      uVar6 = FUN_009423b0();
      FUN_0093a160(uVar6,uVar4);
      return;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
    if (cVar5 == '\x02') {
      uVar6 = FUN_009423a0();
      FUN_00918050(uVar6,uVar1,0xa4,cVar2,cVar3,uVar4);
      return;
    }
    if (cVar5 == '\x01') {
      uVar6 = FUN_009423a0();
      FUN_00918050(uVar6,uVar1,0xa3,cVar2,uVar4);
      return;
    }
    if (cVar5 == '\0') {
      uVar6 = FUN_009423a0();
      FUN_00918050(uVar6,uVar1,0xa2,uVar4);
      return;
    }
  }
  return;
}


