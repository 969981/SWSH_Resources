/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096b460; name: FUN_0096b460
 */


void FUN_0096b460(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_60;
  ushort local_58 [4];
  undefined8 local_50;
  undefined1 local_48;
  
  *param_2 = '\0';
  local_80 = *param_3;
  local_78 = *(undefined1 *)(param_3 + 1);
  FUN_00942450();
  uVar4 = FUN_00925500();
  FUN_009501e0(uVar4,&local_50,&local_80);
  uVar1 = (ushort)local_50;
  cVar2 = FUN_008e0a00(*param_3);
  uVar4 = FUN_00942380(param_1);
  uVar5 = FUN_00942390(param_1);
  FUN_00943860(&local_80,uVar4,uVar5);
  while (uVar6 = FUN_00943ae0(&local_80,&local_60), (uVar6 & 1) != 0) {
    cVar3 = FUN_008e0a00(local_60);
    if (cVar3 != cVar2) {
      local_48 = *(undefined1 *)(param_3 + 1);
      local_50 = local_60;
      FUN_00942450(param_1);
      uVar4 = FUN_00925500();
      FUN_009501e0(uVar4,local_58,&local_50);
      if (uVar1 < local_58[0]) {
        *param_2 = *param_2 + '\x01';
      }
    }
  }
  return;
}


