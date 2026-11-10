/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ae240; name: FUN_009ae240
 */


void FUN_009ae240(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  
  cVar1 = FUN_00945f40(*param_3);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)FUN_00946110(*param_3,uVar6);
      if (*(int *)(puVar4 + 1) == 1) {
        uVar5 = FUN_009423e0(param_1);
        uVar2 = FUN_0092cf40(uVar5,*puVar4,*(undefined4 *)(puVar4 + 2));
        uVar5 = FUN_009423b0(param_1);
        FUN_009382e0(uVar5,*puVar4,uVar2);
      }
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00945f40(*param_3);
    } while (uVar6 < (uVar3 & 0xff));
  }
  return;
}


