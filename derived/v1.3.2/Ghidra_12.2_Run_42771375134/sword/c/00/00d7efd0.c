/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7efd0; name: FUN_00d7efd0
 */


void FUN_00d7efd0(long param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong local_38;
  char local_24 [4];
  
  iVar2 = **(int **)(*(long *)(param_1 + 0x5d0) + 0x280);
  if (iVar2 == 1) {
    local_38 = 0xfa262cc5f8b1;
  }
  else {
    if (iVar2 != 2) goto LAB_00d7f03c;
    local_38 = 0xf9262cc5f6fe;
  }
  local_38 = local_38 | 0x970f000000000000;
  uVar5 = FUN_00ffde30(param_1 + 0x100,&local_38);
  *(undefined8 *)(param_1 + 0x5e8) = uVar5;
LAB_00d7f03c:
  local_24[0] = '\0';
  do {
    uVar4 = FUN_00d70660(local_24);
    local_38 = CONCAT44(local_38._4_4_,uVar4);
    bVar3 = FUN_00d70890(&local_38);
    lVar6 = FUN_00d70870(local_24);
    local_38 = *(ulong *)(lVar6 + 0x20);
    FUN_00ffd510((float)bVar3,param_1 + 0x100,&local_38);
    cVar1 = local_24[0] + '\x01';
    bVar3 = local_24[0] + 1;
    local_24[0] = cVar1;
  } while (bVar3 < 0xb);
  FUN_00d7f110(param_1);
  FUN_00d7f5c0(param_1);
  FUN_00d7f690(param_1);
  FUN_00d7fb80(param_1);
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  FUN_00d7fe00(param_1);
  FUN_00ffa290(param_1,0,1);
  return;
}


