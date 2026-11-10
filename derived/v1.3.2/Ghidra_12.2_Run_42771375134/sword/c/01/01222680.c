/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01222680; name: FUN_01222680
 */


void FUN_01222680(undefined4 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar6 = FUN_008783b0(param_2);
  uVar5 = FUN_008783c0(param_2);
  uVar7 = FUN_0087ccf0(param_2);
  bVar1 = FUN_0087ea90(param_2);
  bVar2 = FUN_0087d610(param_2,2);
  cVar3 = FUN_00879760(param_2);
  if (cVar3 == '\x01') {
    iVar9 = 1;
  }
  else {
    cVar3 = FUN_00879760(param_2);
    iVar9 = (uint)(cVar3 == '\x02') << 1;
  }
  uVar8 = FUN_0087ec90(param_2);
  uVar4 = FUN_00878dd0(param_2);
  *param_1 = uVar6;
  *(undefined2 *)(param_1 + 1) = uVar5;
  param_1[2] = uVar7;
  *(byte *)(param_1 + 3) = bVar1 & 1;
  *(byte *)((long)param_1 + 0xd) = bVar2 & 1;
  param_1[4] = iVar9;
  param_1[5] = uVar8;
  *(undefined1 *)(param_1 + 6) = uVar4;
  return;
}


