/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009acfb0; name: FUN_009acfb0
 */


void FUN_009acfb0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  undefined8 local_30;
  undefined4 local_28;
  undefined2 local_24;
  
  local_24 = 0;
  local_28 = 0;
  uVar3 = FUN_00942380();
  uVar4 = FUN_00942390(param_1);
  FUN_00943860(auStack_50,uVar3,uVar4);
  uVar5 = FUN_00943ae0(auStack_50,&local_30);
  while ((uVar5 & 1) != 0) {
    while (cVar1 = FUN_009425b0(param_1,local_30), cVar1 == '\0') {
      uVar2 = FUN_008e0a00(local_30);
      *(undefined1 *)((long)&local_28 + (ulong)(byte)local_28 + 1) = uVar2;
      local_28 = CONCAT31(local_28._1_3_,(byte)local_28 + 1);
      uVar5 = FUN_00943ae0(auStack_50,&local_30);
      if ((uVar5 & 1) == 0) goto LAB_009ad054;
    }
    uVar5 = FUN_00943ae0(auStack_50,&local_30);
  }
LAB_009ad054:
  FUN_00942450(param_1);
  uVar3 = FUN_00925730();
  FUN_0094e250(uVar3,auStack_58,&local_28);
  return;
}


