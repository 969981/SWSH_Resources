/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ba20; name: FUN_0087ba20
 */


void FUN_0087ba20(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_150 [192];
  undefined1 auStack_90 [80];
  
  iVar2 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  iVar3 = FUN_00868cc0(*(undefined8 *)(param_2 + 0x98));
  if (iVar2 == iVar3) {
    FUN_00880350(auStack_90);
    uVar4 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
    uVar5 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
    FUN_0087f4c0(auStack_150);
    FUN_0087f540(auStack_150,uVar4,uVar5);
    uVar5 = FUN_0087f680(auStack_150,0x31);
    iVar2 = FUN_0087f680(auStack_150,0x34);
    uVar4 = 0x32;
    if (iVar2 != 0) {
      uVar4 = 0x33;
    }
    uVar4 = FUN_0087f680(auStack_150,uVar4);
    FUN_008803b0(auStack_90,uVar5,uVar4);
    FUN_0087f510(auStack_150);
    uVar7 = 0;
    while( true ) {
      iVar2 = FUN_00869ee0(*(undefined8 *)(param_2 + 0x98),0);
      iVar3 = FUN_00869ee0(*(undefined8 *)(param_2 + 0x98),1);
      uVar8 = 2;
      if (iVar2 == 0) {
        uVar8 = 1;
      }
      uVar1 = (uint)(iVar2 != 0);
      if (iVar3 != 0) {
        uVar1 = uVar8;
      }
      iVar2 = FUN_00869ee0(*(undefined8 *)(param_2 + 0x98),2);
      if (iVar2 != 0) {
        uVar1 = uVar1 + 1;
      }
      iVar2 = FUN_00869ee0(*(undefined8 *)(param_2 + 0x98),3);
      if (iVar2 != 0) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 <= (uVar7 & 0xff)) break;
      uVar4 = FUN_00869ee0(*(undefined8 *)(param_2 + 0x98),uVar7);
      uVar6 = FUN_00880700(auStack_90,uVar4);
      if ((uVar6 & 1) != 0) {
        FUN_0087bba0(param_1,uVar4);
      }
      uVar7 = uVar7 + 1;
    }
    FUN_00880390(auStack_90);
  }
  return;
}


