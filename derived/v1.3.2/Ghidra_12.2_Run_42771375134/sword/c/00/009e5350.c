/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e5350; name: FUN_009e5350
 */


ulong FUN_009e5350(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 local_48 [4];
  undefined1 local_38 [8];
  
  uVar6 = FUN_008f3790(*(undefined8 *)(param_1 + 8));
  if ((int)uVar6 != 0) {
    local_38[0] = 0x1f;
    local_48[0] = 0;
    iVar2 = FUN_00904740(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),local_38,
                         local_48);
    uVar6 = 0;
    if (iVar2 == 5) {
      uVar6 = FUN_00905410(*(undefined8 *)(param_1 + 0x18));
      if ((uVar6 & 1) == 0) {
        uVar6 = 0;
      }
      else {
        uVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 8));
        uVar4 = FUN_008f87e0(*(undefined8 *)(param_1 + 8));
        uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar5 = FUN_008e0a00(*(undefined8 *)(param_1 + 0x20));
        uVar5 = FUN_008f9470(uVar8,uVar7,uVar5);
        FUN_008ed700(local_48,2,uVar5);
        cVar1 = FUN_008ee2f0(local_48,uVar3,uVar4,uVar7,local_38);
        uVar6 = (ulong)(cVar1 != '\0');
      }
    }
  }
  return uVar6;
}


