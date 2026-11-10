/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5270; name: FUN_006c5270
 */


void FUN_006c5270(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  float fVar11;
  
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar4 = param_1[3];
  param_1[3] = lVar9;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  pcVar6 = (code *)param_1[5];
  if (pcVar6 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar6)(param_1 + 8);
  }
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 8);
    lVar9 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x28);
    param_1[6] = *(long *)(param_2 + 0x20);
    param_1[7] = lVar2;
    param_1[4] = lVar9;
    param_1[5] = lVar4;
  }
  pcVar6 = (code *)param_1[0x15];
  if (pcVar6 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar6)(param_1 + 0x18);
  }
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x18);
    lVar9 = *(long *)(param_2 + 0x90);
    lVar4 = *(long *)(param_2 + 0x98);
    lVar2 = *(long *)(param_2 + 0xa8);
    param_1[0x16] = *(long *)(param_2 + 0xa0);
    param_1[0x17] = lVar2;
    param_1[0x14] = lVar9;
    param_1[0x15] = lVar4;
  }
  if (param_1[3] == 0) {
    FUN_0069a660(param_1 + 0x24);
  }
  else {
    puVar7 = *(uint **)(param_1[3] + 400);
    plVar1 = param_1 + 0x24;
    piVar10 = (int *)((long)puVar7 + (ulong)*puVar7);
    FUN_0069a660(plVar1);
    if (piVar10 != (int *)0x0) {
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
        piVar10 = (int *)0x0;
      }
      else {
        puVar7 = (uint *)((long)piVar10 + uVar8);
        piVar10 = (int *)((long)puVar7 + (ulong)*puVar7);
      }
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
         (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar8 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = *(int *)((long)piVar10 + uVar8) != 0;
      }
      FUN_0069a7c0(plVar1,bVar3);
      if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
         (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar8 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)((long)piVar10 + uVar8);
      }
      FUN_0069a7e0(plVar1,uVar5);
      fVar11 = DAT_01d4c41c;
      if ((6 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
         (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar8 != 0)) {
        fVar11 = (float)(*(int *)((long)piVar10 + uVar8) - 1);
      }
      FUN_0069a800(fVar11,plVar1);
    }
  }
  FUN_006c5550(param_1 + 0x28,*(undefined8 *)(*param_1 + 0x78),0);
  return;
}


