/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00928440; name: FUN_00928440
 */


bool FUN_00928440(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_2 = 0;
  bVar2 = FUN_008e12a0(param_3,0x11);
  bVar3 = FUN_008e12a0(param_4,0x11);
  bVar1 = false;
  if (bVar3 <= bVar2) {
    FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_008e0a00(param_3);
    FUN_008db3f0(uVar11,3,uVar4);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = FUN_008e0a00(param_4);
    FUN_008db3f0(uVar11,4,uVar4);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
    FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x75,0);
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x8c);
    iVar6 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
    iVar7 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x75);
    *param_2 = iVar7 != 0;
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
    bVar1 = false;
    if (iVar6 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = FUN_009319a0(*(undefined8 *)(param_1 + 0x18));
      uVar9 = FUN_0092f720(uVar10,param_3,param_4,uVar11);
      if ((uVar9 & 1) == 0) {
        cVar5 = FUN_009285d0(param_1,0x43,param_3,param_4,param_5);
        uVar8 = FUN_008ebfa0(100);
        bVar1 = uVar8 < (byte)((bVar2 - bVar3) + cVar5);
      }
      else {
        bVar1 = true;
      }
    }
  }
  return bVar1;
}


