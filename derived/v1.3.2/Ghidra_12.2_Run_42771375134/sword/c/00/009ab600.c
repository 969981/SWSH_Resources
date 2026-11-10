/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ab600; name: FUN_009ab600
 */


void FUN_009ab600(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long *local_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_38 [2];
  
  cVar1 = FUN_00945f40(param_2);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      plVar4 = (long *)FUN_00946110(param_2,uVar6);
      uVar2 = 1;
      local_44 = 1;
      local_50 = plVar4;
      local_48 = FUN_00946d80(*(undefined4 *)((long)plVar4 + 0x54));
      if (*plVar4 != 0) {
        uVar2 = FUN_008e1650();
      }
      local_44 = uVar2;
      FUN_00942450(param_1);
      uVar5 = FUN_00925060();
      FUN_009681e0(uVar5,local_38,&local_50);
      uVar6 = uVar6 + 1;
      *(undefined4 *)((long)plVar4 + 0x54) = local_38[0];
      uVar3 = FUN_00945f40(param_2);
    } while (uVar6 < (uVar3 & 0xff));
  }
  return;
}


