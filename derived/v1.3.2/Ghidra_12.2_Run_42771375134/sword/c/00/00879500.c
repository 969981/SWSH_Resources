/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879500; name: FUN_00879500
 */


void FUN_00879500(long param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(param_1 + 0x98);
  uVar7 = FUN_00867b80(*puVar8);
  bVar1 = (uVar7 & 1) == 0;
  if (bVar1) {
    FUN_00867b90(*puVar8);
  }
  uVar4 = FUN_00868cc0(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_0086b360(*(undefined8 *)(param_1 + 0x98));
  uVar6 = FUN_00869080(*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_00876c70(uVar4,uVar5,uVar6);
  FUN_0086ede0(*(undefined8 *)(param_1 + 0x98),uVar4);
  FUN_008793d0(param_1,param_2 & 1);
  uVar7 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_008679b0(*puVar8), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*puVar8), 1 < (byte)(cVar2 - 1U))) {
    uVar4 = FUN_00879aa0(param_1);
  }
  else {
    uVar4 = FUN_0087a0f0(param_1);
  }
  FUN_0086f190(*puVar8,uVar4);
  uVar7 = FUN_008679b0(*puVar8);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_008679b0(*puVar8), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*puVar8), 1 < (byte)(cVar2 - 1U))) {
    uVar4 = FUN_00879b90(param_1);
  }
  else {
    uVar4 = FUN_0087a1f0(param_1);
  }
  FUN_0086f2c0(*puVar8,uVar4);
  uVar7 = FUN_008679b0(*puVar8);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_008679b0(*puVar8), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*puVar8), 1 < (byte)(cVar2 - 1U))) {
    uVar4 = FUN_00879c80(param_1);
  }
  else {
    uVar4 = FUN_0087a2f0(param_1);
  }
  FUN_0086f3f0(*puVar8,uVar4);
  uVar7 = FUN_008679b0(*puVar8);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_008679b0(*puVar8), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*puVar8), 1 < (byte)(cVar2 - 1U))) {
    uVar4 = FUN_00879d70(param_1);
  }
  else {
    uVar4 = FUN_0087a3f0(param_1);
  }
  FUN_0086f520(*puVar8,uVar4);
  uVar7 = FUN_008679b0(*puVar8);
  if ((((uVar7 & 1) == 0) || (uVar7 = FUN_008679b0(*puVar8), (uVar7 & 1) == 0)) ||
     (cVar2 = FUN_00868a40(*puVar8), 1 < (byte)(cVar2 - 1U))) {
    uVar4 = FUN_00879e60(param_1);
  }
  else {
    uVar4 = FUN_0087a4f0(param_1);
  }
  FUN_0086f650(*puVar8,uVar4);
  bVar3 = FUN_00867b80(*puVar8);
  if ((bVar1 & bVar3) == 1) {
    FUN_00867c20(*puVar8);
    return;
  }
  return;
}


