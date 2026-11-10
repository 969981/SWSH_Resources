/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094eae0; name: FUN_0094eae0
 */


void FUN_0094eae0(undefined8 param_1,char *param_2,undefined1 *param_3,undefined8 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 local_50;
  char local_48 [8];
  
  cVar1 = *(char *)((long)param_4 + 9);
  uVar5 = *(undefined1 *)(param_4 + 1);
  FUN_00942380();
  iVar3 = FUN_008f8b90();
  if (iVar3 == 0) {
    if (cVar1 == '\0') {
      local_50 = *param_4;
      FUN_00942450(param_1);
      uVar4 = FUN_009252d0();
      FUN_0094ef20(uVar4,local_48,&local_50);
    }
    else {
      local_48[0] = '\x01';
    }
    FUN_008e0a00(*param_4);
    cVar1 = FUN_008f94e0();
    FUN_00942380(param_1);
    cVar2 = FUN_008f98a0();
    if (cVar1 == cVar2) {
      if (local_48[0] != '\0') {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 1;
    local_48[0] = '\x01';
  }
  *param_2 = local_48[0];
  *param_3 = uVar5;
  return;
}


