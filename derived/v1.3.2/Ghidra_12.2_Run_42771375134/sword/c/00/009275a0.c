/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009275a0; name: FUN_009275a0
 */


void FUN_009275a0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  
  iVar1 = param_4[4];
  puVar12 = (undefined8 *)(param_1 + 0x10);
  FUN_008db2b0(*puVar12);
  uVar11 = *puVar12;
  uVar3 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar11,3,uVar3);
  uVar11 = *puVar12;
  uVar3 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar11,4,uVar3);
  bVar2 = iVar1 != 2;
  iVar8 = 0xb;
  if (bVar2) {
    iVar8 = 9;
  }
  iVar9 = 9;
  if (bVar2) {
    iVar9 = 0xb;
  }
  iVar10 = 1;
  if (bVar2) {
    iVar10 = 2;
  }
  FUN_008db3f0(1,*puVar12,0x41,iVar8);
  FUN_008db380(*puVar12,0x42,0);
  FUN_008db460(*puVar12,0x59,0);
  FUN_008dad40(*puVar12,0x4a);
  cVar4 = FUN_008db610(*puVar12,0x59);
  uVar7 = FUN_008db610(*puVar12,0x42);
  FUN_008db2f0(*puVar12);
  if ((uVar7 & 1) != 0) {
    iVar8 = iVar9;
    iVar1 = iVar10;
  }
  if (cVar4 == '\0') {
    if ((param_5 & 1) == 0) {
      uVar5 = FUN_008e12a0(param_3,iVar8);
    }
    else {
      uVar5 = FUN_008e2b70(param_3,iVar8);
    }
  }
  else {
    uVar5 = FUN_008e1720(param_3,iVar8);
  }
  cVar4 = FUN_00927910(param_1);
  if (((cVar4 == '\x04') && (uVar7 = FUN_008e29c0(param_3,5), iVar8 == 0xb)) && ((uVar7 & 1) != 0))
  {
    uVar5 = FUN_008ec010(uVar5,0x1800);
  }
  FUN_008db2b0(*puVar12);
  uVar11 = *puVar12;
  uVar3 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar11,3,uVar3);
  uVar11 = *puVar12;
  uVar3 = FUN_008e0a00(param_3);
  FUN_008db3f0(uVar11,4,uVar3);
  FUN_008db3f0(*puVar12,0x12,*param_4);
  FUN_008db3f0(*puVar12,0x16,*(undefined1 *)((long)param_4 + 0xe));
  FUN_008db3f0(*puVar12,0x1b,iVar1);
  FUN_008db380(*puVar12,0x37,uVar5);
  FUN_008db500(*puVar12,0x38,0x1000,0x19a,0x20000);
  FUN_008dad40(*puVar12,0x4d);
  uVar5 = FUN_008db610(*puVar12,0x37);
  uVar6 = FUN_008db610(*puVar12,0x38);
  FUN_008db2f0(*puVar12);
  FUN_008ec010(uVar5,uVar6);
  return;
}


