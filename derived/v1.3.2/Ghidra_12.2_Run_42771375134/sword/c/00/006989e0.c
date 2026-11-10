/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006989e0; name: FUN_006989e0
 */


void FUN_006989e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  code *pcVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  float fVar13;
  
  lVar11 = *(long *)(param_2 + 8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar6 = param_1[3];
  param_1[3] = lVar11;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  pcVar8 = (code *)param_1[5];
  if (pcVar8 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar8)(param_1 + 8);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = *(undefined8 *)(param_2 + 0x20);
    param_1[7] = uVar4;
    param_1[4] = uVar2;
    param_1[5] = uVar3;
  }
  pcVar8 = (code *)param_1[0x15];
  if (pcVar8 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar8)(param_1 + 0x18);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    uVar3 = *(undefined8 *)(param_2 + 0x98);
    uVar4 = *(undefined8 *)(param_2 + 0xa8);
    param_1[0x16] = *(undefined8 *)(param_2 + 0xa0);
    param_1[0x17] = uVar4;
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar3;
  }
  if (param_1[3] == 0) {
    FUN_0069a660(param_1 + 0x24);
  }
  else {
    puVar9 = *(uint **)(param_1[3] + 400);
    puVar1 = param_1 + 0x24;
    piVar12 = (int *)((long)puVar9 + (ulong)*puVar9);
    FUN_0069a660(puVar1);
    if (piVar12 != (int *)0x0) {
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar10 == 0)) {
        piVar12 = (int *)0x0;
      }
      else {
        puVar9 = (uint *)((long)piVar12 + uVar10);
        piVar12 = (int *)((long)puVar9 + (ulong)*puVar9);
      }
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar10 == 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = *(int *)((long)piVar12 + uVar10) != 0;
      }
      FUN_0069a7c0(puVar1,bVar5);
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 9) ||
         (uVar10 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[4], uVar10 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((long)piVar12 + uVar10);
      }
      FUN_0069a7e0(puVar1,uVar7);
      fVar13 = DAT_01d4c41c;
      if ((6 < *(ushort *)((long)piVar12 - (long)*piVar12)) &&
         (uVar10 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar10 != 0)) {
        fVar13 = (float)(*(int *)((long)piVar12 + uVar10) - 1);
      }
      FUN_0069a800(fVar13,puVar1);
    }
  }
  FUN_00698cf0(param_1 + 0x28,*param_1,0);
  return;
}


