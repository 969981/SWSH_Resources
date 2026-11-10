/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099c780; name: FUN_0099c780
 */


void FUN_0099c780(undefined8 param_1,undefined8 param_2,int *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  FUN_00942400();
  uVar3 = FUN_00942b40();
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = FUN_00942400(param_1);
  lVar5 = FUN_00942400(param_1);
  uVar1 = FUN_008e0a00(param_2);
  *(undefined1 *)(lVar4 + 0xc) = uVar1;
  *(int *)(lVar4 + 8) = *param_3;
  *(undefined1 *)(lVar4 + 0xd) = param_4;
  if (*param_3 == 0x90) {
    bVar2 = 1;
  }
  else {
    lVar6 = FUN_00942400(param_1);
    bVar2 = FUN_0093af50(lVar6 + 0x10);
    bVar2 = ~bVar2 & 1;
  }
  *(byte *)(lVar4 + 0xe) = bVar2;
  uVar7 = FUN_009423c0(param_1);
  FUN_0095eb80(uVar7,lVar4,lVar5 + 0x10);
  return;
}


